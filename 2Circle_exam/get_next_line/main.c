#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
 int rst;
 char *line;
 while ((rst = get_next_line(&line)) > 0)
 {
  printf("%s\n", line);
  free(line);
  line = 0;
 }
 printf("%s\n", line);
 free(line);
 line = 0;
}