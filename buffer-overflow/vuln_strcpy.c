#include <string.h>

void calc(char *arg);

int main(int argc, char **argv)
{
  calc(argv[1]);
  return 0;
}

void calc(char *arg)
{
  char stuff[8];
  strcpy(stuff, arg);
}
