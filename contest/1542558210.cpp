#include<bits/stdc++.h>


using namespace std;
int i,n,j;
string ans,a[2000],s;
int main()
{
 cin>>s;
 cin>>n;
 for(i=1; i<=n; i++) cin>>a[i];
 for(i=1; i<=n; i++) for (j=1; j<=n; j++)ans+=a[i]+a[j];
 if (ans.find(s)<ans.size()) cout<<"YES"; else cout<<"NO";
}
