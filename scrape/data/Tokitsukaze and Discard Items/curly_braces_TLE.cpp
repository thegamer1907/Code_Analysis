/*Hey, What's up?*/

#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
set<long long>st;
set<long long>::iterator it,jt;
int main()
{
    fastio;
    long long a=0,b=0,c,d,e,f=0,l,g,m,n,k,i,j,t,p,q;
    cin>>n>>m>>k;
    for(i=0; i<m; i++)
    {
        cin>>a;
        st.insert(a);
    }
    jt=st.begin();
    a=k;
    f=0;
    while(1){
        //cout<<a<<endl;
        if(f){
        it=st.end();
        it--;
        if(it==jt)break;
        }
        it=st.upper_bound(a);
        if(!f){
            if(it==st.begin()){
                a+=k;
                continue;
            }
            else{
                    it--;
                a+=distance(st.begin(),it)+1;
                f++;
                jt=it;
            }
        }
        else{
                it--;
            if(jt==it){
                a+=k;
                continue;
            }
            else{
                a+=distance(jt,it);
                f++;
                jt=it;
            }
        }
        if(f){
        it=st.end();
        it--;
        if(it==jt)break;
        }
    }
    cout<<f<<endl;
    return 0;
}