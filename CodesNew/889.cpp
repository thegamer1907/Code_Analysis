#include<bits/stdc++.h>
using namespace std;
int main(void)
{

    set<string>joy;
    int cnt,res,n,m;
    string s;
    cin>>n>>m;
    for(int i=0;i<n+m;i++)
    {
        cin>>s;
        joy.insert(s);
    }

    res=n+m-joy.size();
    if(n>(m-(res%2)))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;

}
