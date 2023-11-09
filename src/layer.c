#include "sutora.h"
struct LAYER *register_layer(struct LAYER *layer, const char *path)
{
  struct LAYER **node = &layer;
  char tmp[1024] = {'\000'};
  int fd = open(path, O_RDONLY | O_CLOEXEC);
  char buf[BUF_SIZE] = {'\000'};
  if (read(fd, buf, sizeof(buf)) <= 0)
  {
    error("read error");
  }
  int j = 0;
  for (u_long i = 0; i < strlen(buf); i++)
  {
    if (buf[i] == '\n')
    {
      j = 0;
      *node = (struct LAYER *)malloc(sizeof(struct LAYER));
      (*node)->line = strdup(tmp);
      tmp[0] = '\000';
      node = &(*node)->next_line;
      *node = NULL;
    }
    else
    {
      tmp[j] = buf[i];
      tmp[j + 1] = '\000';
      j++;
    }
  }
  return layer;
}
void show_layer(struct LAYER *layer, u_short width, u_short x_offset, u_short y_offset)
{
  struct winsize size;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
  u_short x_position = (size.ws_col - width) / 2 + x_offset;
  printf("\033[%dH", y_offset);
  struct LAYER **node = &layer;
  while ((*node) != NULL)
  {
    for (u_long i = 0; i < strlen((*node)->line); i++)
    {
      if ((*node)->line[i] != ' ')
      {
        printf("\033[%luG%c", x_position + i, (*node)->line[i]);
      }
    }
    printf("\n");
    node = &(*node)->next_line;
  }
  fflush(stdout);
}