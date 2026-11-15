#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"podaj 2 liczby do ilorazu"<<endl;
    cin>>a>>b;
    if (b==0){
        cout<<"druga liczba nie moze byc zerem!!!"<<endl;
    }
    else if(a%b==0){
        cout<<"liczby sa podzielne"<<endl;
    }
    else{
        cout<<"liczby nie sa podzielne"<<endl;
    }
    return 0;
}
