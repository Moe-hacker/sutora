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
void show_stage(struct STAGE *stage, struct ACTION *action, u_short width)
{
  printf("\033c");
  // Display body layer.
  struct LAYER_SET **layer = &stage->body;
  while (true)
  {
    if ((*layer)->action == action->body_action)
    {
      break;
    }
    layer = &(*layer)->next;
  }
  show_layer((*layer)->layer, width, (*layer)->x_offset, (*layer)->y_offset);
  // Display face layer.
  layer = &stage->face;
  while (true)
  {
    if ((*layer)->action == action->face_action)
    {
      break;
    }
    layer = &(*layer)->next;
  }
  show_layer((*layer)->layer, width, (*layer)->x_offset, (*layer)->y_offset);
  // Display left eye layer.
  layer = &stage->left_eye;
  while (true)
  {
    if ((*layer)->action == action->left_eye_action)
    {
      break;
    }
    layer = &(*layer)->next;
  }
  show_layer((*layer)->layer, width, (*layer)->x_offset, (*layer)->y_offset);
  // Display right eye layer.
  layer = &stage->right_eye;
  while (true)
  {
    if ((*layer)->action == action->right_eye_action)
    {
      break;
    }
    layer = &(*layer)->next;
  }
  show_layer((*layer)->layer, width, (*layer)->x_offset, (*layer)->y_offset);
  // Display hair layer.
  layer = &stage->hair;
  while (true)
  {
    if ((*layer)->action == action->hair_action)
    {
      break;
    }
    layer = &(*layer)->next;
  }
  show_layer((*layer)->layer, width, (*layer)->x_offset, (*layer)->y_offset);
  // Display ahoge layer.
  layer = &stage->ahoge;
  while (true)
  {
    if ((*layer)->action == action->ahoge_action)
    {
      break;
    }
    layer = &(*layer)->next;
  }
  show_layer((*layer)->layer, width, (*layer)->x_offset, (*layer)->y_offset);
}