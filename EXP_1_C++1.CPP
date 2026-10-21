#include <iostream.h>
#include <conio.h>
#include <math.h>

void main() {
    clrscr();   
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if ((int)result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    getch();   
}
