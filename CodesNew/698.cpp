#include <bits/stdc++.h>
#define out freopen("o.txt","w",stdout)
#define ll long long
using namespace std;



int main()
{
    int n , m ;
    cin>>n>>m;
    set<string>v1,v2;

    for(int i = 0 ; i < n ;i++)
    {
        string s ;
        cin>>s;
        v1.insert(s);
    }


    for(int i = 0 ; i < m ;i++)
    {
        string s ;
        cin>>s;
        v2.insert(s);
    }

    if(n>m)
        cout<<"YES";
    else if(n==m)
    {
        int cnt = 0;
        for(auto it = v1.begin();it!=v1.end();it++)
        {
            if(v2.count(*it))
            {
                cnt++;
            }
        }
        
        if(cnt%2==0)
        {
            if(n>m)cout<<"YES";
           else cout<<"NO";
        }else{
            if(n>=m)cout<<"YES";
           else cout<<"NO";
        }
    }else cout<<"NO";

    return 0;
}