#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main(){

    int n;
    int count = 0;
    int sum = 0;
    int sumVal[n];
    int a;
    int x= INT_MAX;

    
    scanf("%d", &n);
    int arr1[n];
    int arr12[n];
    int i;

    
    for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
        scanf("%d", &arr1[i]);
    }

    
    for (i = 0; i < sizeof(arr12)/sizeof(arr12[0]); i++) {
        scanf("%d", &arr12[i]);
    }

    
    while (count <= n-1) {
        for (i = 0; i<=n-1; i++) {
            sum += abs(arr1[i] - arr12[i]);
        }

        
        if (sum < x) {
            x = sum;
            a = count;
        }

        
        sum = 0;
        int q = arr12[n-1];
        for (i = n-1; i > 0; i--) {
            arr12[i] = arr12[i-1];
        }
        arr12[0] = q;
        count++;
    }
    printf("%d\n", a);
    return 0;
}


