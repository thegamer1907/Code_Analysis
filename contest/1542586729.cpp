#include <iostream>

using namespace std;

int main()
{
    char c1,c2,d1,d2;
    int n;
    bool b1=0,b2=0;
    cin>>c1>>c2>>n;
    while(n--)
    {
        cin>>d1>>d2;
        if(d1==c1&&d2==c2)
        {
            cout<<"YES";
            return 0;
        }
        if(d1==c2&&d2==c1)
        {
            b1=1;
            b2=1;
        }
        else if(d1==c2)
            b1=1;
        else if(d2==c1)
            b2=1;
        if(b1&&b2)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
