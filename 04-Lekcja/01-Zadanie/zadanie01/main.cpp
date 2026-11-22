#include <iostream>

using namespace std;

int main()
{
    int suma;
    int n;
   cout<<"wpisz liczbe naturalna "<<endl;
   cin>>n;
   for(int i = 0; i<n; i++){
    suma = suma + i;
   }
   cout<<"suma to "<<suma<<endl;
    return 0;
}
