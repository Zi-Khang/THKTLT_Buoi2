#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
#define MAX 1000


void nhapMang(int arr[], int &n);
void xuatMang(int arr[], int n);
void nhapMangChan(int arr[], int &n);
void xuatMangChan(int arr[], int n);

int main()
{
	//Bai1
	int myArray[MAX]; 
	int nSize;
	////nhapMang(myArray, nSize);
	////xuatMang(myArray, nSize);
	//
	//Bai2
	int myArray2[MAX];
	nhapMangChan(myArray2, nSize);
	xuatMangChan(myArray2, nSize);

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

void xuatMang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = %d\n", i, arr[i]);
	}
}
void nhapMangChan(int arr[], int &n)
{
	srand((unsigned int)time(NULL));;
	printf("Hay nhap n: ");
	scanf("%d", &n);

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			int x = -1;
			while (x % 2 != 0)
			{
				x = rand();
			}
			arr[i] = x;
		}
	}
}

void xuatMangChan(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = %d\n", i, arr[i]);
	}
}
