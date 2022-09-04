#include <stdio.h>
/*
//最大公约数
int main(){
    int m=0;
    int n=0;
    scanf("%d %d",&m,&n);
    int max=0;
    if(m>n)
    max=n;
    else
    max=m;
    while(1){
        if(m%max==0&&n%max==0){
            printf("最大公约数就是%d\n",max);
            break;
        }
        max--;
    }
    return 0;
}
*/

//辗转相除法
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d%d", &m, &n);
    int t = 0;
    while (t = m % n)
    {
        m = n;
        n = t;
    }
    printf("最大公约数:%d\n", n);
    //！！！最小公倍数=m*n/最大公约数
    return 0;
}