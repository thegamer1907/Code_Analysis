#include <bits/stdc++.h>
#include <ext/rope>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#define ll long long
#define ld long double
#define endl "\n"


using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;

typedef tree<
        int,
        null_type,
        less<int>,
        rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set;

int dp[107][9];
int a[107];

stack<int >st;
void build(int i){
    int j=0;
    while(i>0){
        if(dp[i-1][j]==1){
            i--;
        }else{
            st.push(a[i]);
            bool c=1;
            for(int k=0;k<8;k++){
                int v=(k*10+ a[i])%8;
                if(v==j && dp[i-1][k]==1 ){
                     j=k;
                     c=0;
                     break;
                }
            }
            if(c)
                return;
            i--;
        }
    }
}



int main() {

    cin.tie(0);
    cin.sync_with_stdio(0);

    string s;
    cin>>s;
    int n=s.length();
    for(int i=1;i<=n;i++){
        a[i]=s[i-1]-'0';
    }

    memset(dp,0, sizeof(dp));

    for(int i=1;i<=n;i++){
        dp[i][a[i]%8]=1;
        for(int j=0;j<8;j++){
            if(dp[i-1][j]){
                dp[i][(j*10 + a[i])%8] = dp[i-1][j];
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    for(int i=1;i<=n;i++){
        if(dp[i][0]==1){
            cout<<"Yes"<<endl;
            build(i);
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
            return 0;
        }
    }
    cout<<"No"<<endl;





    return 0;
}
