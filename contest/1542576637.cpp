#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ans,temp[105];
    int n,flag=0;
    cin>>ans>>n;
    for(int i=1;i<=n;i++) cin>>temp[i];
    if(n==1) temp[++n]=temp[1];
    for(int i=1;i<=n;i++) if(ans==temp[i]) flag=1;
    for(int i=1;i<=n;i++) {
        if(ans[1]==temp[i][0]) {
            for(int j=1;j<=n;j++) {
                if(ans[0]==temp[j][1]) {
                    flag=1;
                }
            }
        }
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
