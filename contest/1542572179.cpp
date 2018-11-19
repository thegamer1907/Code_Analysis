#include <bits/stdc++.h>
using namespace std;

int h,m,s,t1,t2;
int p1, p2;
bool check[2];

int main()
{
    cin>>h>>m>>s>>t1>>t2;
    int comp[4];

    h*=5;
    t1*=5;
    t2*=5;

    comp[0]=h;
    comp[1]=m;
    comp[2]=s;
    comp[3]=t1;
    comp[4]=t2;

    /*for(int i = 0; i < 5; i++)
    {
        cout<<comp[i]<<" ";
    }
    cout<<endl;//*/

    sort(comp, comp + 5);

    for(int i = 0; i < 5; i++)
    {
        //cout<<comp[i]<<" ";
        if(comp[i] == t1 and !check[0]) p1 = i, check[0] = 1;
        if(comp[i] == t2 and !check[1]) p2 = i, check[1] = 1;
    }
    //cout<<endl<<p1 - p2;
    if(abs(p1 - p2) == 1 or abs(p1 - p2) == 4) cout<<"YES";
    else cout<<"NO";//*/
}
