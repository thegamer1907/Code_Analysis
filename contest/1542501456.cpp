#include <iostream>
using namespace std;
string z;
int n,l,r;
string a[107];
int main()
{
    cin>>z;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==z || (a[i][1]==z[0] && a[i][0]==z[1]))
        {
            l++;
            r++;
            break;
        }
        else
        {
            if(a[i][0]==z[1])
               l++;
            else
                if(a[i][1]==z[0])
                    r++;
        }
    }
    if(l>0 && r>0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}