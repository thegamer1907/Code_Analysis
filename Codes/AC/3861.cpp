#include <bits/stdc++.h>

using namespace std;
string st;
int s,c,b,nb,ns,nc,pb,ps,pc;
long long r,pr,lo,hi,mid;
bool ok (long long mid){

   pr=max ((long long) 0,pb*((mid*b)-nb))+max ((long long)0 ,ps*((mid*s)-ns))+max ((long long) 0,pc*((mid*c)-nc));

   return pr<=r;



}
int main()
{
    cin>>st>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(int i=0 ;i<st.length();++i  ){if(st[i]=='B')b++;else if(st[i]=='S')s++;if(st[i]=='C')c++;}
    lo=0;
    hi=1e13;
    while(lo<hi){
            mid=(lo+hi+1)/2;
    if(ok(mid)){
        lo=mid;
    }else{
       hi=mid-1;

    }
    }
    cout<<hi<<endl;
    return 0;
}