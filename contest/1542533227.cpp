#include<bits/stdc++.h>
using namespace std;
int main(){
  float h,m,s,t1,t2,flag=0,c=0;
  cin>>h>>m>>s>>t1>>t2;
  t1=t1*5.0;
  t2=t2*5.0;
  m=m;
  s=s;
  m=m+s/60.0;
  if(m>=60.0){
    m-=60.0;
  }
  h=h*5.0+m/12.0;
  if(h>=60.0)
    h-=60.0;
  // cout<<m<<" "<<s;
  // cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<" ";
  if(t1<t2){
  if((m>=t1 and m<=t2)){
    c++;
  }
  if(s>=t1 and s<=t2){
    c++;
  }
  if(h>=t1 and h<=t2){
    c++;
  }
  if(c==3 or c==0){
    flag=0;
  }
  else{
    flag=1;
  }
  }
  else{
    if((m>=t2 and m<=t1)){
      c++;
    }
    if(s>=t2 and s<=t1){
      c++;
    }
    if(h>=t2 and h<=t1){
      c++;
    }
    if(c==3 or c==0){
      flag=0;
    }
    else{
      flag=1;
    }
  }
  if(flag==1){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }
}
// #include<iostream>
// #include<cstdio>
// #include<algorithm>
// #include<cstring>
// using namespace std;
// double h,m,s,t1,t2,h2,m2,s2;
// int flag1,flag2;
// int main()
// {
//   cin>>h>>m>>s>>t1>>t2;
//   t1*=5.0;t2*=5.0;
//   m=m+s/60;
//   if (m>=60.0) m-=60.0;
//   h=h*5+m/12;
//   if (h>=60.0) h-=60.0;
//   s2=60.0+s;
//   m2=60.0+m;
//   h2=60.0+h;
//   if (t1>t2) swap(t1,t2);
//   flag1=1;
//   if ((t1<s&&s<t2)||(t1<s2&&s2<t2)||(t1<m&&m<t2)||(t1<m2&&m2<t2)||(t1<h&&h<t2)||(t1<h2&&h2<t2))
//     {
//       flag1=0;
//     }
//   t1+=60;
//   if (t1>t2) swap(t1,t2);
//   flag2=1;
//   if ((t1<s&&s<t2)||(t1<s2&&s2<t2)||(t1<m&&m<t2)||(t1<m2&&m2<t2)||(t1<h&&h<t2)||(t1<h2&&h2<t2))
//     {
//       flag2=0;
//     }
//   if (flag1||flag2) cout<<"YES\n";
//   else cout<<"NO\n";
// }
