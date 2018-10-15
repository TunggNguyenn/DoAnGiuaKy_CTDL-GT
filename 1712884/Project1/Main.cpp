#include "sortAlgorithm.h"
#include "CreateData.h"
#include "Result.h"


void Button1()
{
	cout << "\t\t\tNhap 0: Thoat.\n";
	cout << "\t\t\t     1: Thuat toan SelectionSort.\n";
	cout << "\t\t\t     2: Thuat toan InsertionSort.\n";
	cout << "\t\t\t     3: Thuat toan BinaryInsertionSort.\n";
	cout << "\t\t\t     4: Thuat toan InterchageSort.\n";
	cout << "\t\t\t     5: Thuat toan BubbleSort.\n";
	cout << "\t\t\t     6: Thuat toan ShakerSort.\n";
	cout << "\t\t\t     7: Thuat toan ShellSort.\n";
	cout << "\t\t\t     8: Thuat toan HeapSort.\n";
	cout << "\t\t\t     9: Thuat toan MergeSort.\n";
	cout << "\t\t\t     10: Thuat toan QuickSort.\n";
	cout << "\t\t\t     11: Thuat toan CountingSort.\n";
	cout << "\t\t\t     12: Thuat toan RadixSort.\n";
	cout << "\t\t\t     13: Thuat toan FlashSort.\n";
	cout << "\t\t\t     14: Tat ca thuat toan tren va ghi ket qua thoi gian ra file Result.csv.\n";
	cout << "\t\t\tInput: ";
}

void Button2()
{
	cout << "\t\t\tNhap 0: Thoat.\n";
	cout << "\t\t\t     1: Bo du lieu Sorted.\n";
	cout << "\t\t\t     2: Bo du lieu Reversed.\n";
	cout << "\t\t\t     3: Bo du lieu Random.\n";
	cout << "\t\t\t     4: Bo du lieu Nearly Sorted.\n";
	cout << "\t\t\tInput: ";
}

void Button3()
{
	cout << "\t\t\tNhap 0: Thoat.\n";
	cout << "\t\t\t     1: Bo du lieu 1000 phan tu.\n";
	cout << "\t\t\t     2: Bo du lieu 5000 phan tu.\n";
	cout << "\t\t\t     3: Bo du lieu 10000 phan tu.\n";
	cout << "\t\t\t     4: Bo du lieu 50000 phan tu.\n";
	cout << "\t\t\t     5: Bo du lieu 100000 phan tu.\n";
	cout << "\t\t\t     6: Bo du lieu 250000 phan tu.\n";
	cout << "\t\t\tInput: ";
}

void Run3(int j, void(*Sort)(int[], int), string NameSort, string NameStateSort)
{
	ifstream ifopen;
	ofstream ofopen;
	int *A = NULL;
	if (j == 0)
	{
		return;
	}
	else if (j == 1)
	{
		A = new int[1000];
		ifopen.open("Sorted_1000.inp", ios::in);
		inPut(ifopen, A, 1000);

		cout << "Thoi gian chay thuat toan la: ";
		Result(cout, A, 1000, Sort);

		string Name = NameSort + "_" + NameStateSort + "_1000.out";
		ofstream ofopen;
		ofopen.open(Name, ios::out);
		outPut(ofopen, A, 1000);

		ifopen.close();
		ofopen.close();
	}
	else if (j == 2)
	{
		A = new int[5000];
		ifopen.open("Sorted_5000.inp", ios::in);
		inPut(ifopen, A, 5000);

		cout << "Thoi gian chay thuat toan la: ";
		Result(cout, A, 5000, Sort);

		string Name = NameSort + "_" + NameStateSort + "_5000.out";
		ofstream ofopen;
		ofopen.open(Name, ios::out);
		outPut(ofopen, A, 5000);


		ifopen.close();
		ofopen.close();
	}
	else if (j == 3)
	{
		A = new int[10000];
		ifopen.open("Sorted_10000.inp", ios::in);
		inPut(ifopen, A, 10000);

		cout << "Thoi gian chay thuat toan la: ";
		Result(cout, A, 10000, Sort);


		string Name = NameSort + "_" + NameStateSort + "_10000.out";
		ofstream ofopen;
		ofopen.open(Name, ios::out);
		outPut(ofopen, A, 10000);


		ifopen.close();
		ofopen.close();
	}
	else if (j == 4)
	{
		A = new int[50000];
		ifopen.open("Sorted_50000.inp", ios::in);
		inPut(ifopen, A, 50000);

		cout << "Thoi gian chay thuat toan la: ";
		Result(cout, A, 50000, Sort);


		string Name = NameSort + "_" + NameStateSort + "_50000.out";
		ofstream ofopen;
		ofopen.open(Name, ios::out);
		outPut(ofopen, A, 50000);


		ifopen.close();
		ofopen.close();
	}
	else if (j == 5)
	{
		A = new int[100000];
		ifopen.open("Sorted_100000.inp", ios::in);
		inPut(ifopen, A, 100000);

		cout << "Thoi gian chay thuat toan la: ";
		Result(cout, A, 100000, Sort);


		string Name = NameSort + "_" + NameStateSort + "_100000.out";
		ofstream ofopen;
		ofopen.open(Name, ios::out);
		outPut(ofopen, A, 100000);


		ifopen.close();
		ofopen.close();
	}
	else if (j == 6)
	{
		A = new int[250000];
		ifopen.open("Sorted_250000.inp", ios::in);
		inPut(ifopen, A, 250000);

		cout << "Thoi gian chay thuat toan la: ";
		Result(cout, A, 250000, Sort);

		string Name = NameSort + "_" + NameStateSort + "_250000.out";
		ofstream ofopen;
		ofopen.open(Name, ios::out);
		outPut(ofopen, A, 250000);


		ifopen.close();
		ofopen.close();
	}
	if (A != NULL)
	{
		delete[] A;
	}
}

