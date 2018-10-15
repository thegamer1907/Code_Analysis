#include<bits/stdc++.h>
using namespace std;
const int g=5e5+5;
pair<int,int>p[g+5];
int main ()
{
int n;
cin>>n;
int ans=n;
for (int i=1;i<=n;i++){cin>>p[i].first;p[i].second=0;}
sort(p+1,p+n+1);
int j=n/2;
for (long long i=1;i<=n/2;i++)
{
long long val=2*p[i].first;
for (j;j<=n;)
{
if (p[j].first>=val&&p[j].second==0){ans--;j++;;break;}else j++;

}
}
//cout<<endl;
cout<<ans<<endl;
return 0;
}