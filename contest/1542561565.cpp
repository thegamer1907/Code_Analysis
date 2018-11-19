#include<bits/stdc++.h>
using namespace std;


int n, m, k, h, s, t, x=1, y=1, i, a[4], t1, t2;
int main()
{
   cin>>h>>m>>s>>t1>>t2;
   h%=12;
  //t1%=12;
  // t2%=12;
  if (t1>t2) swap(t1, t2);
   m/=5;
   s/=5;
   if (h>=t1&&t2>h) x=0;
   else y=0;
   if (m>=t1&&t2>m) x=0;
   else y=0;
    if (s>=t1&&t2>s) x=0;
    else y=0;
    if (x==1||y==1) cout<<"YES";
    else cout<<"NO";
  // else  if ((h>=t1&&t2>h)&&(m>=t1&&t2>m)&&(s>=t1&&t2>s)) cout<<"YES";
  // else if (!(h>=t1&&t2>h)&&!(m>=t1&&t2>m)&&!(s>=t1&&t2>s)) cout<<"YES";
  // else cout<<"NO";


}
