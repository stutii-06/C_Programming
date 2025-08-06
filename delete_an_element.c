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

    int pos;
    printf("Enter position to delete:");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++)
        printf("%d",arr[i]);
    return 0;
}
