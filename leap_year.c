#include<stdio.h>
int main(){
  int n;
printf("Enter a year:");
scanf("%d",&n);
if ((year%4==0 && year%100!=0)||(year%400==0))
  printf("It is a leap year");
else
  printf("It is not a leap year");
return 0;
}
