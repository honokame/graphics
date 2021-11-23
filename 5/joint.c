#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  FILE *in,*out;
  char string[BUFSIZ];

  if(argc!=3){
    fprintf(stderr,"Usage: %s input.txt output.txt\n",argv[0]);
    return(-1);
  }
  in = fopen(argv[1],"r");
  out = fopen(argv[2],"w");
  while(1){
    if(fgets(string,BUFSIZ,in) == NULL)
      break;
    if(fgets(string,BUFSIZ,in) == NULL)
      break;
    fprintf(out,"%s",string);
    if(fgets(string,BUFSIZ,in) == NULL)
      break;
  }
  fclose(out);
  fclose(in);
}
