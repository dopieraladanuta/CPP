//Klepsydra
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj wysokosc klepsydry: ";
    cin >> n;
    for(int i=1; i<= n/2; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            if(j<i-1)
                cout << " ";
            else
                cout << "**";
        }
        cout << endl;
    }
    for(int i=1; i<=n/2; i++)
    {
        for(int j=0; j< n/2; j++)
        {
            if(j<n/2-i)
                cout << " ";
            else
                cout << "**";
        }
        cout << endl;
    }
    return 0;
}
