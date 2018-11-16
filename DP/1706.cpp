#include <bits/stdc++.h>
using namespace std;
long long i,h,k,c[100000],d[100000];
string s;
bool k1,k2,kt[100000];
int main()
{
    cin>>s;
    k1=true;
    h=0;k=0;
//    for (i=0; i<s.size(); i++) kt[i]=true;
    for (i=0; i<s.size(); i++)
    {
        if (s[i]=='A'&& s[i+1]=='B' ) 
        {
            h++;
            c[h]=i;
        }
        if (s[i]=='B'&& s[i+1]=='A') 
        {
            k++;
            d[k]=i;
        }
        if (h>3 && k>3) break;
    }
    for (i=1;i<=h;i++) 
    for (int j=1;j<=k;j++)
    if (k1 &&abs(c[i]-d[j])>1) 
    {
        cout<<"YES";
        k1=false;;
        break;
    }
    if (k1) cout<<"NO";
}
