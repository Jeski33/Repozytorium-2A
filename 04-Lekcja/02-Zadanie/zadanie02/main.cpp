#include <iostream>

using namespace std;

int main()
{
    int srednia = 0;
    int suma = 0;
   int n;
   cout<<"podaj ile liczb rzeczywistych chcesz "<<endl;
   cin>>n;
   for(int i = 0; i < n; i++){
        int x;
    cout<<"podaj liczbe rzeczywista"<<endl;
    cin>>x;
    suma = suma + x;
    srednia = srednia + x;

   }

   cout<<"suma to "<<suma<<" srednia to "<<suma/n<<endl;

    return 0;
}
