#include "sortAlgorithm.h"



/*Hoán đổi 2 phần tử*/
void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

/*Thuật toán sắp xếp chọn trực tiêp*/
void SelectionSort(int A[], int N)
{
	int i, j, index;
	for (i = 0; i < N - 1; i++)
	{
		index = i;
		for (j = i + 1; j < N; j++)
		{
			if (A[j] < A[index])
			{
				index = j;  //Ghi nhận vị trí phần tử hiện tại nhỏ nhất
			}
		}
		Swap(A[i], A[index]);
	}
}


/*Thuật toán sắp xếp chèn trực tiêp*/
void InsertionSort(int A[], int N)
{
	int pos, i, x;
	for (i = 1; i < N; i++)
	{
		x = A[i];
		pos = i - 1;
		while ((pos >= 0) && (A[pos] > x))
		{
			A[pos + 1] = A[pos];
			pos--;
		}
		A[pos + 1] = x;
	}
}


/*Thuật toán sắp xếp chèn nhị phân*/
void BinaryInsertionSort(int A[], int N)
{
	int i, j, left, right, mid;
	int x;


	for (i = 1; i < N; i++)
	{
		left = 1; right = i - 1;
		x = A[i];
		while (left <= right)
		{
			mid = (int)(left + right) / 2;
			if (x < A[mid])
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}

		for (j = i; j > left; j--)
		{
			A[j] = A[j - 1];
		}
		A[left] = x;
	}
}


/*Thuật toán sắp xếp đổi chổ trực tiếp*/
void InterchageSort(int A[], int N)
{
	int i, j;
	for (i = 0; i < N - 1; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (A[j] < A[i])
			{
				Swap(A[j], A[i]);
			}
		}
	}
}

/*Thuật toán sắp xếp nổi bọt*/
void BubbleSort(int A[], int N)
{
	int i, j;
	for (i = 0; i < N - 1; i++)
	{
		for (j = N - 1; j > i; j--)
		{
			if (A[j] < A[j - 1])
			{
				int temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
			}
		}
	}
}


/*Thuật toán sắp xếp rung lắc*/
void ShakerSort(int A[], int N)
{
	int left = 1, right = N - 1, i, j, k = 0;
	do
	{
		for (i = right; i >= left; i--)
		{
			if (A[i - 1] > A[i])
			{
				int temp1 = A[i - 1];
				A[i - 1] = A[i];
				A[i] = temp1;
				k = i;
			}
		}
		left = k + 1;
		for (j = left; j <= right; j++)
		{
			if (A[j - 1] > A[j])
			{
				int temp2 = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp2;
				k = j;
			}
		}
		right = k - 1;
	} while (left <= right);
}


/*Thuật toán sắp xếp với độ dài bước giảm dần*/
void ShellSort(int A[], int N)
{
	int i, j, gap, temp;
	for (gap = N / 2; gap > 0; gap = gap / 2)
	{
		for (i = 0; i < N; i = i + gap)
		{
			temp = A[i];
			for (j = i; j > 0 && A[j - gap] > temp; j = j - gap)
			{
				A[j] = A[j - gap];
			}
			A[j] = temp;
		}

	}
}


/*Thuật toán sắp xếp cây (vung đống)*/
void Shift(int A[], int l, int r)
{
	int i, j, x;
	i = l; j = 2 * i + 1;
	x = A[i];
	while (j <= r)
	{
		if (j < r)
		{
			if (A[j] < A[j + 1])  //Tìm phần tử lớn nhất A[j] và A[j+1]
			{
				j++;  //Lưu chỉ số của phần tử nhỏ nhất trong hai phần tử
			}
		}
		if (A[j] <= x)
		{
			return;
		}
		else
		{
			A[i] = A[j];
			A[j] = x;
			i = j; j = 2 * i + 1;
			x = A[i];
		}
	}
}

void CreateHeap(int A[], int N)
{
	int l;
	l = (N / 2) - 1;
	while (l >= 0)
	{
		Shift(A, l, N - 1);
		l = l - 1;
	}
}

void HeapSort(int A[], int N)
{
	int r;
	CreateHeap(A, N);
	r = N - 1;
	while (r > 0)
	{
		int temp = A[0];  //A[0] là nút gốc
		A[0] = A[r];
		A[r] = temp;
		r--;
		if (r > 0)
		{
			Shift(A, 0, r);
		}
	}
}


/*Phương pháp trộn trực tiếp*/
int Min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	return b;
}

void Merge(int A[], int temp1[], int n1, int temp2[], int n2, int k)
{
	int i1, i2, i;
	int k1, k2;
	int j1, j2;
	i = i1 = i2 = j1 = j2 = 0;

	while (n1 > 0 && n2 > 0)
	{
		//Xác định độ dài từng dãy con 2 dãy phụ
		k1 = Min(k, n1);
		k2 = Min(k, n2);

		//Xét và trộn dãy con vào dãy
		if (temp1[i1 + j1] < temp2[i2 + j2])
		{
			A[i++] = temp1[i1 + j1];
			j1++;

			//Trộn dãy con còn lại vào dãy
			if (j1 == k1)
			{
				for (; j2 < k2; j2++)
				{
					A[i++] = temp2[i2 + j2];
				}
				i1 += k1; i2 += k2;
				j1 = j2 = 0;
				n1 -= k1; n2 -= k2;
			}
		}
		else
		{
			A[i++] = temp2[i2 + j2];
			j2++;

			//Trộn dãy con còn lại vào dãy
			if (j2 == k2)
			{
				for (; j1 < k1; j1++)
				{
					A[i++] = temp1[i1 + j1];
				}
				i1 += k1; i2 += k2;
				j1 = j2 = 0;
				n1 -= k1; n2 -= k2;
			}
		}
	}
}

