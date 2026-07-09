#include <iostream>
using namespace std;

int main() {
int num1, num2, num3;

// Input three numbers
cout << "Enter three numbers: ";
cin >> num1 >> num2 >> num3;

// Calculate bitwise OR
int result = num1 | num2 | num3;

// Output the result
cout << "The bitwise OR of " << num1 << ", " << num2 << ", and " << num3 << " is: " << result << endl;

return 0;
}