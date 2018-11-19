//Jai Shree Krishna
#include <bits/stdc++.h>
#define ll long long int
using namespace  std;

//One More Time
//Just Do it Dude
map<pair<int , int>,int >m1;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("a.in", "r", stdin)
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    t1%=12;
    t2%=12;
    int nexth = h+1;
    h%=12;
    nexth%=12;
    m1[{h,nexth}]+=1;
    m1[{nexth,h}]+=1;
    int prevs = s/5;
    int nexts = prevs+1;
    prevs%=12;
    nexts%=12;
    m1[{prevs,nexts}]+=1;
    m1[{nexts,prevs}]+=1;
    int prevm = m/5;
    int nextm = prevm+1;
    prevm%=12;
    nextm%=12;
    m1[{prevm,nextm}]+=1;
    m1[{nextm,prevm}]+=1;
    int temp = t1;
    for (int i = 0; i<=1000; i+=1) {
        if(temp==t2)
        {
            cout<<"YES";
            return 0;
        }
        int nxt = temp+1;
        nxt%=12;
        if(m1[{nxt,temp}])
        {
            break;
        }
        else{
            temp = temp+1;
            temp%=12;
        }
    }
    temp =  t1;
    for (int i = 0; i<=1000; i+=1) {
        
        if(temp==t2)
        {
            cout<<"YES";
            return 0;
        }
        int nxt = temp-1;
        nxt+=12;
        nxt%=12;
        if(m1[{nxt,temp}])
        {break;
        }
        else{
            temp = temp-1;
            temp+=12;
            temp%=12;
        }
    }
    
    cout<<"NO";
    
    
    
    
    
    
    
    
    return 0;
}

