#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main() {
  time_t t;
  struct tm *tmp;
  char buf[64];

  while (1) {
    t = time(NULL);
    tmp = localtime(&t);
    strftime(buf, 64, "%F %T", tmp);
    printf("%s\n", buf);
    sleep(1);
  }

  return 0;
}
