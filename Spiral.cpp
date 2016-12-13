#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>    

int q = 0, N = 0;
void Array();

int **A;

using namespace std;

int main() {

	setlocale(0, "");
	do {
		cout << "Enter the number <10" << endl;
		cin >> N;
	} while (N > 10);


	A = new int *[N];   
	for (int i = 0; i < N; i++) {
		A[i] = new int[N];    
	}

	int n = N;

	for (int i = 0; i < n;) {
		for (int j = i; j < n; ++j) {
			q++;
			A[i][j] = q;

		}
		for (int j = i + 1; j < n; ++j) {
			q++;
			A[j][n - 1] = q;

		}
		--n;
		for (int j = n - 1; j >= i; --j) {
			q++;
			A[n][j] = q;

		}
		++i;
		for (int j = n - 1; j >= i; --j) {
			q++;
			A[j][i - 1] = q;

		}
	}

	Array();
	system("pause");
	return 0;
}

void Array() {
	for (int i = 0; i < N; i++) {
		cout << endl;
		for (int j = 0; j < N; j++) {
			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}
}
