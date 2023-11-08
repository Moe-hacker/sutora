#include "sutora.h"
int main(int argc, char **argv)
{
  int fd=open("./1",O_RDONLY);
  char buf[2048]={'\000'};
  read(fd,buf,sizeof(buf));
  printf("%s",buf);
  return 0;
}