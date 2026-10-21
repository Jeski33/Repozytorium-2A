#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout<<"podaj 3 liczby calkowite "<<endl;
    cin>> a >> b >> c;

    int suma = a + b + c;
    int roznica = a - b;
    int iloczyn = a * c;
    float iloraz = static_cast<float>(c) / b;

    cout<<"suma "<<suma<<endl;
    cout<<"roznica "<<roznica<<endl;
    cout<<"iloczyn "<<iloczyn<<endl;
    cout<<"iloraz "<<iloraz<<endl;



    return 0;
}
