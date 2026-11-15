#include <iostream>

using namespace std;

int main()
{
   int a, b;
   cout<<"wprowadz 2 liczby "<<endl;
   cin>>a>>b;
   if (a > b){
    cout<<"wieksza liczba to "<<a<<endl;
    cout<<"mniejsza liczba to "<<b<<endl;
    cout<<"relacja to "<<a<<">"<<b<<endl;
   }
   else{
    cout<<"wieksza liczba to "<<b<<endl;
    cout<<"mniejsza liczba to "<<a<<endl;
    cout<<"relacja to "<<b<<">"<<a<<endl;
   }


    return 0;
}
