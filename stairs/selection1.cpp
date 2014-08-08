#include<iostream>
using namespace std;

void selection_sort(int* li, int len, int repeat_N = 0){
	for (int start = 0; start < repeat_N; start = start + 1){
		int min_i = start;
		for (int i = start; i < len; i = i + 1){
			if (li[min_i] > li[i]){
				min_i = i;
			}
		} 
		swap(li[start], li[min_i]);
	} 
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

	selection_sort(input_list, input_N, step_N);

	for (int k = 0; k < input_N; k++){
		cout << input_list[k] << " ";
	}cout << endl;

	return 0;
}