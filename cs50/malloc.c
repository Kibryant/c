#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

typedef char* string;

int main(int argc, char *argv[])
{
  string s = "arthur";
  string t = malloc(strlen(s) + 1);

  if (t == NULL) {
    return EXIT_FAILURE;
  }
  
  for (int i = 0, n = strlen(s) + 1; i < n; i++) {
    t[i] = s[i];
  }

  t[0] = toupper(t[0]);

  printf("%s\n", s);
  printf("%s\n", t);

  free(t);

  return EXIT_SUCCESS;
}
