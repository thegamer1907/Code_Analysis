//=====================================================================================================================================================
//                      Anything is possible as long as you keep working at it , and don't back it down.( Believe That )                  !!!!!!!!!!!!!
//=====================================================================================================================================================
#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
typedef unsigned long long ull;
typedef long double ld;
const long long int N=1e9+7;
#define pb(x)  push_back(x)
#define sd(x) scanf("%d", &(x))
vector<ll>v1;
#define f(i,p,n) for(int i=(p);i<n;i++)
int  main(){
  int n,i,k=0,a=0,b=0;
  string str,sr;
  cin>>str;
    sd(n);
    sr+=str[1]; sr+=str[0];
    string s[n];
    f(i, 0 , n){
        cin>>s[i];
        if(s[i]==str||sr==s[i])k=1;
    }

    if(k) return cout<<"YES",0;

    f(i , 0 , n){
        if(str[0]==s[i][1])a=1;
    if(str[1]==s[i][0])b=1;
    }
    if(a&&b)return cout<<"YES",0;
    cout<<"NO";




 return 0;
}
