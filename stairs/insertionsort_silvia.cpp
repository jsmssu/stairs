
#include<iostream>
using namespace std;
#define DEBUG
void insertion_sort(int* li, int len, int repeat_N = 0){
	for (int end = 0; end < repeat_N; end = end + 1){

		for (int i = end; i > 0; i = i -1){
			if (li[i] < li[i-1]) {
				swap(li[i], li[i-1]);
				break;
			}			
		} 

#ifdef DEBUG
		cout << "step " << end + 1 << endl;
		for (int i = 0; i < len; i = i + 1) {
			cout<< li[i] << " ";
		}cout<<endl;
#endif	

	} 
}
int main() { 
	int input_N;
	int step_N;
	int input_list[1000];
#ifdef DEBUG
	input_N = 7;
	step_N = 4;
	input_list[0] = 6;
	input_list[1] = 2;
	input_list[2] = 9;
	input_list[3] = 8;
	input_list[4] = 3;
	input_list[5] = 4;
	input_list[6] = 7;
#else
	cin >> input_N;
	cin >> step_N;
	for (int i = 0; i < input_N; i = i + 1) {
		cin >> input_list[i];
	}
#endif


	insertion_sort(input_list, input_N, step_N);

	for (int k = 0; k < input_N; k++){
		cout << input_list[k] << " ";
	}cout << endl;

	return 0;
}