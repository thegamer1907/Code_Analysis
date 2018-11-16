#include <iostream>

using namespace std;

int main()
{
    int n,t,a[30030];
    cin >>n>>t;
    for(int i=0;i<n-1;i++)
    {
        cin >>a[i];
    }
    t--;
    int c=0;
    for(int i=0;i<n;)
    {
        if(i>t){c=0;
            break;
        }
        if(i!=t)i+=a[i];
        if(i==t)
        {
            c=1;
            break;
        }

    }
    if( c==1)
    cout <<"YES" << endl;
    else
    cout <<"No" << endl;

    return 0;
}
