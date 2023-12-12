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
#include "include/sutora.h"
void show_version_info(void)
{
  /*
   * Just show version info and license.
   * Version info is defined in macro NEKOASC_VERSION.
   * NEKOASC_COMMIT_ID is defined in Makefile.
   */
  printf("\n");
  printf("\033[1;38;2;254;228;208m");
  printf("     ●●●  ●   ● ●●●●●  ●●●   ●●●●    ●   \n");
  printf("    ●     ●   ●   ●   ●   ●  ●   ●  ● ●  \n");
  printf("     ●●●  ●   ●   ●   ●   ●  ●●●●  ●   ● \n");
  printf("        ● ●   ●   ●   ●   ●  ●  ●  ●●●●● \n");
  printf("     ●●●   ●●●    ●    ●●●   ●   ● ●   ● \n");
  printf("       Licensed under the MIT License\n");
  printf("          <https://mit-license.org>\n");
  printf("        Copyright (C) 2023 Moe-hacker\n");
  printf("%s%s%s", "           Sutora version : ", SUTORA_VERSION, "\n");
  printf("%s%s%s\033[0m", "           Commit id      : ", SUTORA_COMMIT_ID, "\n");
  printf("\n");
}