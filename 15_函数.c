#include <stdio.h>
#include <string.h>
#include <math.h>
/*
int main(){
    char arr1[20]={0};
    char arr2[]="hello bit";
    strcpy(arr1,arr2);
    printf("%s",arr1);
    return 0;
}
*/
/*
int main(){
    char arr[]="hello bit";
    memset(arr,'x',5);
    printf("%s\n",arr);
    return 0;
}
*/

/*
//实现两个数的交换
//void表示不需要返回类型
//在内存中重新开辟新的空间定义x,y进行交换，x和y的地址和ab地址不一样
//传值调用
// void Swap(int x,int y){
//     int z=0;
//     z=x;
//     x=y;
//     y=z;
// }

//*pa和*pb根据地址找到a,b变量

//传址调用
void Swap(int* pa,int* pb){
    int z=0;
    z=*pa;
    *pa=*pb;
    *pb=z;
}
int main(){
    int a=10;
    int b=20;
    printf("交换前:%d%d\n",a,b);
    Swap(&a,&b);
    printf("交换后:%d%d",a,b);
    return 0;
}
*/

/*
//判断素数
int is_prime(int n)
{
    int j = 0;
    for (j = 2; j < sqrt(n); j++)
    {
        if (n % j == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int i = 0;
    int count = 0;
    for (i = 100; i <= 200; i++)
    {
        if (is_prime(i) == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
*/

/*
//判断闰年
int leap_yesr(int n)
{
    // if (n % 4 == 0)
    // {
    //     if (n % 100 != 0)
    //     {
    //         return 1;
    //     }
    // }
    // if (n % 400 == 0)
    // {
    //     return 1;
    // }
    // return 0;
    return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
}
int main()
{
    int y = 0;
    for (y = 1000; y <= 2000; y++)
    {
        if (leap_yesr(y) == 1)
        {
            printf("%d ", y);
        }
    }
    return 0;
}
*/

int binary_search(int a[], int k, int s)
{
    int left = 0;
    int right = s - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] > k)
        {
            right = mid - 1;
        }
        else if (a[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1; //找不到
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 17;
    int sz = sizeof(arr) / sizeof(arr[0]);
    //找到了就返回找到的位置的下标
    //找不到就返回-1
    int ret = binary_search(arr, key, sz);
    //数组arr传参，实际传递的不是数组的本身
    //仅仅传过去数组首元素的地址
    // ！！！所以sz不能在binary_search函数内部定义，否则结果就是4/4=1
    if (-1 == ret)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了，下标是 %d\n", ret);
    }
    return 0;
}