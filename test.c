#include <stdio.h>

static void print_addrs_in_func(int a, int b) {
    int c, d;
    // 引数のアドレス
    printf("func: &a=%p &b=%p\n", (void*)&a, (void*)&b);
    // 関数内ローカル変数のアドレス
    printf("func: &c=%p &d=%p\n", (void*)&c, (void*)&d);
}
int main(void) {
    // 動的（自動）変数と静的変数
    int test = 5;               // automatic storage
    static int test_static = 5; // static storage duration

    int a, b;

    printf("&test=%p\n", (void*)&test);
    printf("&test_static=%p\n", (void*)&test_static);

    // main関数内のローカル変数
    printf("main: &a=%p &b=%p\n", (void*)&a, (void*)&b);

    print_addrs_in_func(1, 2);
    return 0;
}
