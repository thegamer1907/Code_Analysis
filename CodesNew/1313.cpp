#include<bits/stdc++.h>
using namespace std;
long long nb,ns,nc,pb,ps,pc,rb,rs,rc,r,ans,Z=0;
int main()
{
    string x; cin >> x;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    for(int i=0;i<x.size();i++)
        if(x[i]=='B')
            rb++;
        else if(x[i]=='S')
            rs++;
        else
            rc++;
    while(nb*bool(rb)+ns*bool(rs)+nc*bool(rc)>0)
    {
        r -= max(rb-nb,Z)*pb + max(rs-ns,Z)*ps + max(rc-nc,Z)*pc;
        nb -= min(rb,nb);
        ns -= min(rs,ns);
        nc -= min(rc,nc);
        if(r<0){
            r=Z;
            break;
        }
        ans++;
    }
    cout << ans + r/(rb*pb+rs*ps+rc*pc) << endl;
}
