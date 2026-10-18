#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string imie;
    int wiek;
    double wzrost;

    cout<<"Podaj swoje imie "<<endl;
    cin>>imie;
    cout<<"Wprowadz wiek "<<endl;
    cin>>wiek;
    cout<<"wprowadz wzrost w cm "<<endl;
    cin>>wzrost;


    cout<<"\nwynik\n";
    cout<<imie<<endl;
    cout<<wiek<<endl;
    cout<<fixed<<setprecision(2)<<wzrost<<" cm"<<endl;


    return 0;
}
