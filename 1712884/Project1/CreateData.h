#ifndef __CREATEDATA_H__
#define __CREATEDATA_H__
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

void Sorted(string StateSort, int N);
void Reversed(string StateSort, int N);
void Random(string StateSort, int N);
void NearlySorted(string StateSort, int N);

void inPut(istream &inDevice, int A[], int N);
void outPut(ostream &outDevice, int A[], int N);
#endif // !__CREATEDATA_H__