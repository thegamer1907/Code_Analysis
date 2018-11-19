#include <bits/stdc++.h>
#define EPS 1e-10;
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string t;
    cin>>t;
    int n;
    cin>>n;
    string s[110];
    for(int i=0; i<n; i++) cin>>s[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            string tmp1,tmp2;
            tmp1=s[i]+s[j];
            tmp2=s[j]+s[i];
            if(tmp1.find(t)!=string::npos||tmp2.find(t)!=string::npos)
            {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}







































