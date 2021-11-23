#include<stdio.h>
#include<math.h>

#define S 2
#define R 10.0

typedef struct MATRIX{
  double e[S][S];
}M;

typedef struct VECTOR{
  double e[S];
}V;

void multiply(M *m,V *v,V *r){
  int i,j;
  for(i = 0;i < S;i++){
    r->e[i] = 0;
    for(j = 0;j < S;j++){
      r->e[i]+=(m->e[i][j])*(v->e[j]);
    }
  }
}

double deg2rad(double deg){
  return((deg / 180 * 3.14159));
}  

int main(){
  FILE *out;
  int deg0;
  M m0;
  V v0,v1;

  m0.e[0][0] = cos(deg2rad(R));    
  m0.e[1][0] = sin(deg2rad(R));
  m0.e[0][1] = -sin(deg2rad(R));
  m0.e[1][1] = cos(deg2rad(R));
  v0.e[0] = 1.0;
  v0.e[0] = 0.0;

  out = fopen ("1-4.txt","w");
  for(deg0 = 0;deg0 < 360;deg0++){  
    fprintf(out,"%d %lf %lf\n",deg0,v0.e[0],v0.e[1]);
    multiply(&m0,&v0,&v1);
    v0 = v1;
  } 
  fclose(out);
}
