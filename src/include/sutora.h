// SPDX-License-Identifier: MIT
/*
 *
 * This file is part of sutora, with ABSOLUTELY NO WARRANTY.
 *
 * MIT License
 *
 * Copyright (c) 2023 Moe-hacker
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 *
 */
#include <fcntl.h>
#include <linux/limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/io.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <termios.h>
#include <time.h>
#include <unistd.h>
// Bool!!!
#if __STDC_VERSION__ < 202000L
#define bool _Bool
#define true ((_Bool) + 1u)
#define false ((_Bool) + 0u)
#endif
// Warnings.
#define warning(...) fprintf(stderr, ##__VA_ARGS__)
// Show error msg and exit.
#define error(...)                                                                                                            \
	{                                                                                                                     \
		fprintf(stderr, ##__VA_ARGS__);                                                                               \
		fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", "  .^.   .^.");                                        \
		fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", "  /⋀\\_ﾉ_/⋀\\");                                      \
		fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", " /ﾉｿﾉ\\ﾉｿ丶)|");                                      \
		fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", " ﾙﾘﾘ >  x )ﾘ");                                       \
		fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", "ﾉノ㇏  ^ ﾉ|ﾉ");                                       \
		fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", "      ⠁⠁");                                           \
		fprintf(stderr, "\033[1;38;2;254;228;208m%s\033[0m\n", "If you think something is wrong, please report at:"); \
		fprintf(stderr, "\033[4;1;38;2;254;228;208m%s\033[0m\n", "https://github.com/Moe-hacker/ruri/issues");        \
		exit(EXIT_FAILURE);                                                                                           \
	}
struct STAGE
{
  struct LAYER_SET *body;
  struct LAYER_SET *face;
  struct LAYER_SET *left_eye;
  struct LAYER_SET *right_eye;
  struct LAYER_SET *hair;
  struct LAYER_SET *ahoge;
};
struct ACTION
{
  int body_action;
  int face_action;
  int left_eye_action;
  int right_eye_action;
  int hair_action;
  int ahoge_action;
};
struct LAYER_SET
{
  struct LAYER *layer;
  int action;
  unsigned short x_offset;
  unsigned short y_offset;
  struct LAYER_SET *next;
};
struct LAYER
{
  char *line;
  struct LAYER *next_line;
};
enum
{
  BUF_SIZE = 16384,
};
#define SUTORA_VERSION "0.0"
struct LAYER *register_layer(struct LAYER *layer, const char *path);
void show_layer(struct LAYER *layer, unsigned short width, unsigned short x_offset, unsigned short y_offset);
void show_stage(struct STAGE *stage, struct ACTION *action, unsigned short width);
void show_version_info(void);