#include <iostream>
#include<map>
using namespace std;
int main() 
{
    int n,m;
    cin>>n>>m;
    int c(0),up(n),ue(m);
    map<string,int>ma;
    while(n--)
    {
        string s;
        cin>>s;
        ma[s]++;
    }
    while(m--)
    {
        string s;
        cin>>s;
        if(ma[s]>0)
            up--,ue--,c++;
    }
    
    if(c%2==0)
    {
        if(up>ue)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    else
    {
        if(ue>up)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
}