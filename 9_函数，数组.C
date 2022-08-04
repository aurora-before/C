#include <stdio.h>
/*
int Add(int x,int y){
    int z=0;
    z=x+y;
    return z; //返回整型int
}
int main(){
    int num1=0;
    int num2=0;
    scanf("%d%d",&num1,&num2);
    // int sum=num1+num2;
    int sum=Add(num1,num2);
    printf("%d\n",sum);
    return 0;
}
*/

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    while(i<10){
        printf("%d ",arr[i]);
        i++;
    }
    // int arr2[10];
    // char ch[5]={'a','b','c'};//不完全初始化，剩余的默认为0
    // printf("%c",ch[0]);
    return 0;
}