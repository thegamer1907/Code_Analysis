#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define re return
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll kola=0,kolb=0;
    for (int i=0;i<s.size()-1;++i){
      if (s[i]=='A' && s[i+1]=='B') kola++;
    }
    for (int i=0;i<s.size()-1;++i){
      if (s[i]=='B' && s[i+1]=='A') kolb++;
    }
    if (kolb>0 && kola>2){ cout << "Yes"; re 0;}
    if (kolb>2 && kola>0){ cout << "Yes"; re 0;}
    if (kola>1 && kolb>1){ cout << "Yes"; re 0;}
    if (kola==0 || kolb==0){ cout << "No"; re 0;}
    if (kola==kolb){
    for (int i=0;i<s.size()-1;++i){
      if (s[i]=='A' && s[i+1]=='B') kola=i;
    }
    for (int i=0;i<s.size()-1;++i){
      if (s[i]=='B' && s[i+1]=='A') kolb=i;
    }
    if (abs(kola-kolb)!=1) cout << "Yes";
    else cout << "No";
    }
    else{
      if (kolb==2){
      ll b[2];
    for (int i=0;i<s.size()-1;++i){
      if (s[i]=='B' && s[i+1]=='A'){ b[0]=i; break;}
    }
    for (int i=0;i<s.size()-1;++i){
      if (s[i]=='B' && s[i+1]=='A' && i!=b[0]){ b[1]=i; break;}
    }
    for (int i=0;i<s.size()-1;++i){
      if (s[i]=='A' && s[i+1]=='B') kola=i;
    }
    if (b[1]-b[0]==2 && b[1]-1==kola) cout << "No";
    else cout << "Yes";
      }
    else{
    ll a[2];
    for (int i=0;i<s.size()-1;++i){
      if (s[i]=='A' && s[i+1]=='B'){ a[0]=i; break;}
    }
    for (int i=0;i<s.size()-1;++i){
      if (s[i]=='A' && s[i+1]=='B' && i!=a[0]){ a[1]=i; break;}
    }
    for (int i=0;i<s.size()-1;++i){
      if (s[i]=='B' && s[i+1]=='A') kolb=i;
    }
    if (a[1]-a[0]==2 && a[1]-1==kolb) cout << "No";
    else cout << "Yes";
    }
}
    return 0;
}
