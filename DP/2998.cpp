#include<bits/stdc++.h>
#define LLI long long int
#define heap priority_queue
#define MAXN int(2e6+5)
using namespace std;
LLI ans;
char s1[MAXN],s2[MAXN];
LLI N,s,mid;
int main() 
{
	cin>>N;
	cin>>s1>>s2;
	ans=0;
	for(int i=0;i<N;i++)
	{
		if(s1[i]!=s2[i])
		{
			if(i<N-1&&s1[i+1]!=s2[i+1]&&s1[i]!=s1[i+1])
              	i++;
        	ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}