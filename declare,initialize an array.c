//Write a C program to declare, initialize, and
   //print elements of a single-dimensional integer array.
#include<stdio.h>
int main(){
   int N;
   scanf("%d",&N);  // 5
   int arr[N];
   for(int i=0;i<N;i++)
    scanf("%d",&arr[i]);  // 10 20 30 40 50
    //arr[0] arr[1] arr[2] arr[3] arr[4]
   printf("Elements are:");
   for(int i=0;i<N;i++)
    printf("%d ",arr[i]);
return 0;
}
