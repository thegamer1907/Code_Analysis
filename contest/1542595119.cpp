#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string S[100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    int n;
    cin>>s>>n;
    for(int i = 0; i < n; ++i)
        cin>>S[i];
    for(int i = 0; i < n; ++i)
    {
        if(S[i] == s)
            return cout<<"YES"<<endl, 0;
        for(int j = 0; j < n; ++j)
        {
            if(S[i][0] == s[1] && S[j][1] == s[0])
                return cout<<"YES"<<endl, 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
