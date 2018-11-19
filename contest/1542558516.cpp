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
int n,k,x;
set<vector<int> >st;
vector<vector<int> > v;
map<vector<int>,int> mp;
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
    vector<int>temp;
    for(int i=0;i<k;++i)temp.push_back(0);
    if(mp[temp])exit(puts("YES"));
    for(auto i:st)v.push_back(i);
    n=st.size();
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            bool done=true;
            for(int jj=0;jj<k;++jj)
                if(v[i][jj]&&v[j][jj]){done=false;break;}
            if(done)exit(puts("YES"));
        }
    }
    cout<<"NO";
    re 0;
}