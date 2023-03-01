#include <iostream>
using namespace std;

void BubbleSort(int *arr,int len) {
	for (int i = 0;i < len - 1;i++) {
		for (int j = 0;j < len - 1- i;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,len);
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << endl;
	}
}