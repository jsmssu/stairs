

#include<iostream>
using namespace std;
  
int shakesort(int* li, int len) {
	int low = 0;
	int high = len - 1;
	int low_t, high_t; 
	int change_flag = 0;
	int step_N = 0;

	while (low < high) {
		for (int i = low; i < high; i = i + 1){ 
			if (li[i] > li[i + 1]){
				swap(li[i], li[i + 1]);
				high_t = i;
				change_flag = 1;
			}	
		}
		high = high_t; 
		 

		for (int i = high-1; i >= low; i = i - 1){
			if (li[i] > li[i + 1]){
				swap(li[i], li[i + 1]);
				low_t = i + 1;
				change_flag = 1;
			} 
		}

		low = low_t;
		step_N = step_N + 1;
		if (change_flag == 0) break;
		change_flag = 0;
	}
	return step_N;
}
int main() {
	int input_N;
	int step_N;
	int input_list[1000]; 

	cin >> input_N;

	for (int i = 0; i < input_N; i = i + 1) {
		cin >> input_list[i];
	}
	 
	step_N = shakesort(input_list, input_N);

	cout << step_N;

	return 0;
} 