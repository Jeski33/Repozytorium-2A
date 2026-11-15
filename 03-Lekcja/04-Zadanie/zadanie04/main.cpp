#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
  int d;
  int e;
  int s;
  int zagrozenia = 0;
  cout<<"wprowadz 5 swoich ocen<<"<<endl;
  cin>>a>>b>>c>>d>>e;
  s=a+b+c+d+e;
  s=s/5;
  cout<<"srednia to "<<s<<endl;

    if (a == 1) zagrozenia += a;
    if (b == 1) zagrozenia += b;
    if (c == 1) zagrozenia += c;
    if (d == 1) zagrozenia += d;
    if (e == 1) zagrozenia += e;
    cout<<"liczba zagrozen "<<zagrozenia<<endl;
    return 0;
}
