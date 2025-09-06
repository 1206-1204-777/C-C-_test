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

    printf("ポインタテスト（追加）\n\n");

    int hoge = 5;
    int piyo = 10;
    int *hoge_p; //ポインタ変数

    //変数ごとのアドレス
    printf("&hoge.. %p\n",(void*)&hoge);
    printf("&piyo.. %p\n",(void*)&piyo);
    printf("&hoge_p.. %p\n",(void*)&hoge_p);

    //ポインタ変数への代入
    hoge_p = &hoge;
    printf("&hoge_p.. %p\n",(void*)&hoge_p);

    //hoge_pを経由してhogeの値を表示
    printf("&hoge_p.. %d\n",*hoge_p);
    
    *hoge_p = 10;
    printf("&hoge.. %d\n",hoge);
    printf("&hoge.. %p\n",(void*)&hoge);
    return 0;
}