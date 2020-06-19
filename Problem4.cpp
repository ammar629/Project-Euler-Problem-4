#include "interface.h"
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int num) {
	string number = to_string(num);
	int length = number.length();

	cout << "Length: " << length << endl;
	for (int i = 0; i < length; i++) {
		if (number[i] != number[length - i - 1]) {
			return false;
		}
	}
	return true;
}

void Calculate() {
	int max = 0;
	int product = 0;
	for (int i = 999; i > 100; i--) {
		for (int j = 999; j > 100; j--) {
			product = i * j;
			if (is_palindrome(product) && product > max) {
				max = product;
			}
		}
	}
	cout << "Max Palindrome from product of 3 digits is: " << max << endl;
}

void main() {
	Calculate();
	cout << "\n";
	system("PAUSE");
}
