#include<stdio.h>
int main() {
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]) ;
    }
int sum=0;
int *ptr=arr;
for(int i=0;i<n;i++){
    sum+=*ptr;
    ptr++;
}
float avg=sum/n;
printf("Sum of array elements :%d",sum);
printf("Average of array elements: %d",avg);
    return 0;
}

