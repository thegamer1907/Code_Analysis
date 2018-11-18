#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s,s1;
    int n,c1=0,c=0,k=0;
    cin>>s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s1;
        if(s1[0]==s[1])
            c++;
        if(s1[1]==s[0])
            c1++;
        if(s==s1)
            k++;
    }
    ((c>0 && c1>0)|| k>0)?cout<<"YES"<<"\n":cout<<"NO"<<"\n";
    return 0;
}
