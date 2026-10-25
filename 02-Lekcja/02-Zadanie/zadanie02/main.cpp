#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    double a;
    double b;
    double c;
    double d;
    double e;
    cout<<"podaj 5 ocen "<<endl;
    cin >> a >> b >> c >> d >> e;


    double x;
    double wynik;

    x = a + b + c + d + e;
    wynik = x / 5;

    cout << fixed <<"srednia to " << setprecision(2) << wynik <<endl;

    return 0;
}
