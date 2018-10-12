#include <bits/stdc++.h>
#define N 150
using namespace std;
priority_queue<int, vector<int>, greater<int> > qu;
int n,m;
int an[N];
int main(){
    cin>>n>>m;
    int ma = 0;
    
    for(int i = 0; i < n; ++i){
        cin>>an[i];
        qu.push(an[i]);
        ma = max(ma, an[i]);
    }

    int ans = 0;
    for(int i = 0; i < n; ++i){
        ans += ma-an[i];
    }   

    if(ans <= m){
        int cnt = m - ans;
        int xn = ma;
        xn += cnt/n;
        xn += cnt%n==0?0:1;
        cout<<xn<<" "<<ma+m<<endl;
    }else{
        int mm = m;
        while(mm--){
            int aa = qu.top();
            aa++;
            qu.pop();
            qu.push(aa);
        }
        while(qu.size()!=1){
            qu.pop();
        }
        int xn = qu.top();
        cout<<xn<<" "<<ma+m<<endl;
    }

    return 0;
}