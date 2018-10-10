/*******************************\
   Name:    REAJUL HAQUE REAYZ  |
   School:  COMILLA UNIVERSITY  |
            CSE (5TH BATCH)     |
********************************/
#include<bits/stdc++.h>
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair < int , int > pii;
typedef pair < ll , ll > pll;
const ll MOD = 1000000007;
const int MAX = 100005;

int n, k, mat[26][MAX];
string s;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k>>s;
    for(int i=0; i<n; i++) mat[(s[i]-'a')][i]=1;
    for(int i=0; i<26; i++){
        for(int j=1; j<n; j++) mat[i][j]+=mat[i][j-1];
    }
    int ans=1;
    for(int i=0; i<n; i++){
        int id=0;
        int low=i, high=n-1, res=1;
        while(low<=high){
            int mid = (low+high)/2;
            int val = mat[id][mid]-mat[id][i];
            if(s[i]=='a') val++;
            int dis = mid-i+1;
            int tmp = dis-val;
            if(tmp>k) high=mid-1;
            else res=max(res,dis), low=mid+1;
        }
        ans = max(ans, res);
        id=1;
        low=i, high=n-1, res=1;
        while(low<=high){
            int mid = (low+high)/2;
            int val = mat[id][mid]-mat[id][i];
            if(s[i]=='b') val++;
            int dis = mid-i+1;
            int tmp = dis-val;
            if(tmp>k) high=mid-1;
            else res=max(res,dis), low=mid+1;
        }
        ans = max(ans, res);
    }
    cout<<ans<<endl;
	return 0;
}
