#include<stdio.h>
#include<math.h>

int main(){
  FILE *out;
  int deg0;
  double rad0;
  out = fopen ("1-3.txt","w");
  for(deg0 = 0;deg0 < 360;deg0++){  
    rad0 = deg0 * 3.14 / 180;
    fprintf(out,"%d %lf %lf\n",deg0,cos(rad0),sin(rad0));
  }
  fclose(out);
}
