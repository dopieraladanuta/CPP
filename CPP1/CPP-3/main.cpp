// Piramida z liter
#include <iostream>

using namespace std;

int main()
{
    int n;
    char litera = 'A';
    cout << "Podaj wysokosc piramidy: ";
    cin >> n;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j< n*2-1; j++)
        {
            if(j<n-i || j>n+i-2)
            {
                cout << " ";
                litera='A';
            }
            else if (j<n-1)
            {
                cout << litera;
                litera++;
            }
            else
            {
                cout << litera;
                litera--;
            }
        }
        cout << endl;
    }
    return 0;
}
