// Macierz z przek¹tn¹ z kolejnych liczb
#include <iostream>

using namespace std;

int main()
{
    int c=0;
    int d=0;
    int t[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if (i==9-j)
            {
                t[i][j]=d;
                cout<<t[i][j];
                d++;
            }
            else
            {
                t[i][j]=0;
                cout << t[i][j];
            }
        }
        cout << endl;
    }
    for (int k=0; k<10; k++)
    {
        t[k][9-k];
        c=c+t[k][9-k];
    }
    cout << "Suma elementow na przekatnej wynosi: "<< c << endl;
}
