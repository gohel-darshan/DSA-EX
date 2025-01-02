#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptrArr[5]; 

    for (int i = 0; i < 5; ++i) {
        ptrArr[i] = &arr[i]; 
    }

    for (int i = 0; i < 5; ++i) {
        cout << *ptrArr[i] << " "; 
    }
    cout <<endl;
}
