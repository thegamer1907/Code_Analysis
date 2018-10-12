# include<bits/stdc++.h>
using namespace std;
# define ll long long int
ll n,m;
int main()
{
cin>>n>>m;
vector<ll>v;
ll min1=-100000000009;
for(int i=0;i<n;i++)
{
ll x;
cin>>x;
min1=max(x,min1);
v.push_back(x);
}
ll ans1=(min1+m);
ll sum1=0;
for(int i=0;i<n;i++)
sum1+=(min1-v[i]);

if(sum1>=m)
cout<<min1<<endl;
else
{
m=(m-sum1);
ll y=(m/n);
if(m%n!=0)
y++;
y=y+min1;

cout<<y<<endl;
}
cout<<ans1<<endl;

}
