#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char a,b,z;
    int n;
    cin>>a>>b>>n;

    char c[n][2];
    for(int i=0;i<n;i++)
    {

        cin>>c[i][0];
        cin>>c[i][1];

    }
    for(int i=0;i<n;i++)
    {
        if(a==c[i][0])
        {
            if(b==c[i][1])
            {cout<<"YES";exit(0);}
        }
        if(c[i][1] == a)
        {
            for(int i=0;i<n;i++)
            {
                 if(b==c[i][0])
            {cout<<"YES";exit(0);}
            }
        }
    }
    cout<<"NO";
    return 0;

}
