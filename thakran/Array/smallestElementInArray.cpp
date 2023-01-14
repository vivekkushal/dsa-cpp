#include<bits/stdc++.h>
using namespace std;

int main() {
	int size;

	cout << "Enter the elements in the array:" << "\n";
	cin >> size;

	int arr[size];

	// Taking input
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	int smallest = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < smallest) {
            smallest = arr[i];
        }
	}

	// Output
	cout << "Smallest element in the array is: " << smallest << "\n";
}
