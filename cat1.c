#include <stdio.h>

int main(int argc, char *argv[]) 
{ 
    FILE *fp;

    if (argc < 2) { 
      printf("Usage: %s filename\n", argv[0]); 
      return 1; 
    }
    
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("can't open %s\n", argv[1]);
	return 1;
    } else { 
       int c; 
       while ( (c = getc(fp)) != EOF ) {
	 printf("%1c", c);
       }
       fclose(fp);
    }

    return 0; 
}
