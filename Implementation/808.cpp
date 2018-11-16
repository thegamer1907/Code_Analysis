#include<bits//stdc++.h>
using namespace std;
char st[100];

int main()
{
    int n,t;
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        cin>>st[i];
    }
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(st[j]=='B' && st[j+1]=='G')
            {
                swap(st[j],st[j+1]);
                j=j+1;
            }
        }
     //   cout<<st<<endl;

    }
    cout<<st<<endl;
    return 0;







}
