#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll bb=0,ss=0,cc=0;
    for (int i=0;i<s.size();i++){
        switch (s[i]){
        case 'B':
            ++bb;
            break;
        case 'S':
            ++ss;
            break;
        case 'C':
            ++cc;
            break;
        }
    }
    ll nb,ns,nc;
    cin>>nb>>ns>>nc;
    ll pb,ps,pc;
    cin>>pb>>ps>>pc;
    ll money;
    cin>>money;

    ll mid ,st=0,en=1e14;
    while (st<en){
        mid =(en+st+1)/2;
        bool ch=true;

        ll nnb,nns,nnc;
        nnb=max(0ll,mid*bb-nb);
        nns=max(0ll,mid*ss-ns);
        nnc=max(0ll,mid*cc-nc);
        ll x=money;
        if (nnb>x && bb!=0)
            ch=false;
        else if (nnb*pb>x)
            ch=false;
        else
            x=x-(nnb*pb);

        if (nns>x && ss!=0)
            ch=false;
        else if (nns*ps>x)
            ch=false;
        else
            x-=(nns*ps);
        if (nnc>x && cc!=0)
            ch=false;
        else if (nnc*pc>x)
            ch=false;
        else
            x-=(nnc*pc);


      // cout<<st<< " = "<<mid << " = "<<en<<" = "<<ch<<endl;
        if (ch==true)
            st=mid;
        else
            en=mid-1;
    }
    cout<<st;

    return 0;
}