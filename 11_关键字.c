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
void test(){
    int a=1;
    a++;
    printf("%d",a);
}
int main(){
    //        //static静态的
//        //1.static修饰局部变量
//        //1.static修饰全局变量
//        //1.static修饰函数
    int i=0;
    while (i<10){
        test();
        i++;
    }
    return 0;
}