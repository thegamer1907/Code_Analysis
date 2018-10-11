#include <bits/stdc++.h>
#include<bitset>
#include<string>
using namespace std ;
#define pb push_back
#define pf push_front
#define mp make_pair
#define fr first
#define sc second
#define ALL(c) c.begin(), c.end()
#define loop(i,n) for(int i = 0;i < int(n);i++)
#define loop1(i,a,b) for(int i=a;i<=b;i++)
#define endl "\n"
typedef vector<long> vi;
typedef vector<pair<int,char> >vii;
typedef long long ll;
typedef pair<int, int> pii;
void fast_in_out() {
	std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); cout.tie(NULL);}
int main()
{
    fast_in_out();
    //freopen("groups.in","r",stdin);
    int n;
    vi v;
   long t,a,mx=0,nb=0,c;
   cin >> n>>t;
   loop(i,n){
   cin >> a;
   v.pb(a);
   }
   for(int i=0,j=0;i<n;){
        if(t-v[i]>=0){
            nb++;
            t-=v[i];
            i++;
        }
        else {
            t+=v[j];
            j++;
            nb--;

        }
        mx=max(nb,mx);
   }
   cout<<mx;
}

