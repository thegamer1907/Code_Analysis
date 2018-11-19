//3 13 7 prob
#include<bits/stdc++.h>
using namespace std;
using namespace std;
int c[20];
int main()
{
    std::ios::sync_with_stdio(false); //I/O faster use'\n' in place of endl
    cin.tie(NULL);
    int n,k,t,x;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        t=0;
        for(int j=0;j<k;j++){
            cin>>x;
            t=(t<<1)+x;
        }
        c[t]++;
    }
    int d=0;
    for(int i=0;i<(1<<k);i++){
        for(int j=0;j<(1<<k);j++){
            if((i&j)==0 && c[i] && c[j]){
                d=1;
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
