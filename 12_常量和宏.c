// #define MAX 1000
// int main(){
//     printf("%d\n",MAX);
//     return 0;
// }

//定义宏
#define ADD(X,Y) ((X)+(Y))
int main(){
    printf("%d\n",4*ADD(2,3));//上面不加括号的话会变成4*2+3
    return 0;
}