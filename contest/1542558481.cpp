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
int main(){
    Hossam_Yehia;
    cin >> n >> k;
    for(int i=0;i<n;++i){
        vector<int> temp;
        for(int j=0;j<k;++j)
            cin >> x,temp.push_back(x);
        if(!*max_element(temp.begin(),temp.end()))
            exit(puts("YES"));
        st.insert(temp);
    }
    for(auto i:st)v.push_back(i);
    for(int i=0;i<st.size();++i)
        for(int j=i+1;j<st.size();++j){
            bool done=true;
            for(int jj=0;jj<k;++jj)
                if(v[i][jj]&&v[j][jj]){done=false;break;}
            if(done)exit(puts("YES"));
        }
    cout<<"NO";
    re 0;
}