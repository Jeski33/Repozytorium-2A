#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char znak;
    cout<<"podaj liczbe 1 operatora liczba 2 "<<endl;
    cin>>a>>znak>>b;

    if (znak=='+'){
        cout<<"wynik to "<<a+b<<endl;
    }
    else if(znak=='-'){
        cout<<"wynik to "<<a-b<<endl;
    }
     else if(znak=='*'){
        cout<<"wynik to "<<a*b<<endl;
        }
    else if(znak=='/'){
        if (b==0){
            cout<<"nie dziel przez 0 "<<endl;
        }
       else{ cout<<"wynik to "<<a/b<<endl;

    }
    }
    else if(znak=='%'){
            if (b==0){
                cout<<"nie mozna operowac przez 0 "<<endl;
            }
        else {cout<<"wynik to "<<a%b<<endl;
        }
    }


    return 0;
}
