#include<bits/stdc++.h>
using namespace std;

#define ft first
#define sd second
#define pb push_back
#define mp make_pair
#define rep(i,n) for(i=0;i<n;i++)
#define pr pair<int,int>
#define pll pair<long long,long long>
#define ll long long
#define v vector
#define all(a) a.begin(),a.end()
#define ina(a,i,n) for(i=0;i<n;i++)cin>>a[i]
#define mmst(a) memset(a,0,sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

set<int> problems;

bool solve(int num,int k) {
    if(num ==0) {
        return true;
    }
    v<int> indices;
    int temp = num;
    int i=0,j;
    int total = 0;

    v<int> possiblities;
    possiblities.pb(0);
    while(i<k) {

        if(!(temp&1)) {
            int n = possiblities.size();
            for(j=0;j<n;j++ ){
                possiblities.pb(possiblities[j] + pow(2,i));
            }
        }
        else 
            total += pow(2,i);
        temp/=2;
        i++;
    }
    for(i=1;i<possiblities.size();i++) {
        if(problems.find(possiblities[i]) != problems.end()) {
            return true;
        }
    }
    return false;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);   
    #endif
    ios_base::sync_with_stdio(false);
    int i,j,k,x,n,t;
    cin>>n>>k;
    rep(i,n) {
        int mul=1;
        int num=0;
        rep(j,k) {
            cin>>x;
            num += mul*x;
            mul*=2;
        }
        problems.insert(num);
    }



    set<int>::iterator it = problems.begin();
    while(it != problems.end()) {
        if(solve(*it,k)) {
            cout<<"YES"<<endl;
            return 0;
        }
        it++;
    } 
    cout<<"NO"<<endl;
    return 0;
}   