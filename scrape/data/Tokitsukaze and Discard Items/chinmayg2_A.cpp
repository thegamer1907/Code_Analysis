// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>

#define lli long long int
#define pb push_back
#define constant 1000000007
using namespace std;


int main(){
  ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


        lli n,m,k;
        cin>>n>>m>>k;

        lli p[m];
        lli initial = 1;
        lli final = k;
        lli number= 0;
        for(lli i = 0;i<m;i++){
            cin>>p[i];
        }
        lli ans = 0;
        for(lli i = 0;i<m;i++){
            if(p[i] <= final){
                number ++;
            }else if( number != 0){
                // cout<<"VALUE "<<p[i]<<endl;
                final = final + number;
                ans++;
                i--;
                number = 0;
            }else{
                
                initial = final + 1;
                initial = p[i] - (p[i] - initial)%k;
                final = initial + k -1;
                i--;
                // cout<<"FINAL "<<initial<<endl;
            }
            if(i == m -1 ){
                ans++;
                break;
            }
        }

        cout<<ans;
        
    cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";

    return 0;
}