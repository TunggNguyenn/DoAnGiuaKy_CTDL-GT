#include "CreateData.h"
#include "sortAlgorithm.h"


void Sorted(string StateSort, int N)
{
	ofstream ofopen;
	ofopen.open(StateSort, ios::out);
	if (ofopen.fail())
	{
		cout << "Khong tao duoc File. Vui long tao lai. Tks.!!.\n";
		return;
	}
	int *A = new int[N];
	if (A != NULL)
	{
		srand(time(0));
		for (int i = 0; i < N; i++)
		{
			A[i] = rand() % 1000000;
		}
		QuickSort(A, N, 0, N - 1);
		for (int i = 0; i < N; i++)
		{
			ofopen << A[i] << " ";
		}
		ofopen << endl;
	}
	if (A != NULL)
	{
		delete[] A;
	}
}

void Reversed(string StateSort, int N)
{
	ofstream ofopen;
	ofopen.open(StateSort, ios::out);
	if (ofopen.fail())
	{
		cout << "Khong tao duoc File. Vui long tao lai. Tks.!!.\n";
		return;
	}
	int *A = new int[N];
	if (A != NULL)
	{
		srand(time(0));
		for (int i = 0; i < N; i++)
		{
			A[i] = rand() % 1000000;
		}
		QuickSort(A, N, 0, N - 1);
		for (int i = N - 1; i >= 0; i--)
		{
			ofopen << A[i] << " ";
		}
		ofopen << endl;
	}
	if (A != NULL)
	{
		delete[] A;
	}
}

void Random(string StateSort, int N)
{
	ofstream ofopen;
	ofopen.open(StateSort, ios::out);
	if (ofopen.fail())
	{
		cout << "Khong tao duoc File. Vui long tao lai. Tks.!!.\n";
		return;
	}
	int *A = new int[N];
	if (A != NULL)
	{
		srand(time(0));
		for (int i = 0; i < N; i++)
		{
			A[i] = rand() % 1000000;
		}
		for (int i = 0; i < N; i++)
		{
			ofopen << A[i] << " ";
		}
		ofopen << endl;
	}
	if (A != NULL)
	{
		delete[] A;
	}
}
void NearlySorted(string StateSort, int N)
{
	ofstream ofopen;
	ofopen.open(StateSort, ios::out);
	if (ofopen.fail())
	{
		cout << "Khong tao duoc File. Vui long tao lai. Tks.!!.\n";
		return;
	}
	int *A = new int[N];
	if (A != NULL)
	{
		srand(time(0));
		for (int i = 0; i < N; i++)
		{
			A[i] = rand() % 1000000;
		}
		QuickSort(A, N, 0, N - 1);
		Swap(A[N / 2 - 1], A[N - 1]);
		for (int i = 0; i < N; i++)
		{
			ofopen << A[i] << " ";
		}
		ofopen << endl;
	}
	if (A != NULL)
	{
		delete[] A;
	}
}

void inPut(istream &inDevice, int A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		inDevice >> A[i];
	}
}
void outPut(ostream &outDevice, int A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		outDevice << A[i] << " ";
	}
	outDevice << endl;
}