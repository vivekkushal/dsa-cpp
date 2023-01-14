// Given two integers, swap them

#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping:" << "\n" << "a = " << a << "\n" << "b = " << b << "\n";

    int temp;
    temp = b;
    b = a;
    a = temp;

    cout << "After swapping:" << "\n" << "a = " << a << "\n" << "b = " << b << "\n";
}
