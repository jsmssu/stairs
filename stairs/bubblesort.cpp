#include<iostream>
using namespace std;

int bubblesort(int* li, int len, int repeat_N = 0) {
	int tmp;
	if (repeat_N == 0){
		repeat_N = len;
	}
	for (int i = 0; i < repeat_N; i = i + 1) {
		for (int j = 0; j < len-1; j = j + 1) {
			if (li[j]>li[j+1]) {
				swap(li[j], li[j + 1]);
			}
		}
	}
	return 0;
}
int main() {
	int input_N;
	int step_N;
	int input_list[1000];
	cin >> input_N;
	cin >> step_N;

	for (int i = 0; i < input_N; i = i + 1) {
		cin >> input_list[i];
	}

	bubblesort(input_list, input_N, step_N);
	
	for (int i = 0; i < input_N; i = i + 1) {
		cout << input_list[i] << " ";
	}

	return 0;
}