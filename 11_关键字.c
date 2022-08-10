// #include <stdio.h>
// // typedef unsigned int u_int;

// int main(){
//     //大量频繁被使用的数据，放在寄存器中提示效率
//     // register int num=100; //建议num的值放在寄存器中
//     //**1.include ,define不是关键字，是预处理指令
   
//     // unsigned int num=100;
//     //    u_int num=100;





// }
#include <stdio.h>
static int g_val=2022;
void test(){
    static int a=1;
    a++;
    printf("%d",a);
}
int main(){
    //        //static静态的
    // static修饰局部变量，改变了局部变量的生命周期
//        //1.static修饰局部变量
//        //1.static修饰全局变量,这个全局变量只能在自己所在源文件(.c)内部可以使用
//        //1.static修饰函数
    // int i=0;
    // while (i<10){
    //     test();
    //     i++;
    // }

    printf("%d",g_val);
    return 0;
}