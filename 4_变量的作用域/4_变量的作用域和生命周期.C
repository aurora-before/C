#include <stdio.h>
// #include "add.C"
// extern int g_val;
// int main(){
//     printf("%d",g_val);
//     return 0;
// }

//生命周期
//变量的生命周期:变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命周期开始，出这个范围生命周期就结束
//全局变量的生命周期：整个程序的生命周期
int main(){
    {
        //局部变量生命周期开始
        int a=10;
        printf("%d\n",a);
        //结束
    }
    return 0;
}