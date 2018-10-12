
/*

*/

//***************************************************************************************
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair

using namespace std;
const int N=105;
map<string,int> M;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,c=0;
    string s;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        M[s]=1;
    }
    for(int i=0;i<m;i++)
    {
        cin>>s;
        if(M[s]==1)
        {
            c++;
        }
    }
    n-=c;
    m-=c;
    if(n==m&&c%2)
        cout<<"YES";
    else if(n==m&&c%2==0)
        cout<<"NO";
    else if(n>m)
        cout<<"YES";
    else
        cout<<"NO";

}

