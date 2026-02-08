#include <stdio.h>

int main() {
    int n, pos, x;
    
    // Read size
    scanf("%d", &n);
    
    int arr[100];   // assume max size 100
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read position and element
    scanf("%d", &pos);
    scanf("%d", &x);
    
    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i -]()

