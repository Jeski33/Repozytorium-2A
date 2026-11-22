#include <iostream>
#include <climits>
using namespace std;

int main()
{
int najw = 0;
int najm = INT_MAX;
int suma = 0;
int srednia = 0;
int x = INT_MAX;
int cnt = 0;
while (x != 0){
        cout<<"podaj liczbe rzeczywista "<<endl;
        cin>>x;
        suma = suma + x;
        if (x>najw){
            najw = x;
        }
    if (x<najm){
        najm = x;
    }
    cnt = cnt + 1;
}
cout<<"suma to "<<suma<<endl;
cout<<"srednia to "<<suma/(cnt-1)<<endl;
}
