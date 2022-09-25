#include <stdio.h>
#include <string.h>
/*
//输入数字然后递归依次输出每个位数的数字
void print(unsigned int n){
    if(n>9){
        print(n/10);
    }
    printf("%d ",n%10);
}
int main(){
  unsigned int num=0;
  scanf("%u",&num);
  //递归-函数自己调用自己
  print(num);
  return 0;
}
*/

/*
// 1.不能写死递归，都有跳出条件，每次递归逼近跳出条件
//  2.递归层次不能太深
void test(int n)
{
    if (n < 10)
    {
        test(n + 1);
    }
    printf("%d ", n);
}
int main()
{
    test(1);
    return 0;
}
*/


/*
int my_strlen(char* str){
    int count=0;
    if(*str!='\0'){
        count++;
        str++;
        printf("%d %s\n",count,str);
    }
    return count;
}
*/
//!!不允许创建临时变量，模拟strlen(使用递归实现)
int my_strlen(char *str)
{
    if (*str != '\0')
    {
        return 1 + my_strlen(str+1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    char arr[] = "bit";
    //模拟实现strlen
    //数组传首字母的地址
    printf("%d\n", my_strlen(arr));
    return 0;
}