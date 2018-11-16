#include <iostream>
using namespace std;
int n,t; string s,ans;
int main() {
    cin>>n>>t>>s; ans = s;
    for (int i = 0;i < t;i++,s = ans) for (int j = 0;j < n-1;j++) if (s[j] == 'B' && s[j+1] == 'G') swap(ans[j],ans[j+1]);
    cout<<ans<<"\n";
    return 0;
}
