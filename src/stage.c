#include "sutora.h"
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