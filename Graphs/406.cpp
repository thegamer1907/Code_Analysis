#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    char c[55];
    cin>>n>>t>>c;

    while(t--)
        for(int i=0;i<n;++i)
        {
            if(c[i]=='B'&&c[i+1]=='G')
            {
                c[i]='G';
                c[++i]='B';
            }
        }

cout<<c;
}
