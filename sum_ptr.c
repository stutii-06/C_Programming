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
printf("Sum of array elements :%d",sum);

}
