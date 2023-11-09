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
// VSCode doesn't think bool is an C keyword,
// make it happy.
#include <stdbool.h>
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
void error(const char *msg);
void show_version_info();