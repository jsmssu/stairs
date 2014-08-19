#include <iostream>

using namespace std;

void selectionSort(int *arr, int n, int s) {
    for(int k = 0; k < s; k++) {
        for(int j = k; j < n; j++) {
            int pivot = k;
            int temp = arr[pivot];

            if(temp > arr[j]) {
               temp = arr[j];
               swap(arr[pivot], arr[j]);
            } 
        }
    }
}

int main() {
    int input_arr[1000];
    int input, loop;

    cin >> input >> loop;
    for(int i = 0; i < input; i++) {
        cin >> input_arr[i];
    }

    selectionSort(input_arr, input, loop);

    for(int i = 0; i < input; i++) {
        cout << input_arr[i];
    }

    return 0;
}

