#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cin>>n;
    int a[1000][1000];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)cin>>a[i][j];
    }
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<n;i++)
        {
            s=s+a[i][j];
        }
        if(s!=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}