#include <stdio.h>

char hoge(void) {
  return 'a';
}

char *piyo(void) {
}

int main(void) {
  printf("%c\n", hoge());
  
  return 0;
}
