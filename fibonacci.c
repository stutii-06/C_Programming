#include<stdio.h>
void fib(int tl, int t2,int n);
int main() {
int n;
printf("Enter number of terms:");
scanf("%d",&n);
int t1=0,t2=1;
fib(t1,t2,n);
return 0;
}
void fib(int t1,int t2,int n) {
    printf("%d %d ",t1, t2);
    int nextterm=t1+t2;
    for(int i=3;i<=n;i++) {
            printf("%d ",nextterm);
    t1=t2;
    t2=nextterm;
    nextterm=t1+t2;
 }
}
