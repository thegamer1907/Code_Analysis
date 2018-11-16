#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<t;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(x[j-1]=='B'&&x[j]=='G')
            {
               swap(x[j-1],x[j]);
                j++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<x[i];
    }
    cout<<endl;
    return 0;
}