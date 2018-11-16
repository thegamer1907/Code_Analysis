#include <iostream>
using namespace std;


int arr[100005];
int main() {
int n;
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int l,r;
if(n==1)
cout<<1<<endl;
else
{
	l=0;r=1;
	int cnt=1;
	int ans=1;
	while(r<n)
	{
		if(arr[l]<arr[r])
		{
			cnt++;
			r++;
			l++;
		}
		else{
			ans=max(ans,cnt);
			l=r;
			r=r+1;
			cnt=1;
		}
	}
	ans=max(cnt,ans);
	cout<<ans<<endl;
		}
	}
