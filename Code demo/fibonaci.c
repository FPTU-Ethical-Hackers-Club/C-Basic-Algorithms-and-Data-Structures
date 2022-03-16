#include<stdio.h>

int sum(int a[], int n) {
    if (n==0) return a[0];
    return sum(a, n-1) + a[n];
}

int f[10000];

int fibo(int n) {
    if (f[n] != -1) return f[n];
    if (n==1 || n==2) return 1;
    return f[n] = fibo(n-1) + fibo(n-2);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i=0; i<10000; ++i) f[i] = -1;
    printf("%d", fibo(n));

    // int a[n];
    // for (int i=0; i<n; ++i) scanf("%d", a+i);
    // int sum[n];
    // sum[0] = a[0];
    // for (int i=1; i<n; ++i) {
    //     sum[i] = sum[i-1] + a[i];
    // }
    // printf("%d", sum[n-1]);

    // printf("%d", sum(a, n-1));

    // int fibo[n+1];
    // fibo[1] = fibo[2] = 1;
    // for (int i=3; i<=n; ++i) {
    //     fibo[i] = fibo[i-1] + fibo[i-2];
    //     printf("%d\n", fibo[i]);
    // }
    // printf("%d", fibo[n]);
}