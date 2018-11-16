#define CRT_SECURE_NO_WARNINGS
#define USE_MATHS_DEFINES
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

#define mp make_pair

typedef long double ld;
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int INF=1e9+9;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.emplace_back(i);
    }
    int ur=1;
    while(v.size()!=2){
        vector<int> v1;
        for(int i=0;i<v.size();i+=2){
            if(v[i]==a && v[i+1]==b || v[i]==b && v[i+1]==a){
                cout<<ur;
                return 0;
            }
            if(v[i]==a || v[i]==b){
                v1.emplace_back(v[i]);
            }
            else{
                v1.emplace_back(v[i+1]);
            }
        }
        v=v1;
		ur++;
    }
    cout<<"Final!";
}
