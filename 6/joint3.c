#include<stdio.h>

int main(int argc, char *argv[]){
  FILE *in,*out;
  char string[BUFSIZ];
  int line;

  if(argc!=3){
    fprintf(stderr,"Usage: %s input.txt output.txt\n",argv[0]);
    return(-1);
  }
  in = fopen(argv[1],"r");
  out = fopen(argv[2],"w");
  line = 0;
  while(1){
    line++;
    if(fgets(string,BUFSIZ,in) == NULL)
      break;
    if(fgets(string,BUFSIZ,in) == NULL)
      break;
    fprintf(out,"%s",string);
    if(line%4 == 0)
      fprintf(out, "\n");
    if(fgets(string,BUFSIZ,in) == NULL)
      break;
    if(fgets(string,BUFSIZ,in) == NULL)
      break;
  }
  fclose(out);
  fclose(in);
}
