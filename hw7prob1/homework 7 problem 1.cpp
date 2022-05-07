#include <array>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;  

const unsigned SIZE = 20;
typedef array<unsigned, SIZE> MYARRAY;

default_random_engine e(unsigned(time(nullptr)));
uniform_int_distribution<int> u(10, 99);

void randomfill(MYARRAY& list);
void countingSort(const MYARRAY& A, MYARRAY& B, unsigned k);
void show(const MYARRAY& array, unsigned field_width);

int main()
{
	MYARRAY A, B;
	B.fill(0);
	randomfill(A);
	show(A, 2);
	countingSort(A, B, u.max());
	show(B, 2);
	system("pause");
	return 0;
} 
void show(const MYARRAY& array, unsigned field_width)
{
	for (unsigned member : array)
		cout << setw(field_width) << member << ' ';
	cout << endl;
}
void randomfill(MYARRAY& list)
{
	for (unsigned i = 0; i < list.size(); i++)
		list[i] = u(e);
}
void countingSort(const MYARRAY& A, MYARRAY& B, unsigned k)
{
	unsigned* C = new unsigned[k + 1];
	for (unsigned i = 0; i <= k; ++i)
		C[i] = 0;

	for (unsigned j = 0; j < A.size(); j++)
		C[A[j]] = C[A[j]] + 1;

	for (unsigned i = 1; i <= k; ++i)
		C[i] = C[i] + C[i - 1];

	for (int j = A.size() - 1; j >= 0; j--)
	{
        C[A[j]] = C[A[j]] - 1;
		B[C[A[j]]] = A[j];
		//show(B, 2);
	}
	delete[] C;
	C = nullptr;
}
