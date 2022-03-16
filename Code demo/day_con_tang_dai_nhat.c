#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; ++i) scanf("%d", a+i);
    int max_length[n];
    for (int i=0; i<n; ++i) {
        max_length[i] = 1;
        for (int j=0; j<i; ++j) {
            if (a[j] < a[i] && max_length[j]+1 > max_length[i]) {
                max_length[i] = max_length[j]+1;
            }
        }
    }
    for (int i=0; i<n; ++i) {
        printf("%d ", max_length[i]);
    }
}