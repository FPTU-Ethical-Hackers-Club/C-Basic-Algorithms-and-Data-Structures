#include<stdio.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    FILE *f2 = fopen("output.txt", "w");
    int a;
    fscanf(f, "%d", &a);
    fprintf(f2, "%d", a);
    fclose(f);
    fclose(f2);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int a;
    // scanf("%d", &a);
    // printf("%d", a);

    // FILE *f = fopen("input.txt", "r");
    // int a;
    // while (fscanf(f, "%d", &a) != EOF) {
    //     printf("%d ", a);
    // }
}