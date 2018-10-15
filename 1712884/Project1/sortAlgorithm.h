#ifndef __SORTALG_H__
#define __SORTALG_H__
#include <iostream>
#include <string>
using namespace std;


void SelectionSort(int A[], int N);  //Thuật toán sắp xếp chọn trực tiêp
void InsertionSort(int A[], int N);  //Thuật toán sắp xếp chèn trực tiêp
void BinaryInsertionSort(int A[], int N);  //Thuật toán sắp xếp chèn nhị phân
void InterchageSort(int A[], int N);  //Thuật toán sắp xếp đổi chổ trực tiếp
void BubbleSort(int A[], int N);  //Thuật toán sắp xếp nổi bọt
void ShakerSort(int A[], int N);  //Thuật toán sắp xếp rung lắc
void ShellSort(int A[], int N);  //Thuật toán sắp xếp với độ dài bước giảm dần


/*Thuật toán sắp xếp cây (vung đống)*/
void Shift(int A[], int l, int r);
void CreateHeap(int A[], int N);
void HeapSort(int A[], int N);


/*Phương pháp trộn trực tiếp*/
int Min(int a, int b);
void Merge(int A[], int temp1[], int n1, int temp2[], int n2, int k);
void MergeSort(int A[], int N);


void QuickSort(int A[], int N, int l, int r);  //Thuật toán sắp xếp dựa trên phân hoạch
void WrapQuickSort(int A[], int N);  //Wrapper thuật toán QuickSort


void CountingSort(int A[], int N);  //Thuật toán sắp xếp bằng phương pháp đếm phân phối
void RadixSort(int A[], int N);  //Thuật toán sắp xếp theo cơ số


/*Thuật toán sắp xếp tại chỗ (in-situ, không dùng mảng phụ)*/
int min(int a, int b);
int max(int a, int b);
void FlashSort(int A[], int N);

/*Hoán đổi 2 phần tử*/
void Swap(int &a, int &b);

#endif // !__SORTALG_H__
