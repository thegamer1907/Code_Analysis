#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1, s;
    cin>>s1;
    int n,f1=0,f2=0,f3=0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>s;
        if(s == s1)
            f1 = 1;
        else
        {
            if(s[0] == s1[1])
                f2 = 1;
            if(s[1] == s1[0])
                f3 = 1;
        }
    }
    if(f1)
        cout<<"YES";
    else if(f2 && f3)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}