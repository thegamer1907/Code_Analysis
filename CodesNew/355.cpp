#include <bits/stdc++.h>
using namespace std;
#define all(v)  (v.begin()),(v.end())
#define sc(n)   scanf("%d",&n)
#define pr(n)   printf("%d\n",n)
#define mk make_pair
typedef long long ll;
typedef vector<int>vi;
typedef unordered_map<string,int>mp;
typedef pair<int,int>pir;
typedef priority_queue<ll>pq;
void file(){freopen("in.txt", "r", stdin);freopen("out.txt", "w", stdout);}
const int MAX=1e5+7 , INF = (1<<30);
int n,t,t1,l,ans=0,s=0,c=0;
int a[MAX];
int main(){
    cin>>n>>t;
    for (int i=0;i<n;++i)
        sc(a[i]);
    for(int i=0;i<n;++i){
        s+=a[i];
        ++c;
        if(s<=t)
        continue;
        else{
            ans=max(c-1,ans);
            s-=a[l++];
            --c;
        }
    }
    pr(c);
    return 0;
}
