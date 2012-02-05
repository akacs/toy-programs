#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 80

int main(int argc, char* argv[]) {
  FILE* fpin, *fpout;
  char buf[BUFSIZE];
  int n;

  if(argc < 3) return 1;
  if((fpin = fopen(argv[1], "rb")) == NULL) return 1;
  if((fpout = fopen(argv[2], "wb")) == NULL) return 1;
  while((n = fread(buf, sizeof(char), sizeof buf, fpin))) {
    fwrite(buf, sizeof(char), n, fpout);
  }
  if(!feof(fpin)){
    fprintf(stderr, "Can't copy.\n");
  }
  fclose(fpout);
  fclose(fpin);
  fprintf(stdout, "Copy suceeded.\n");

  return 0;
}
