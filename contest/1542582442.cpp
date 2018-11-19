
 #include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,a,b;
    cin>>s;
    int n,i,c=0,k=0,l=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==s||(a[1]==s[0]&&a[0]==s[1]))
            return cout<<"YES",0;
        if(a[1]==s[0])
            k++;
        else if(a[0]==s[1])
            l++;
    }
    if(k>=1&&l>=1)
        return cout<<"YES",0;
    cout<<"NO";

}