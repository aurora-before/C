#include <stdio.h>
#include <string.h>
int main(){
    //字符数组-数组是一组相同类型的元素
    //字符串后面隐藏了一个\0
    // \0是字符串结束标志
    char arr1[]="abc";  //abc\0
    char arr2[]={'a','b','c'};  //要再加一个'\0'
    int len=strlen("abc");
    printf("%d\n",len);
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%d\n",strlen(arr1));
    printf("%d\n",strlen(arr2)); //随机值，因为arr2末尾没有\0，要在内存中找到\0才会停止
    return 0;
}