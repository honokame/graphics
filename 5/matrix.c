#include <stdio.h>
#include <math.h>

#define S 2
#define R 10.0

typedef struct MATRIX {
  double e[S][S];
} M;

typedef struct VECTOR {
  double e[S];
} V;

void multiply(V *v,M *m,V *r){
  int i,j;
  for(j = 0;j < S;j++){
    r->e[j] = 0;
    for(i = 0;i < S;i++){
      r->e[j]+=(m->e[i][j])*(v->e[i]);
    }
  }
}

double deg2rad(double deg){
  return ((deg/180*3.14159));
}
