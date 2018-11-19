///        +====================+
///        "In The Name Of Allah"
///    +----+------------------+----+
///    |2017| Ali Mollahoseini |1396|
///    | 10 +------------------+ 07 |
///    | 05 |   CF Round 438   | 13 |
///    +----+------------------+----+


#include <bits/stdc++.h>
#define ll long long
#define int long long
#define F first
#define S second
#define pb push_back
#define Init ios::sync_with_stdio(0);

const int MX = 70000 + 100;
const int inf = 0x7FFFFFFF;
const int mod = 1000 * 1000 * 1000 + 7;
using namespace std;
int a[3] ,t1, t2;
int32_t main(){
    Init
    cin>>a[0]>>a[1]>>a[2]>>t1>>t2;
    a[0]=(a[0]*60*60)%43200;
    a[1]=(a[1]*12*60)%43200;
    a[2]=(a[2]*12*60)%43200;
    a[1]=(a[1]+a[2]/60)%43200;
    a[0]= (a[0]+a[1]/12)%43200;
    t1=(t1*60*60)%43200;
    t2=(t2*60*60)%43200;
    bool tf  =0;
    int i =t1;
    while(1==1){
        i++;
        i%=43200;
        if(i == a[0] ||i == a[1]||i == a[2] ){
            break;
        }
        if(i==t2){
            //cout<<i<<endl;
            tf=1;
            break;
        }
    }
    //cout<<a[0]<<endl;
    i = t1;
    while(1==1){
        i--;
        i%=43200;
        if(i<0){
            i+=43200;
        }
        if(i == a[0] ||i == a[1]||i == a[2] ){
            break;
        }
        if(i==t2){
            tf=1;
            break;
        }
    }
    //cout<<tf<<endl;
    if(tf){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}

