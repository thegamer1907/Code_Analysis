#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define fi first
#define se second
#define pd(x) printf("%d",x)
#define ps(x) printf(x)
#define sd(x) scanf("%d",&x)
#define pll(x) printf("%lld",x)
#define sll(x) scanf("%lld",&x)
#define MOD 1000000007
using namespace std;

int main() {
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  // getline(cin, string_name);
  int i, j, q, r, t;

  int h, m, s, t1, t2;
  cin>>h>>m>>s>>t1>>t2;

  float a[3];
  a[0]=(h==12?0:h*5)+ ((m==0 && s==0)?0:2.5);
  a[1]=m + (s==0?0:0.5);
  a[2]=s;
  //for(i=0; i<3; i++) cout<<a[i]<<" "; cout<<endl;
  sort(a, a+3);
  //for(i=0; i<3; i++) cout<<a[i]<<" "; cout<<endl;


  int x1 = (t1==12?0:t1*5);
  int x2 = (t2==12?0:t2*5);

  if (x1>=a[0] && x2>=a[0] && x1<=a[1] && x2<=a[1]) cout<<"YES";
  else if (x1>=a[1] && x2>=a[1] && x1<=a[2] && x2<=a[2]) cout<<"YES";
  else if (((x1>=a[2] && x1<=55) || (x1<=a[0] && x1>=0)) && ((x2>=a[2] && x2<=55) || (x2<=a[0] && x2>=0))) {
    //cout<<x1<<" "<<x2<<endl;
    cout<<"YES";
    //cout<<" in 3rd";
  }
  else cout<<"NO";

  return 0;
}
