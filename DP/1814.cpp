#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool buscar(string str, string s1, string s2)
{
    bool res=false;
    int p1=str.find(s1,0);
    if(p1>=0)
    {
        int p2=str.find(s2,p1+2);
        if(p2>=0)
        {
            res= true;
        }
    }

    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string palabra;

    bool AB;
    cin>>palabra;

       AB=buscar(palabra,"AB","BA");
    if(AB)
        cout<<"YES"<<endl;
    else
    {
        if(buscar(palabra,"BA","AB"))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
