#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers." << endl;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;
    
    if (n1 == n2 && n2 == n3 && n3 == n1) {
        cout << "All numbers are the same.";
    }
    else if (n1 >= n2 && n1 >= n3) {
        cout << "Largest number: " << n1;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        cout << "Largest number: " << n2;
    }
    else if (n3 >= n1 && n3 >= n2) {
        cout << "Largest number: " << n3;
    }
   

    return 0;
}