#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ios ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void swapval(char *a,char *b);
int main()
{
	ios;
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--)
	{
		bool ans=true;
		int i=0;
		while(i<n-1)
		{
			if(s[i]=='B' && s[i+1]=='G')
			{
				swapval(&s[i],&s[i+1]);
				ans=false;
				i=i+2;
			}
			else
				i++;
		}
		if(ans)
		{
			cout<<s<<endl;
			return 0;
		}
	}
	cout<<s<<endl;
	return 0;
}

void swapval(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}