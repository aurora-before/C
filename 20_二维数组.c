#include <stdio.h>
/*
int main() {
	//����
	//int arr[3][4];
	//��ʼ����������ʱ��ֵ
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,15 };//��ȫ��ʼ��
	int arr1[3][4] = { 1,2,3,4,5,6,7,8 };//����ȫ��ʼ�����油0
	int arr2[3][4] = { {1,2},{3,4},{5,6} };//ÿһ�в����Ĳ�0
	//[]�п���ʡ�ԣ��в���ʡ��
	int i = 0;
	int j = 0;
	//for (i = 0; i < 3; i++) {
	//	for (j = 0; j < 4; j++) {
	//		printf("&arr2[%d][%d]=%p\n ", i,j, & arr2[i][j]);
	//		//��ά�������ڴ���Ҳ��������ţ�����Ҳ����������������ÿ����ַ���4
	//	}
	//	printf("\n");
	//}
	int* p = &arr2[0][0];
	for (i = 0; i < 12; i++) {
		printf("%d", *p);
		p++;//��ַ��һ
	}
	return 0;
}
*/

/*
 //ð������
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
	//����Ϊ����-ð������
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d",arr[i]);
	}
	return 0;
}
*/

//��������������Ԫ�صĵ�ַ
//2������
//1.sizeof(������)  �������������ʾ��������-���������������Ĵ�С����λ���ֽ�
//2.&������  -��������ʾ��������-ȡ��������������ĵ�ַ
int main() {
	int arr[10] = { 0 };
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//����һ����ַ���40��˵������������

	printf("%p\n", arr);
	printf("%p\n", arr+1);//����һ����ַ���4

	int sz = sizeof(arr); //��������ʾ��������
	printf("%d\n",sz)
}