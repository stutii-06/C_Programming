#include<stdio.h>
#include<stdlib.h>
void arraySort(int arr[],int N){
for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
    if(arr[j]<arr[i]){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
    }
}
}
int main()
{
   int N;
   scanf("%d",&N);
   int arr[N];
   for(int i=0;i<N;i++)
     scanf("%d",&arr[i]);
   arraySort(arr,N);
   printf("Elements:");
   for(int i=0;i<N;i++)
     printf("%d ",arr[i]);
  return 0;
}
