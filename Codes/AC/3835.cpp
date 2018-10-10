#include<bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cin>>s;
    long long rb=0,rc=0,rs=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B')rb++;
        else if(s[i]=='C')rc++;
        else if(s[i]=='S')rs++;
    }
    long long ib,ic,is;
    cin>>ib>>is>>ic;
    long long pb,pc,ps;
    cin>>pb>>ps>>pc;
    long long m;cin>>m;
    long long ans=0;
    if(rb==0)ib=0;
    if(rs==0)is=0;
    if(rc==0)ic=0;
   /*cout<<rb<<" "<<ib<<endl;
    cout<<rs<<" "<<is<<endl;
    cout<<rc<<" "<<ic<<endl;*/
    while((ib>0)||is>0||ic>0){
            //cout<<ib<<" "<<is<<" "<<ic<<endl;
        long long p=0;
        if(ib<rb){p+=(rb-ib)*pb;ib=0;}
        else ib-=rb;
        if(is<rs){p+=(rs-is)*ps;is=0;}
        else is-=rs;
        if(ic<rc){p+=(rc-ic)*pc;ic=0;}
        else ic-=rc;
        m-=p;
        if(m<0){cout<<ans<<endl;return 0;}
        ans++;
    }
    //cout<<m<<endl;
    long long p = (pb*rb)+(ps*rs)+(pc*rc);
    ans+=m/p;
    cout<<ans<<endl;
}
