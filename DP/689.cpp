#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5,OO=0x3f3f3f3f;
int n;
int a[N],l,r;
string s;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin>>s;
    if(s[0]==s[1]) a[0]++;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) a[i]++;
    }
    for(int i=0;i<s.size();i++) a[i]+=a[i-1];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }

    return 0;
}
