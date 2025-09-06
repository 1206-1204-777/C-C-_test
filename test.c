#include <stdio.h>
int main(void){
    printf("_Bool..%d\n",(int)sizeof(_Bool));
    printf("char..%d\n",(int)sizeof(char));
    printf("short..%d\n",(int)sizeof(short));
    printf("int..%d\n",(int)sizeof(int));
    printf("long..%d\n",(int)sizeof(long));
    printf("long long..%d\n",(int)sizeof(long long));
    printf("float..%d\n",(int)sizeof(float));
    printf("double..%d\n",(int)sizeof(double));

    printf("ポインタテスト\n");

    //ポインタのテスト
    int* p = NULL;//int型へのポインタ変数
    int i;
    i= 10;
    //iのアドレスをpに代入
    p = &i;

    //pの値
    printf("p = %p\n",p);
    //iの値
    printf("&i = %p\n",&i);
    return 0;
}