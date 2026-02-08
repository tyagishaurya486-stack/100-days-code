#include <stdio.h>

int main() {
    int n, pos;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);

    // Convert 1-based position to 0-based index

