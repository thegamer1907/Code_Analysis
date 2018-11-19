#include<bits/stdc++.h>

using namespace std;
const int maxi=1e6+6;
#define pb push_back
string s,w;
int t,n;
int a[maxi];
vector<int> v[maxi];
int main()
{
    string s;
    cin>>s;
    cin>>n;

    int  isto=0;
    int pr2=0;
    int dr1=0;
    for (int i=1;i<=n;i++)
    {
        cin>>w;
        if (s==w) isto++;
        if (s[0]==w[1]) dr1++;
        if (s[1]==w[0]) pr2++;
    }

    if (isto || (pr2 && dr1)) printf("YES\n"); else printf("NO\n");
    return 0;
}
