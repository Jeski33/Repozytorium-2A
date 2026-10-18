#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double liczba;
    cout<<"wprowadz liczba rzeczywsita "<<endl;
    cin>>liczba;

    cout << fixed;

    cout<<"1 miejsce po kropce " << setprecision(1) << liczba<<endl;
    cout<<"3 miejsca po kropce " << setprecision(3) << liczba<<endl;
    cout<<"5 miejsc po kropce" << setprecision(5)<<liczba<<endl;

    return 0;
}
