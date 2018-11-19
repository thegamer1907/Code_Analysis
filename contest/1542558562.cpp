#include <bits/stdc++.h>
#define re return
#define ull unsigned long long
#define ll long long
#define ld long double
#define mid (l+r)/2
#define f first
#define s second
#define oo 1e9
#define pi acos(-1)
#define OO 4e18
#define EPS 1e-12
#define FX(n) fixed<<setprecision(n)
#define mm(o,k) memset(o,k,sizeof o)
#define Hossam_Yehia ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int n,k,arr[100005][6],x;
set<vector<int> >st;
vector<int> v;
map<vector<int>,int> mp;
bool valid(){
    for(int j=0;j<k;++j){
        int cnt=0;
        for(auto i:v)
            cnt+=arr[i][j];
        if(cnt==2)re false;
    }
    re true;
}
void bt(int i,int t){
    if(!t){
        if(valid())exit(puts("YES"));
        re ;
    }
    if(i==n)re;
    bt(i+1,t);
    v.push_back(i);
    bt(i+1,t-1);
    v.pop_back();
}
int main(){
    Hossam_Yehia;
    cin >> n >> k;
    for(int i=0;i<n;++i){
        vector<int> temp;
        for(int j=0;j<k;++j){
            cin >> x;
            temp.push_back(x);
        }
        st.insert(temp);
        mp[temp]++;
    }
    int idx=0,idx2;
    for(auto i:st){
        idx2=0;
        for(auto j:i){
            arr[idx][idx2]=j;
            idx2++;
        }
        ++idx;
    }
    vector<int>temp;
    for(int i=0;i<k;++i)temp.push_back(0);
    if(mp[temp])exit(puts("YES"));
    n=st.size();
    bt(0,2);
    cout<<"NO";
    re 0;
}
