#include <stdio.h>
#include <string.h>

int stringComp(char *s1, char *s2) {
  if (strlen(s1) != strlen(s2)) {
    return 0;
  }

  int len = strlen(s1);

  for (int i = 0; i < len; i++) {
    if (s1[i] != s2[i]) {
      return 0;
    } else
      continue;
  }

  return 1;
}

int main(void) {

  char s1[] = "Hello World!";
  char s2[] = "Hello world!";

  if (stringComp(s1, s2)) {
    printf("Same\n");
  } else
    printf("Different\n");

  return 0;
}
