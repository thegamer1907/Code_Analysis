#include<bits/stdc++.h>
using namespace std;
int main()
{
    string inp;
    int n,t;
    cin>>n>>t;
    cin>>inp;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(inp[j]=='B'&&inp[j+1]=='G')
            {
                inp[j] = 'G';
                inp[j+1] = 'B';
                j++;
            }
        }
    }
    cout<<inp;
    return 0;
}
