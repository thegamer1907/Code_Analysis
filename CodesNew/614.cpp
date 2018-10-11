#include <iostream>
#include <map>
#include <string>
#define p_b push_back()
using namespace std;

int main()
{
    map<string,int> mapa1;
    map<string,int> mapa2;
    string s;
    bool par;
    int m,n,q,r;

    cin>>n>>m;
    q=n;
    r=m;
    for (int i=0; i<n; i++)
    {
        cin>>s;
        mapa1[s]++;
    }
    for(int i=0; i<m; i++)
    {
        cin>>s;
        if(mapa1[s]!=0)
        {
            q--;
            r--;
        }
    }
    if(!((n-q)%2))
        par=1;
    else
        par=0;
    if(par)
    {
        if(q>r)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    else
    {
        if(r<=q)
            cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    //cout<<q<<" "<<r<<endl;

}
