#include <stdio.h>
/*
int main() {
	//创建
	//int arr[3][4];
	//初始化：创建的时候赋值
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,15 };//完全初始化
	int arr1[3][4] = { 1,2,3,4,5,6,7,8 };//不完全初始化后面补0
	int arr2[3][4] = { {1,2},{3,4},{5,6} };//每一行不够的补0
	//[]行可以省略，列不能省略
	int i = 0;
	int j = 0;
	//for (i = 0; i < 3; i++) {
	//	for (j = 0; j < 4; j++) {
	//		printf("&arr2[%d][%d]=%p\n ", i,j, & arr2[i][j]);
	//		//二维数组在内存中也是连续存放，换行也是连续，整型数组每个地址相差4
	//	}
	//	printf("\n");
	//}
	int* p = &arr2[0][0];
	for (i = 0; i < 12; i++) {
		printf("%d", *p);
		p++;//地址加一
	}
	return 0;
}
*/

/*
 //冒泡排序
void bubble_sort(int arr[],int sz) {
	int i = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1; i++) {
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
		if(arr[j]>arr[j+1]){
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			}
		}
	} 
}    
int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排序为升序-冒泡排序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d",arr[i]);
	}
	return 0;
}
*/

//数组名是数组首元素的地址
//2个例外
//1.sizeof(数组名)  这里的数组名表示整个数组-计算的是整个数组的大小，单位是字节
//2.&数组名  -数组名表示整个数组-取出的是整个数组的地址
int main() {
	int arr[10] = { 0 };
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//和上一个地址相差40，说明是整个数组

	printf("%p\n", arr);
	printf("%p\n", arr+1);//和上一个地址相差4

	int sz = sizeof(arr); //数组名表示整个数组
	printf("%d\n",sz)
}