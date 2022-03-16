#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    // swap 2 so dung con tro
    // int a, b;
    // scanf("%d %d", &a, &b);
    // swap(&a, &b);
    // printf("%d %d", a, b);

    // char string[10]; string[5]
    // h e l l o
    // char *string;
    // string = malloc(10 * sizeof(char));
    // gets(string);
    // puts(string);
    // *(string+2) = 'r';
    // puts(string);
    // puts(string+1);
    // free(string);

    // cap phat bo nho dong
    // int array[10];
    // int *array;
    // int n = 10;
    // array = malloc(n * sizeof(int));
    // int i;
    // for (i=0; i<100; ++i) {
    //     if(i == n) {
    //         array = realloc(array, (n += 10) * sizeof(int));
    //     }
    //     *(array+i) = i;
    // }
    // for (i=0; i<100; ++i) {
    //     printf("%d ", *(array+i));
    // }
}