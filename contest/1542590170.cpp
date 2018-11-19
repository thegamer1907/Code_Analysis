#include <bits/stdc++.h>
using namespace std;

int main() {
    string p;
    cin>>p;
    int n,x0=0,x1=0,x=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s.compare(p)==0)
        x=1;
        if(s[0]==p[1])
        x0=1;
        if(s[1]==p[0])
        x1=1;
    }
    if(x||(x0&&x1))
    cout<<"YES";
    else
    cout<<"NO";
	return 0;
}
