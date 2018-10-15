#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#define endl '\n'
#define lson rt<<1,l,mid
#define rson rt<<1|1,mid+1,r
#define ll long long
#define INF 0x3f3f3f3f
const int N=500005;
using namespace std;

string s[N];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	cin>>s[i];
	for(int i=n-1;i>=1;i--)
	{
		int l=1;
		bool flag=0;
		while(l<s[i].length()&&l<s[i+1].length())
		{
			if(s[i][l]==s[i+1][l]){
				l++;
			}
			else if(s[i][l]<s[i+1][l]){
				flag=1;break;
			}
			else{
			//	l++;
			//	if(l<s[i].length()&&l<s[i+1].length())
				flag=1;
				s[i].erase(l);
				break;
			}
		}
		if(!flag&&s[i].length()>s[i+1].length()) s[i].erase(s[i+1].length());
	//	cout<<l<<' ';
	//	cout<<s[i]<<endl;
	}
	for(int i=1;i<=n;i++)cout<<s[i]<<endl;
	return 0;
}
