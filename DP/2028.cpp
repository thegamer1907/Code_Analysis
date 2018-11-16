#include <iostream>

using namespace std;
const int maxn=(1e5)+10;
int a[maxn];
int dp[maxn];
bool mark[maxn];

int main()
{
    int m,n;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dp[n-1]=1;
    mark[a[n-1]]=1;
    for(int i=n-2;i>=0;i--){
        dp[i]=dp[i+1];
        if(mark[a[i]]==0)
            dp[i]++;
        mark[a[i]]=1;
    }
    int s[m];
    for(int i=0;i<m;i++){
        int tmp;
        cin>>tmp;
        tmp--;
        s[i]=tmp;
    }
    for(int i=0;i<m;i++){
        cout<<dp[s[i]]<<endl;
    }
    return 0;
}
