#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define pb push_back

int main() {

ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

//freopen("input.txt","r",stdin);


int t=1;
//cin>>t;

while(t--){
ll n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++)
{

    cin>>a[i];

}

int i=0,j=n-1;
ll v=0,v1=0,v2=0;


while(i<=j){
if(v1==v2)
   v=v1;

if(v1<v2)
    v1+=a[i++];
else
    v2+=a[j--];

if(v1==v2)
   v=v1;
//cout<<i<<" "<<j<<" "<<v1<<endl;
}
cout<<v;

}

}
