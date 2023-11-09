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