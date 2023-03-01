#include <iostream>
using namespace std;

int main() {
	int * p = NULL;
	int * q = (int*)0x1100;
	cout << *p << endl;
	cout << *q << endl;

}