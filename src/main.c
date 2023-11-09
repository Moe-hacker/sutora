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
#include "sutora.h"
static void parse_args(int argc, char **argv, struct STAGE *stage)
{
  // XXX
  stage->ahoge = NULL;
  if (strcmp(argv[1], "version") == 0 || strcmp(argv[1], "v") == 0)
  {
    show_version_info();
    exit(0);
  }
  for (int i = 1; i < argc; i++)
  {
    if (strcmp(argv[i], "--speed") == 0)
    {
      i++;
    }
    else if (false)
    {
      //
    }
    else
    {
      error("Unknown argument !");
    }
  }
}
int main(int argc, char **argv)
{
  static struct STAGE stage;
  parse_args(argc, argv, &stage);
  printf("\033[?25l\033c");
  //
  printf("\033[?25h");
  return 0;
}