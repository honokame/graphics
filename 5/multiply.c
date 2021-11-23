#include<stdio.h>
#include<math.h>
#include"matrix.c"

void main_body(FILE *in, FILE *out, M *m){
  V v0,v1;
  int i;
  while(1){
    for(i = 0;i < S;i++)
      if(fscanf(in,"%lf",&(v0.e[i]))==EOF)
        return;
    multiply(&v0, m, &v1);
    for(i = 0;i < S;i++)
      fprintf(out,"%lf ",v0.e[i]);
    fprintf(out,"\n");
    for(i = 0;i < S;i++)
      fprintf(out,"%lf ",v1.e[i]);
    fprintf(out, "\n");
    fprintf(out, "\n");
  }
}
  
int main(){
  FILE *in,*out;
  char input[BUFSIZ],output[BUFSIZ];
  int deg0;
  M m0;
  int i,j;
  printf("input file name: ?");
  scanf("%s", input);
  printf("output file name: ?");
  scanf("%s", output);
  in = fopen(input, "r");
  out = fopen(output, "w");
  for(i = 0;i < S;i++) 
    for(j = 0;j < S;j++){
      printf("A(%d,%d): ?",i, j);
      scanf("%lf",&(m0.e[i][j]));
    }
  main_body(in, out, &m0); 
  fclose(out);
  fclose(in);
} 