void Run2(int y, void(*Sort)(int[], int), string NameSort)
{
	int j;
	if (y == 0)
	{
		return;
	}
	else if (y == 1)
	{
		Button3();
		cin >> j;
		Run3(j, Sort, NameSort, "Sorted");
	}
	else if (y == 2)
	{
		Button3();
		cin >> j;
		Run3(j, Sort, NameSort, "Reversed");
	}
	else if (y == 3)
	{
		Button3();
		cin >> j;
		Run3(j, Sort, NameSort, "Random");
	}
	else if (y == 4)
	{
		Button3();
		cin >> j;
		Run3(j, Sort, NameSort, "NearlySort");
	}
}

void Run1(int i, ostream &outDevice)
{
	int y;
	if (i == 0)
	{
		return;
	}
	else if (i == 1)
	{
		Button2();
		cin >> y;
		Run2(y, SelectionSort, "SelectionSort");
	}
	else if (i == 2)
	{
		Button2();
		cin >> y;
		Run2(y, InsertionSort, "InsertionSort");
	}
	else if (i == 3)
	{
		Button2();
		cin >> y;
		Run2(y, BinaryInsertionSort, "BinaryInsertionSort");
	}
	else if (i == 4)
	{
		Button2();
		cin >> y;
		Run2(y, InterchageSort, "InterchageSort");
	}
	else if (i == 5)
	{
		Button2();
		cin >> y;
		Run2(y, BubbleSort, "BubbleSort");
	}
	else if (i == 6)
	{
		Button2();
		cin >> y;
		Run2(y, ShakerSort, "ShakerSort");
	}
	else if (i == 7)
	{
		Button2();
		cin >> y;
		Run2(y, ShellSort, "ShellSort");
	}
	else if (i == 8)
	{
		Button2();
		cin >> y;
		Run2(y, HeapSort, "HeapSort");
	}
	else if (i == 9)
	{
		Button2();
		cin >> y;
		Run2(y, MergeSort, "MergeSort");
	}
	else if (i == 10)
	{
		Button2();
		cin >> y;
		Run2(y, WrapQuickSort, "QuickSort");
	}
	else if (i == 11)
	{
		Button2();
		cin >> y;
		Run2(y, CountingSort, "CountingSort");
	}
	else if (i == 12)
	{
		Button2();
		cin >> y;
		Run2(y, RadixSort, "RadixSort");
	}
	else if (i == 13)
	{
		Button2();
		cin >> y;
		Run2(y, FlashSort, "FlashSort");
	}
	else if (i == 14)
	{
		string NameSort[13] = { "SelectionSort","InsertionSort","BinaryInsertionSort","InterchageSort","BubbleSort","ShakerSort","ShellSort","HeapSort","MergeSort","QuickSort","CountingSort","RadixSort","FlashSort" };
		string NameStateSort[4] = { "Sorted","Reversed","Random","NearlySorted" };
		string NameCountElement[6] = { "1000","5000","10000","50000","100000","250000" };
		int CountElement[6] = { 1000,5000,10000,50000,100000,250000 };
		ifstream ifopen;
		ofstream ofopen;
		int *A = NULL;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				string Name1 = NameStateSort[i] + "_" + NameCountElement[j] + ".inp";
				A = new int[CountElement[j]];

				outDevice << NameStateSort[i] << ",";
				outDevice << NameCountElement[j] << ",";
				for (int k = 0; k < 13; k++)
				{

					string Name2 = NameSort[k] + "_" + NameStateSort[i] + "_" + NameCountElement[j] + ".out";
					ifopen.open(Name1, ios::in);
					inPut(ifopen, A, CountElement[j]);
					switch (k)
					{
					case 0:
						Result(outDevice, A, CountElement[j], SelectionSort);
						break;
					case 1:
						Result(outDevice, A, CountElement[j], InsertionSort);
						break;
					case 2:
						Result(outDevice, A, CountElement[j], BinaryInsertionSort);
						break;
					case 3:
						Result(outDevice, A, CountElement[j], InterchageSort);
						break;
					case 4:
						Result(outDevice, A, CountElement[j], BubbleSort);
						break;
					case 5:
						Result(outDevice, A, CountElement[j], ShakerSort);
						break;
					case 6:
						Result(outDevice, A, CountElement[j], ShellSort);
						break;
					case 7:
						Result(outDevice, A, CountElement[j], HeapSort);
						break;
					case 8:
						Result(outDevice, A, CountElement[j], MergeSort);
						break;
					case 9:
						Result(outDevice, A, CountElement[j], WrapQuickSort);
						break;
					case 10:
						Result(outDevice, A, CountElement[j], CountingSort);
						break;
					case 11:
						Result(outDevice, A, CountElement[j], RadixSort);
						break;
					case 12:
						Result(outDevice, A, CountElement[j], FlashSort);
						break;
					default:
						break;
					}

					ofopen.open(Name2, ios::out);
					outPut(ofopen, A, CountElement[j]);

					ifopen.close();
					ofopen.close();
				}
				outDevice << endl;
				if (A != NULL)
				{
					delete[] A;
				}
			}
		}
	}
}

