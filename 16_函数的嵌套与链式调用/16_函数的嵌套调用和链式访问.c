#include <stdio.h>
#include <string.h>
/*
//传地址
void Add(int*p){
    (*p)++;
}
int main(){
    int num=0;
    Add(&num);
    printf("%d\n",num);
    Add(&num);
    printf("%d\n",num);
    Add(&num);
    printf("%d\n",num);
    return 0;
}
*/

//函数的嵌套调用和链式访问
/*
//例如
int main(){
    char arr1[20]={0};
    char arr2[]="bit";
    //链式调用:将一个函数的返回值作为另外一个函数的参数
    printf("%s\n",strcpy(arr1,arr2));
    return 0;
}
*/

/*
int main()
{
    // ！！！printf返回打印在屏幕上的字符的个数
    printf("%d", printf("%d", printf("%d", 43)));
}
*/

/*
int main(){
    int a=10;
    int b=20;
    //函数的声明，如果函数不提前声明并且定义在主函数后面的话就会报错
                //  如果定义在主函数前面就不需要声明
    int Add(int,int);
    int c=Add(a,b);
    printf("%d\n",c);
    return 0;
}
//函数的定义
int Add(int x,int y){
    return x+y;
}
*/

//函数声明一般放头文件，函数定义放.c文件
#include "add.h"

//导入静态库(只有.c和.lib文件时)
// #pragma comment(lib,"Add.lib")

int main()
{
    int a = 10;
    int b = 20;
    int c = Add(a, b);
    printf("%d\n", c);
    return 0;
}