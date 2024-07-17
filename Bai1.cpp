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
int timX(int arr[], int &n, int &x);
void Interchange_Sort_Tang(int arr[], int n);
void Interchange_Sort_Giam(int arr[], int n);

int main()
{
	//Bai1
	int myArray[MAX]; 
	int nSize;
	//nhapMang(myArray, nSize);
	//xuatMang(myArray, nSize);
	////
	////Bai2
	//int myArray2[MAX];
	//nhapMangChan(myArray2, nSize);
	//xuatMangChan(myArray2, nSize);
	//
	////Bai3
	//int myArray3[MAX];
	//int x;
	//int check = timX(myArray3, nSize, x);
	//if (check == -1)
	//{
	//	printf("Mang khong chua gia tri ban can tim");
	//}else
	//{
	//	printf("Mang chua gia tri ban can tim tai vi tri thu: %d", check + 1);
	//};

	//Bai4
	int myArray4[MAX];
	nhapMang(myArray4, nSize);
	printf("Sap xep tang: \n");
	Interchange_Sort_Tang(myArray4, nSize);
	xuatMang(myArray4, nSize);
	printf("Sap xep giam: \n");
	Interchange_Sort_Giam(myArray4, nSize);
	xuatMang(myArray4, nSize);

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
int timX(int arr[], int &n, int &x)
{
	srand((unsigned int)time(NULL));;
	printf("Hay nhap n phan tu cua mang: ");
	scanf("%d", &n);
	printf("Hay nhap x can tim: ");
	scanf("%d", &x);

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = 15 + rand();
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void Interchange_Sort_Tang(int arr[], int n){
	int i, j, x;
	for (i = 0; i<n - 1; i++){
		for (j = i + 1; j<n; j++){
			if (arr[i]>arr[j]){
				x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;;
			}
		}
	}
}
void Interchange_Sort_Giam(int arr[], int n){
	int i, j, x;
	for (i = 0; i<n - 1; i++){
		for (j = i + 1; j<n; j++){
			if (arr[i]<arr[j]){
				x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;;
			}
		}
	}
}