/*Tạo bộ dữ liệu*/
void CreateData()
{
	Sorted("Sorted_1000.inp", 1000);
	Sorted("Sorted_5000.inp", 5000);
	Sorted("Sorted_10000.inp", 10000);
	Sorted("Sorted_50000.inp", 50000);
	Sorted("Sorted_100000.inp", 100000);
	Sorted("Sorted_250000.inp", 250000);

	Reversed("Reversed_1000.inp", 1000);
	Reversed("Reversed_5000.inp", 5000);
	Reversed("Reversed_10000.inp", 10000);
	Reversed("Reversed_50000.inp", 50000);
	Reversed("Reversed_100000.inp", 100000);
	Reversed("Reversed_250000.inp", 250000);

	Random("Random_1000.inp", 1000);
	Random("Random_5000.inp", 5000);
	Random("Random_10000.inp", 10000);
	Random("Random_50000.inp", 50000);
	Random("Random_100000.inp", 100000);
	Random("Random_250000.inp", 250000);

	NearlySorted("NearlySorted_1000.inp", 1000);
	NearlySorted("NearlySorted_5000.inp", 5000);
	NearlySorted("NearlySorted_10000.inp", 10000);
	NearlySorted("NearlySorted_50000.inp", 50000);
	NearlySorted("NearlySorted_100000.inp", 100000);
	NearlySorted("NearlySorted_250000.inp", 250000);
}

int main()
{
	CreateData();
	int i;
	ofstream rfopen;
	rfopen.open("Result.csv", ios::out);
	rfopen << "Input State,Input Size,SelectionSort,InsertionSort,BinaryInsertionSort,InterchangeSort,BubbleSort,ShakerSort,ShellSort,HeapSort,MergeSort,QuickSort,CountingSort,RadixSort,FlashSort" << endl;

	do
	{
		Button1();
		cin >> i;
		Run1(i, rfopen);
	} while (i != 0);
	system("pause");
	return 0;
}