void MergeSort(int A[], int N)
{
	int n1, n2;
	int i, k, ik;
	int *temp1 = new int[N];
	int *temp2 = new int[N];
	k = 1;

	do
	{
		i = n1 = n2 = 0;

		//Chia mảng ra 2 mảng phụ
		while (i < N)
		{
			ik = 0;

			while (ik < k&&i < N)
			{
				temp1[n1++] = A[i++];
				ik++;
			}

			ik = 0;

			while (ik < k&&i < N)
			{
				temp2[n2++] = A[i++];
				ik++;
			}
		}
		Merge(A, temp1, n1, temp2, n2, k);

		//Tăng độ lớn tối đa dãy con
		k *= 2;

	} while (k < N);

	delete[] temp1;
	delete[] temp2;
}


/*Thuật toán sắp xếp dựa trên phân hoạch*/
void QuickSort(int A[], int N, int l, int r)
{
	int i, j;
	int x;
	x = A[(l + r) / 2];  //Chọn phần tử giữa làm giá trị mốc
	i = l; j = r;
	do
	{
		while (A[i] < x)
		{
			i++;
		}
		while (A[j] > x)
		{
			j--;
		}
		if (i <= j)
		{
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i++;
			j--;
		}
	} while (i < j);
	if (l < j)
	{
		QuickSort(A, N, l, j);
	}
	if (i < r)
	{
		QuickSort(A, N, i, r);
	}
}

/*Wrapper thuật toán QuickSort*/
void WrapQuickSort(int A[], int N)
{
	QuickSort(A, N, 0, N - 1);
}

/*Thuật toán sắp xếp bằng phương pháp đếm phân phối*/
void CountingSort(int A[], int N)
{

	int *count = new int[1000000];

	for (int i = 0; i < N; i++)
	{
		count[i] = 0;
	}

	if (count == NULL)
	{
		return;
	}

	for (int i = 0; i < N; i++)
	{
		++count[A[i]];
	}

	int outPutIndex = 0;
	for (int j = 0; j < 1000000; j++)
	{
		while (count[j]-- > 0)
		{
			A[outPutIndex++] = j;
		}
	}
	delete[] count;
}


/*Thuật toán sắp xếp theo cơ số*/
void RadixSort(int A[], int N)
{
	int i;
	int m = A[0], Exp = 1;
	int *B = new int[N];
	if (N == NULL)
	{
		printf("Khong du bo nho.!!\n");
		return;
	}
	for (i = 0; i < N; i++)
	{
		if (A[i] > m)
		{
			m = A[i];
		}
	}

	while (m / Exp > 0)
	{
		int Bucket[10] = { 0 };
		for (i = 0; i < N; i++)
		{
			Bucket[A[i] / Exp % 10]++;
		}
		for (i = 1; i < 10; i++)
		{
			Bucket[i] += Bucket[i - 1];
		}
		for (i = N - 1; i >= 0; i--)
		{
			B[--Bucket[A[i] / Exp % 10]] = A[i];
		}
		for (i = 0; i < N; i++)
		{
			A[i] = B[i];
		}
		Exp *= 10;
	}
}


int min(int a, int b)
{
	return a > b ? b : a;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

/*Thuật toán sắp xếp tại chỗ (in-situ, không dùng mảng phụ)*/
void FlashSort(int A[], int N)
{
	int ng = (int)(0.45 * N);
	int *sg = new int[ng + 1];
	int *a = new int[N];
	// 1. Tìm giá trị max và min
	int minValue = INT_MAX;
	int maxValue = INT_MIN;
	for (int i = 0; i < N; i++) 
	{
		minValue = min(minValue, A[i]);
		maxValue = max(maxValue, A[i]);
	}
	double c = ((double)ng - 1) / (maxValue - minValue);
	// 2. Tính toán kích thước cho mỗi nhóm flashsort
	for (int i = 0; i < ng; i++) 
	{
		sg[i] = 0;
	}
	for (int i = 0; i < N; i++) 
	{
		int gi = (int)(c * (A[i] - minValue));
		++sg[gi];
	}

	// 3. Trong mỗi nhóm, tính toán chỉ số mảng cuối
	for (int i = 0; i < ng; ++i) 
	{
		sg[i + 1] += sg[i];
	}
	// 4. Hoán vị
	for (int i = 0; i < N; ++i)
	{
		int gi = (int)(c * (A[i] - minValue));
		int bi = sg[gi] - 1;
		a[bi] = A[i];
		--sg[gi];
	}
	// 5. Sắp xếp danh sách phần tử trong mỗi nhóm, sử dụng thuật toán Insertion sort
	for (int gi = 0; gi < ng; ++gi) 
	{
		int x = sg[gi];
		int y = sg[gi + 1];
		// Insertion sort
		for (int i = x; i < y; ++i) {
			int t = a[i];
			int j = i - 1;
			for (; j >= 0 && a[j] >= t; --j) {
				a[j + 1] = a[j];
			}
			a[j + 1] = t;
		}
	}
	// 6. Cập nhật mảng A
	for (int i = 0; i < N; ++i) {
		A[i] = a[i];
	}
	delete[] a;
	delete[] sg;
}