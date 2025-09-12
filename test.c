#include <stdio.h>
/*引数に1.0を足して表示させる関数*/
void func1(double d){
    printf("func1 + 1.0 = %f\n", d + 1.0);
}
/*引数に2.0を足して表示させる関数*/
void func2(double d){
    printf("func2 + 2.0 = %f\n",d + 2.0);
}
int main(void){
    void(*func_p)(double);
    func_p = func1;
    func1(1.0);
    func_p = func2;
    func2(1.0);
    return 0;
}