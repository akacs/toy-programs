#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE *fp;
  char buf[BUFSIZ];

  if (argc < 2) {
    fp = stdin;
  } else {
    if ((fp = fopen(argv[argc-1],"r")) == NULL) {
      fprintf(stderr,"Can't open %s\n", argv[argc-1]);
      return 1;
    }
  }
  
  while(fgets(buf,sizeof(buf),fp)!=NULL){
    fprintf(stdout,"%s",buf);
  }

  return 0;
}
