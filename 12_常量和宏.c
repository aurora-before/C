// #define MAX 1000
// int main(){
//     printf("%d\n",MAX);
//     return 0;
// }

//定义宏
// #define ADD(X,Y) ((X)+(Y))
// int main(){
//     printf("%d\n",4*ADD(2,3));//上面不加括号的话会变成4*2+3
//     return 0;
// }

int main(){
    int a=10;//四个字节
    printf("%p\n",&a);//&p用来打印地址
    int* pa=&a;//pa用来存放地址，叫做指针变量
    *pa=20;//通过pa里边的地址找到a
    //*说明pa是指针变量
    //int* 说明pa执行的对象是int类型
    printf("%d\n",a);
    printf("%d\n",sizeof(char*));
    return 0;
}