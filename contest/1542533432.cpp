#include<iostream>
#include<cstring>
using namespace std;
///wake me up when September ends

int main()
{
    char a[3];
    cin>>a;
    int n;
    cin>>n;
    char b[n][3];
    for (int i=0;i<n;i++)
    {
        cin>>b[i];
        if (!strcmp(a,b[i]))
        {
            cout<<"YES\n";
            return 0;
        }
    }
    for (int i=0;i<n;i++)
        for (int j=0;j<n ;j++)
            if (b[i][1]==a[0] && b[j][0]==a[1])
            {
                cout<<"YES\n";
                return 0;
            }
    cout<<"NO\n";


    return 0;
}