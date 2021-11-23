#include<stdio.h>
#include<math.h>
#include"matrix.c"

void main_body(FILE *in,FILE *out,M *m){
  V v00,v01,v10,v11;
  int i;
  while(1){
    for(i = 0;i < S;i++)
      if(fscanf(in, "%lf", &(v00.e[i]))==EOF)
        return;
    for(i = 0;i < S;i++)
      if(fscanf(in, "%lf", &(v10.e[i]))==EOF)
        return;
    multiply(&v00, m, &v01);
    multiply(&v10, m, &v11);
    for(i = 0;i < S;i++)
      fprintf(out, "%lf ", v00.e[i]);
    for(i = 0;i < S;i++)
      fprintf(out, "%lf ", v01.e[i]);
    fprintf(out, "\n");
    for(i = 0;i < S;i++)
      fprintf(out, "%lf ", v10.e[i]);
    for(i = 0;i < S;i++)
      fprintf(out, "%lf ", v11.e[i]);
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
      printf("A(%d,%d): ?", i, j);
      scanf("%lf", &(m0.e[i][j]));
    }
  main_body(in, out, &m0); 
  fclose(out);
  fclose(in);
} 
