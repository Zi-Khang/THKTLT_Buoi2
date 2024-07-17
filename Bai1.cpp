#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
#define MAX 1000


void nhapMang(int arr[], int &n);
void xuatMang(int arr[], int n);

int main()
{
	int myArray[MAX]; 
	int nSize;

	nhapMang(myArray, nSize);
	xuatMang(myArray, nSize);

	getch();
}

void nhapMang(int arr[], int &n)
{
	srand((unsigned int)time(NULL));;
	printf("Hay nhap n: ");
	scanf("%d", &n);

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = 15 + rand();
		}
	}
}

// hàm xuất mảng
void xuatMang(int arr[], int n)
{
	// xuất từng phần tử cho mảng từ chỉ số 0 đến n – 1
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = %d\n", i, arr[i]);
	}
}
