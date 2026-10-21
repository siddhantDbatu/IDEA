#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();   
    float length, width, area;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    area = length * width;

    cout << "Area of rectangle = " << area;

    getch();   
}
