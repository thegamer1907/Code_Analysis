#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> ans;
int main()
{
#ifdef A.R.Limon
    //freopen( "in.txt", "r", stdin );
#endif ///  A.R.Limon
    char ch[2],p,q;
    int n,i;
    while(cin>>ch[0]>>ch[1])
    {
        string a="";
        string b="";
        cin>>n;
       bool  k=false;
       for(i=1;i<=n;i++){
        cin>>p>>q;
        if(p==ch[0] && q==ch[1]) k=true;
        a+=q,b+=p;
       }
       if(k==false){
        size_t l=a.find(ch[0]);
        size_t t=b.find(ch[1]);
        if(l!=string::npos && t!=string::npos) k=true;
       }
       if(k==true) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
}
