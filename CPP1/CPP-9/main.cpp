//Macierz z przek¹tn¹ z jedynek
#include <iostream>

using namespace std;

int main()
{
    int c=0;
    int t[10][10];
    for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if (i==j)
            {
                t[i][j]=1;
                cout<<t[i][j];
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
        t[k][k];
        c=c+t[k][k];
    }
    cout << "Suma elementow na przekatnej wynosi: "<< c << endl;
}
