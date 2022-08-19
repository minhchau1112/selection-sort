/* SX tăng dần
- Tìm phần tử min từ phần tử hiện tại trở đi đến cuối mảng.
- Hoán đổi 2 phần tử đó.
*/

#include<iostream>
using namespace std;

void SelectionSort(int* a, int n) {
	int min = 0;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min])min = j;
		}
		swap(a[i], a[min]);
	}
}

int main() {
	int n;
	cout << "Enter the number of elements : ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand();
	}
	SelectionSort(a, n);
	for (int j = 0; j < n; j++) {
		cout << a[j] << " ";
	}
	delete[] a;
	return 0;
}