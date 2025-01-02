#include <iostream>
using namespace std;

int main() {
    int num = 30;
    int &ref = num; 

    ref = 40; 
    cout << "Value of num: " << num <<endl; 
}
