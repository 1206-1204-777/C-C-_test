#include <stdio.h>
/*配列とポインタのよくある使い方*/
// 値を受取り値を格納する関数を定義
void func(int *a,double *b){ //引数にポインタを指定
   //渡す値。戻り値ではなく引数を使う
   *a = 5;
   *b = 10.5;
}
/*配列の先頭要素のポインタを引数に指定*/
void func2(int *array,int size){
 int i;
 for(i = 0; i < size; i++)
 {
   printf("array[%d]..%d\n",i, array[i]);
 }
   
}
int main(void){
   //戻り値以外の方法で値を返す
   int a;
   double b;
   func(&a,&b); //空の変数を引数に渡す
   printf("a..%d b..%f\n",a,b);

   int array[] = {2,2,3,4,5,6};
   func2(array,sizeof(array) / sizeof(array[0]));
   printf("%lu\n",sizeof(array)/sizeof(array[0]));//配列のサイズ

   //mallocを使用した動的配列
   int   *variable_array = NULL;
   int   size = 0;
   char   buf[256];
   int   i;
   fgets(buf,256,stdin);
   sscanf(buf,"%lu",stdin);
   variable_array = malloc(sizeof(int)*size);
   for (int i = 0; i < size; i++)
   {
      variable_array[i] = i;
   }
   for (int i = 0; i < size; i++)
   {
      printf("variable_array[%d]..%d\n",i,variable_array[i]);
   }
   
   return 0; 
}