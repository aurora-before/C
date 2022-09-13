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

/*
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
*/

/*
//打印1000年到2000年之间的闰年
int main(){
    int i=0;
    int count=0;
    for(i=1000;i<=2000;i++){
        // if(i%4==0){
        //     if(i%100!=0){
        //         printf("%d ",i);
        //         count++;
        //     }

        // }
        // if(i%400==0){
        //      printf("%d ",i);
        //      count++;
        // }
        if(((i%4==0)&&(i%100!=0)) || (i%400==0)){
            printf("%d ",i);
            count++;
        }
    }
    printf("\n%d",count);
    return 0;
}
*/

//打印100-200之间的素数
int main()
{
    int i = 0;
    
    for (i = 100; i <= 200; i++)
    {
        int j = 0;
        for (j = 2; j <i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            }
            if (i == j)
            {
                printf("%d ", i);
            }
        }
    return 0;
}
