#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int n = 100;

void print_bit(int a) {
    if (a == 0) {
        puts("0");
        return;
    }
    int arr[32];
    int n = 0;
    while (a>0) {
        arr[n++] = a%2;
        a/=2;
    }
    while (n-->0) {
        printf("%d", arr[n]);
    }
    puts("");
}

int gcd(int a, int b) {
    return a%b == 0 ? b : gcd(b, a%b);
}

int main() {
    // int a = sum(11234, 134, 546);
    // printf("%d", gcd(36, 100));
    // printf("%d", a);

    // int i = 10;
    // for ( ; ; ) {
    //     int c = 10;
    //     printf("%d", c);
    //     break;
    // }
    // printf("%d", c);

    // int number = 1;
    // // int number;
    // //ctr + /
    // char character = 'a';
    // character = 'b';
    // const int constant = 100;
    // constant = 200;

    // 32bit

    // printf("%d\n", sizeof(char));
    // printf("%d\n", sizeof(int));
    // 0111 1111 1111 1111 1111 1111 1111 1111 + 1
    // 1000 0000 0000 0000 0000 0000 0000 0000
    // printf("%lld\n", __INT32_MAX__+1);
    // printf("%lld\n", sizeof(long long));
    // printf("%d\n", sizeof(float));
    // printf("%d\n", sizeof(double));

    // int a;
    // scanf("%d", &a);
    // printf("so da nhap la: %d\n", a);
    // char c;
    // c = 'a';
    // scanf("%c", &c);
    // printf("%d", c);

    // int a, b;
    // // scanf("%d %d", &a, &b);
    // int tong = a+b;
    // int hieu = a-b;
    // int tich = a*b;
    // int thuong = a/b;
    // int du = a%b;
    // float c, d;
    // scanf("%f %f", &c, &d);
    // printf("%.3f", c/d);
    // printf("%d\n%d\n%d\n%d\n%d\n", tong, hieu, tich, thuong, du);

    // // a++;
    // // b = b+1;
    // printf("%d %d\n", ++a, b++);

    // a += 2;
    // b = b+2;
    // printf("%d %d", a, b);

    // int a = -1, b = 4;
    // printf("%d", (a != b) && (a == b));
    // a = (a>0) ? 10 : -10;
    // printf("%d", a);

    // int a = 10, b =6;
    // print_bit(a);
    // print_bit(b);
    // print_bit(a & b);
    // print_bit(a | b);
    // print_bit(a ^ b);
    // print_bit(a << 1);
    // print_bit(a << 2);
    // print_bit(a << 3);
    // print_bit(a << 4);

    // int a, b;
    // scanf("%d %d", &a, &b);
    // if (a<b) {
    //     printf("a<b");
    //     if (a == 5) {
    //         printf("a=5");
    //     }
    // }
    // else {
        
    // }

    // int a, b;
    // scanf("%d %d", &a, &b);
    // switch (a+b) {
    //     case 1:
    //         printf("a+b=1\n");
    //         break;
    //     case 2:
    //         printf("a+b=2\n");
    //         break;
    //     case 3:
    //         printf("a+b=3\n");
    //         break;
    //     case 4:
    //         printf("a+b=4\n");
    //         // break;
    // }
    
    // int i;
    // int sum =0;
    // for (i=0; i<10; ++i) {
    //     // if (i>=10) break;
    //     if (i%2 == 1) continue;
    //     printf("%d ", i);
    //     sum = sum + i;
    //     // ++i
    // }
    // printf("\n%d\n", sum);

    // i=0;
    // sum=0;
    // while (1) {
    //     if (i>=10) break;
    //     printf("%d ", i);
    //     sum = sum + i;
    //     ++i;
    // }
    // printf("\n%d", sum);

    // do {
    //     printf("do while");
    // } while(0);

    // while (0) {
    //     printf("while");
    // }

    // 0 1 2 3 4 5 6 7 8 9
    // int n;
    // scanf("%d", &n);
    // int array[n];
    // array[0] = 10;
    // array[9] = 10;
    // printf("%d", array[0]);
    // int i=0;
    // for (; i<n; ++i) {
    //     scanf("%d", &array[i]);
    // }
    // for (i=0; i<n; ++i) {
    //     printf("%d ", array[i]);
    // }

    // char string[10];
    // scanf("%s", &string[0]);
    // string[1] = 'a';
    // printf("%s", &string[0]);
    // char string[11] = "abc";
    // char string2[11] = "1234";
    // strcpy(string, string2);
    // puts(string);
    // printf("%s", string);
    // scanf("%s", string);
    // gets(string);
    // printf("%s", string);

    
}
