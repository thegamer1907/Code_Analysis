#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
vector<pair<char,char> >v;
int main()
{
    int n,m,i,j,k;
    char ch1,ch2;
    char c1,c2;
    cin>>c1>>c2;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>ch1>>ch2;
        v.push_back({ch1,ch2});
        if(ch1==c1 && ch2==c2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(ch1==c2 && ch2==c1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[i].s==c1 && v[j].f==c2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            if(v[i].f==c2 && v[j].s==c1)
            {
                cout<<"YES"<<endl;
                return 0;
            }

        }
    }
    cout<<"NO"<<endl;
}
