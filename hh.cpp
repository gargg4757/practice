#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    // Input from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Adding the two numbers
    sum = num1 + num2;

    // Displaying the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;

    return 0;
}
