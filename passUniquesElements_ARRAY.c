#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];  //
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] == -999) continue;
        for(j = i + 1; j < n; j++) {
            if(arr[j] == arr[i]) {
                arr[j] = -999;
            }
        }
    }

    printf("Unique elements:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] != -999)
            printf("%d ", arr[i]);
    }

    return 0;
}
