#include <iostream>

using namespace std;

int main()
{
    int s;
    cout<<"podaj liczbe sekund "<<endl;
    cin>>s;
    int m;
    m = s/60;
    s = s%60;

    cout<<"minuty "<<m<<" sekundy "<<s<<endl;


    return 0;
}
