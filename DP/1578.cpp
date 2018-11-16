#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,f1=0,f2=0,l;
	string s;
	cin>>s;
	l=s.size();
    for(i=0;i<l-1;i++)
    {
        if(f1==0 and s[i]=='A' and s[i+1]=='B')
        {
            f1=1;
            for(j=i+2;j<l-1;j++)
            if(s[j]=='B' and s[j+1]=='A')
                {cout<<"YES\n";return 0;}
        }
        if(f2==0 and s[i]=='B' and s[i+1]=='A')
        {
            f2=1;
            for(j=i+2;j<l-1;j++)
            if(s[j]=='A' and  s[j+1]=='B')
            {cout<<"YES\n";return 0;}
        }
    }
    cout<<"NO\n";
    return 0;
}