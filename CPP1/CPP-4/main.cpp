//Ró¿ne sumy dwóch dowolnych liczb
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj wynik: ";
    cin >> n;
    int x;
    int y=1;
    int z=n/2;
    for(int i=0; i<z; i++)
    {
        x=n-1;
        cout << x << " + " << y << " = " << x+y << endl;
        y++;
        n--;
    }
    return 0;
}
