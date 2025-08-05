#include<stdio.h>
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr=arr;
    int max=*ptr;
    for(int i=0;i<n;i++){
        if(*(ptr+i)>max)
            max=*(ptr+i);
    }
    printf("MAX:%d",max);
    return 0;
}
