#include <stdio.h>
   /*関数の仮引数宣言*/
   //関数の引数に配列を渡す場合
   void func(int a[]){ //配列の先頭アドレスを受け取る
      printf("a = %p\n", (void*)a); //ポインタを介して値にアクセス
   }
    //void func(int a[]); //これも同じ意味
   //2次元配列を渡す場合
  int func2(int a[][3]){ //2次元配列の先頭アドレスを受け取る  
   for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
         printf("a[%d][%d]=%d\n",i,j,a[i][j]);
      }
   }
  return a[0][1];
   }
   //C99以降の2次元配列を渡す場合
   void func3(int size1,int size2,int a[size1][size2]){ 
      int i,j,result=0;
      for(i=0;i<size1;i++){
         for(j=0;j<size2;j++){
            result += a[i][j];
   }
}      
      printf("要素の合計値=%d\n",result);
   }
   int func4(int a){
      for (int i = 0; i < 10; i++)
      {
         a += 1;
         printf("a.. %d,\n",a);
      }
      return a;
   }
int main(void){
   int A = 10;
   int *a = &A; //配列の宣言と初期化
   func((int *)&A); //配列の先頭アドレスを渡す
   int num [2][3] = { {1,5,5}, {3,8,78} }; //2次元配列の宣言
   func2(num); //2次元配列の先頭アドレスを渡す
   int size1 = 2; //行数
   int size2 = 4; //列数
   int num2[2][4] = { {10,20,34,14}, {57,64,7,8} }; //2次元配列の宣言
   func3(size1,size2,num2); //可変長配列の先頭アドレスを渡す
   /*文字リテラル*/
   char *str = "test";
   char str2[] = "test2";  
   printf("str..%s\n",str);
   printf("str2..%s\n",str2);//配列として扱える
   /*関数へのポインタ*/
   printf("main %p\n",&main); //main関数のアドレス
   int (*p_func[2])(int); // 関数ポインタの宣言
   p_func[1] = (void*)func;
   printf("p_func.. %p\n",p_func);
   int x = func4(5);
   /*関数へのポインタを構造体に格納*/
   
    return 0; 
}