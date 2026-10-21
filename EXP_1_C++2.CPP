#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();  

    float base, height, area;

    cout << "Enter base of triangle: ";
    cin >> base;

    cout << "Enter height of triangle: ";
    cin >> height;

    area = 0.5 * base * height;

    cout << "Area of triangle = " << area;

    getch();  
}
