// Trójk¹t prostok¹tny
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Podaj bok a: " ;
    cin >> a;
    cout << "Podaj bok b: " ;
    cin >> b;
    cout << "podaj bok c: " ;
    cin >> c;
    if(a*a+b*b==c*c)
        cout << "Boki " << a << " " << b << " i " << c << " tworza trojkat prostokatny." << endl;
    else
        cout << "Nie da sie utworzyc trojkata prostokatnego." << endl;
}
