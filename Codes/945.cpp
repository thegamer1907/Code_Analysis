#include<bits/stdc++.h>
using namespace std;
int N,K;
const int maxn=1e5+10;
char s[maxn];
int main()
{
    while(cin>>N>>K)
    {
        cin>>s;
        int l=0,r=0,ans=0;
        int cnt=0;
        while(l<N&&r<N)
        {
            while((s[r]=='a'||cnt<K)&&r<N)
            {
                if(s[r]!='a')
                    cnt++;
                r++;
            }
            ans=max(ans,r-l);
            while(s[l]=='a'&&l<=r)
                l++;
            l++;
            cnt-=1;
        }
        l=0,r=0,cnt=0;
        while(l<N&&r<N)
        {
            while((s[r]=='b'||cnt<K)&&r<N)
            {
                if(s[r]!='b')
                    cnt++;
                r++;
            }
            ans=max(ans,r-l);
            while(s[l]=='b'&&l<=r)
                l++;
            l++;
            cnt-=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
