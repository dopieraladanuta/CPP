//Reszta z dzielenia
#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> x;
    cout << "Podaj druga liczbe: "<< endl;
    cin >> y;
    z=x%y;
    cout << "Wynik z dzielenia calkowitego dla " << x << " i " << y << " to: " << z <<endl;
    return 0;
}
