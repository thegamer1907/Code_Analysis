#include <iostream>
using namespace std;
int fac (int x)
{
    if (x==1)
    return 1;
    else return x*fac(x-1);
}

int main()
{
    
    int a,b;
    cin>>a>>b;
    if(a>b)
    cout<<fac(b);
    else cout<<fac(a);
    //cout<<d(fac a, fac b);
   // cout << "Hello World!" << endl;
    return 0;
}
