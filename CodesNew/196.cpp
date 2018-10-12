#include <bits/stdc++.h>
using namespace std;
#define ll long long
int books[100005],books2[1000005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
        {
            cin>>books[i];
            books2[i]=books2[i-1]+books[i];
        }
    int right=0,ans=0;
    for(int i=1;i<=n;++i)
    {
        while(books2[i]-books2[right]>m)
        {
            right++;
            }

        ans=max(ans,i-right);
    }
cout<<ans;
}


