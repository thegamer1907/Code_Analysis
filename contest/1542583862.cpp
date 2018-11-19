#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define sz(x) (int)s.size()
using namespace std;

int main()
{
//    #ifndef ONLINE_JUDGE
//        freopen("in.txt","r",stdin);
//    #endif
    int h,m,s;
    int t1,t2 ;
    while(cin>>h>>m>>s>>t1>>t2){
        double ph=h+0.5 , pm= m/5+0.5 ,ps = s/5 +0.5  ;
        int flag = 1 ;
        if(t1<t2&& ((ph>t1&&ph<t2)||(pm>t1&&pm<t2)||(ps>t1&&ps<t2))){
            flag = 0 ;
        }
        if(flag && t1>t2&& ((ph>t1||ph<t2) || (pm>t1||pm<t2) || (ps>t1||ps<t2))){
            flag = 0 ;
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            flag = 1;
            if(t1<t2&& ((ph>t2||ph<t1)||(pm>t2||pm<t1)||(ps>t2||ps<t1))){
                flag = 0 ;
            }
            if(flag && t1>t2&& ((ph>t2&&ph<t1) || (pm>t2&&pm<t1) || (ps>t2&&ps<t1))){
                flag = 0 ;
            }
            if(flag){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
