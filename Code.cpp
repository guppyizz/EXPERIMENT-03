//UPDESH ARORA
//PRN - 24070123124
//ENTC B-3
//EXPERIMENT 01
//DIFFERENT TYPES OPERATIONS AND IMPLEMENTAION 

#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl << endl;

    cout << "Is a greater than b? : " << (a > b) << endl;
    cout << "Is a > 0 and b > 0? : " << (a > 0 && b > 0) << endl;
    cout << "Is a > 0 or b > 0? : " << (a > 0 || b > 0) << endl << endl;
    cout << "THE OUTPUT IS TRUE WHEN ITS 1 AND FALSE WHEN ITS 0.";

    return 0;
}

/* OUTPUT EXAMPLE
Enter first number : 2
Enter second number : 9
Addition: 11
Subtraction: -7
Multiplication: 18
Division: 0.222222

Is a greater than b? : 0
Is a > 0 and b > 0? : 1
Is a > 0 or b > 0? : 1

THE OUTPUT IS TRUE WHEN ITS 1 AND FALSE WHEN ITS 0. */
