/*  Source by CppBuzz
    Modified For Learn by Rizky Khapidsyah
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int arr[10];
    long int product = 1;

    for (int i = 0; i < 10; i++) {
        cout << "\n Enter [" << i << "] : ";
        cin >> arr[i];
        product *= arr[i];
    }

    cout << "\n product of 10 number is : " << product;

    _getch();
    return 0;
}


