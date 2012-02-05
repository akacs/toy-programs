#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
  char *dir;
  DIR *dp;
  struct dirent *entry;
  struct stat statbuf;
  
  if (argc < 2) {
    dir = getenv("PWD");
  }else{
    dir = argv[1];
  }
  
  if (( dp = opendir(dir) ) == NULL ) {
    perror("opendir");
    exit(EXIT_FAILURE);
  }
  
  while((entry = readdir(dp)) != NULL){
    stat(entry->d_name, &statbuf);
    if(S_ISDIR(statbuf.st_mode)){
      fprintf(stdout, "%s/\n", entry->d_name);
    }else{
      fprintf(stdout, "%s\n", entry->d_name);
    }
  }
  
  closedir(dp);
  
  return 0;
}
