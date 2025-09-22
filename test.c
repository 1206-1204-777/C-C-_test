#include <stdio.h>
/*構造体定義*/
typedef struct Hoge
{
    char    char1;
    int     int1;
    char    char2;
    double  double1;
    char    char3;
}Hoge;
/*構造体ごとのポインタを表示*/
int main(void) {
    Hoge    hoge;
    //構造体(Hoge)の大きさ
    printf("hoge size.. %d\n",(int)sizeof(Hoge));

    //構造体とその中身のポインタ
    printf("hoge.. %p\n",(void*)&hoge);
    printf("char1.. %p\n",(void*)&hoge.char1);
    printf("int1.. %p\n",(void*)&hoge.int1);
    printf("char2.. %p\n",(void*)&hoge.char2);
    printf("double1.. %p\n",(void*)&hoge.double1);
    printf("char3.. %p\n",(void*)&hoge.char3);

    hoge.int1 = 10;
    printf("%i\n",hoge.int1);
    
    return 0;
}
