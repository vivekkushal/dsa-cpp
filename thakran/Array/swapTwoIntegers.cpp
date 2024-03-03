// Given two integers, swap them

#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping:" << "\n" << "a = " << a << "\n" << "b = " << b << "\n";

    // Using temporary variable
    // int temp;
    // temp = b;
    // b = a;
    // a = temp;

    // Using bitwise XOR
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    // Using inbuilt function 'swap'
    swap(a, b);

    cout << "After swapping:" << "\n" << "a = " << a << "\n" << "b = " << b << "\n";
}
