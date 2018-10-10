#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define ff first
#define ss second

using namespace std;

const double pi=acos(-1);
const int N=(int)5e6+7,mod=1000000007,M=1e9;

//scanf("%d",&);
int n,k,st,en,mid;
string s;

bool can(){
    int c[]={0,0};
    for(int i=0;i<mid;i++)c[s[i]-'a']++;
    for(int i=mid;i<n;i++){
        if(c[0]<=k||c[1]<=k)return 1;
        c[s[i]-'a']++;
        c[s[i-mid]-'a']--;
    }
    return c[0]<=k||c[1]<=k;
}

int main()
{
    cin>>n>>k>>s;
    en=n;
    while(st<en){
        mid=(st+en+1)>>1;
        if(can())st=mid;
        else en=mid-1;
    }
    cout<<st;
    return 0;
}
