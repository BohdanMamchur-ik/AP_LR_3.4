// Lab_03_4.cpp
// Мамчур Богдан Тарасович
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9
#include <iostream>
using namespace std;

int main()
{
    double x; 
    double y; 
    double R; 

   
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if ((x * x + y * y <= R * R && x <= 0 && y <= 0) ||
        (x * x + y * y <= R * R && y >= (x - 1) * (x - 1) && x >= 0))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}