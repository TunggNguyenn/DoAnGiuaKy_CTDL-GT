#include "Result.h"
#include "CreateData.h"

void Result(ostream &outDevice, int A[], int N, void(*Sort)(int[], int))
{
	//outDevice << stateSort << "," << N << ",";
	double Times;
	clock_t start = clock();
	Sort(A, N);
	clock_t end = clock();
	Times = (double)(end - start) / CLOCKS_PER_SEC;
	outDevice << Times << ",";

}