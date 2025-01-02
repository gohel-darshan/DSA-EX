#include <iostream>
using namespace std;
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        
        cout << arr[i] << " ";
    }
    cout <<endl;
}

int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size); 
    cout << "Sum: " << sumArray(arr, size) <<endl; 
}
