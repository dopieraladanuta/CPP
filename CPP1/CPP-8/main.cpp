// 8 - Tabliczka mno¿enia
#include <iostream>

using namespace std;

int main()
{
    int x =1;
    int y =2;
    for(int i=1; i<=10; i++)
    {
        cout << x << " ";
        for(int j=2; j<=10; j++)
        {
            y=i*j;
            cout << y << " ";
        }
        x++;
        cout << endl;
    }
}
