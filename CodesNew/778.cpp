#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    if(n>m)
    {
        cout<<"YES"<<endl;
                return 0;
    }
    if(m>n)
    {
        cout<<"NO"<<endl;
                return 0;
    }
    set<string> polandball;
    set<string> enemyball;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        polandball.insert(s);
    }
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(polandball.count(s)>0)
        {
            cnt++;
            continue;
        }
        enemyball.insert(s);
    }
    if(cnt%2==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}
