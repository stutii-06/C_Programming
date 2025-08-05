#include<stdio.h>
int fact(int N){
  if(N>1){
return N*fact(N-1);
  }
return 1;
}
int main(){
  int n;
printf("Enter a number:");
scanf("%d",&n);
printf("%d ",fact(n));
return 0;
}
