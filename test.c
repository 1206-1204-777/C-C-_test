#include <stdio.h>
void get_xy(double *x_p, double *y_p){
    printf("x_p.. %p,y_p..%p\n",(void*)x_p,(void*)y_p);
    printf("&x_p.. %p,&y_p..%p\n",(void*)&x_p,(void*)&y_p);//アドレスの表示

    //引数で渡されたアドレスに値を格納
    *x_p = 1.0;
    *y_p = 2.0;
    }
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

    int a[10];
    printf("a..%i\n",a[1]);

    printf("\nポインタの移動\n");

    //ポインタの移動
    int hoge_2;
    int *hoge_p_2;
    hoge_p_2 = &hoge_2;
    printf("hoge_p_2.. %p\n",(void*)hoge_p_2);

    hoge_p_2++;
    printf("hoge_p_2.. %p\n",(void*)hoge_p_2);
    printf("hoge_p_2.. %p\n",(void*)hoge_p_2 + 3);

    printf("\n関数からポインタの受け渡し\n");

    double x;
    double y;

    printf("&x..%p,&y..%p\n",(void*)&x,(void*)&y);
    get_xy(&x,&y);
    printf("x..%f,y..%f\n",x,y);
    return 0; 
}