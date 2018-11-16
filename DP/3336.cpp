/*   You have lost, my dear   */
/*   Viva forever   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define mod 1000000007
using namespace std;
int n;
char c[1000002];
long long hashh[1000002],bs[1000002],len[1000002];
bool can(int len)
{
	long long searchHash=hashh[len];
	for(int i = len + 1; i <= n - 1; i++)
	{
		long long currHash = (hashh[i] - hashh[i - len] *bs[len] +mod *bs[len]) %mod;
		if(currHash == searchHash)
			return 1;
	}
	return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>c;
    n=strlen(c);
    for(int i=1;i<=n;++i)
        hashh[i]=(hashh[i-1]*26+c[i-1]-'a')%mod;
    bs[0]=1;
    for(int i=1;i<=n+1;++i)
        bs[i]=(bs[i-1]*26)%mod;
    int cnt=1;
	for(int i=1;i<=n;i++)
		if((hashh[n]-hashh[n-i]*bs[i]+mod*bs[i])%mod==hashh[i])
			len[cnt++]=i;
    int b=1;
    int e=cnt-1;
    int sol=-1;
    while(b<=e)
	{
		int mid=(b+e)/2;
		if(can(len[mid]))
		{
			sol=len[mid];
			b=mid+1;
		}
		else
            e=mid-1;
	}
    if(sol==-1)
        return cout<<"Just a legend",0;
    for(int i=0;i<sol;++i)
        cout<<c[i];
    return 0;
}
