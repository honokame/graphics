#include<stdio.h>

int main(){
  double a,b,c,d;
  char string[BUFSIZ];
  system("cp data5.txt 5-1.txt");
  while(scanf("%lf %lf %lf %lf", &a, &b, &c, &d)!=EOF){
    sprintf(string,"./multiply.sh 5-1.txt 5-2.txt %lf %lf %lf %lf history.txt",a, b, c, d);
    system(string);
  }
}
