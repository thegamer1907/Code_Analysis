#include<bits/stdc++.h>
#define FAST std::ios::sync_with_stdio(false);
#define endl '\n'
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define MAX_N 100005
#define Mem(a,b) memset(a,b,sizeof(a))
#define FREI freopen("in.txt","r",stdin)
#define FREO freopen("out.txt","w",stdout)
using namespace std;
const ll mod=1e9+7;

unordered_map <char,int>mp1,mp2;

int main(){
   //FREI;
   FAST;
   string str,s;
   int n;
   cin>>str;
   scanf("%d",&n);
   bool flag=0;
   int i;
   for(i=0;i<n;i++){
      cin>>s;
      if(s[0]==str[0]&&s[1]==str[1]){
         flag=1;
      }
      mp1[s[1]]=1;
      mp2[s[0]]=1;
   }
   if(mp1[str[0]]==1&&mp2[str[1]]==1)flag=1;
   if(flag)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   return 0;
}


