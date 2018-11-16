#include <iostream>
#include <map>
#include <vector>
#include <cstring>

using namespace std;
#define ll long long
#define MAX 1000010

int main() {
    int n,m; cin>>n>>m;
    int a[n], a2[m];
    map <int, int> hash;
    int ans[n];
    memset(ans, 0, sizeof(ans));
    int tot=0;
    for(int i=0; i<n; i++) {cin>>a[i];if(hash[a[i]]==0) tot++; hash[a[i]]++;}
    for(int i=0; i<n; i++)
    {
        ans[i]= tot;
        hash[a[i]]--; if(hash[a[i]]==0) tot--;
        //cout<<ans[i];
    }
    for(int i=0; i<m; i++) { cin>>a2[i]; cout<<ans[a2[i]-1]<<endl;}
    return 0;
}