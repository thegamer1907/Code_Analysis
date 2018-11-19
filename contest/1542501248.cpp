#include<bits/stdc++.h>
using namespace std;
#define ll long long int
set<char> f;
set<char> l;
vector<int> ans;
int main()
{
#ifdef A.R.Limon
    //freopen( "in.txt", "r", stdin );
#endif ///  A.R.Limon
    char ch[2],c[2];
    int n,i,k;
    while(cin>>ch[0]>>ch[1])
    {
        f.clear();
        l.clear();
        cin>>n;
        bool  b=false;
        for(i=1; i<=n; i++)
        {
            cin>>c[0]>>c[1];
            if(c[0]==ch[0] && c[1]==ch[1])
                b=true;
            f.insert(c[0]);
            l.insert(c[1]);
        }
        if(b==false && n==1)
        {
            if(c[0]==ch[1] && c[1]==ch[0])
                b=true;
        }
        if(b==false)
        {
            //if(f.count(ch[0]) && l.count(ch[1])) b=true;
            if(f.count(ch[1]) && l.count(ch[0]))
                b=true;
        }
        if(b==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
