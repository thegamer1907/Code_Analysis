#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
const int N=1E6+5;
int n,ans;
char s1[N],s2[N];

int main()
{
  //  freopen("1.in","r",stdin);
    cin>>n;
    scanf("\n%s%s",s1,s2);
    for (int i=0;i<n;i++) if (s1[i]!=s2[i])
    {
        if (s1[i]==s2[i+1]&&s1[i+1]==s2[i])
        {
            ans++; i++;
        } else ans++;
    }
    cout<<ans<<endl;
}
