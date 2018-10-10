#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef pair<int,int> pii;
#define endl '\n'
#define pb push_back
#define mkp make_pair
#define F first
#define S second
const int MAX_N=1e6+6;

int n;
char str[MAX_N];
int fail[MAX_N];
int cnt[MAX_N];
int maxlen;

void failure()
{
	for(int i=1,j=fail[0]=-1;i<n;i++)
	{
		while(j>=0&&str[j+1]!=str[i]) j=fail[j];
		if(str[j+1]==str[i]) j++;
		fail[i]=j;
		cnt[j]++;
	}
}

int main()
{
	scanf("%s",str);
	n=strlen(str);
	failure();
	maxlen=fail[n-1];
	if(maxlen==-1) puts("Just a legend");
	else if(cnt[maxlen]>=2) printf("%s\n",str+n-1-maxlen);
	else if(fail[maxlen]!=-1) printf("%s\n",str+n-1-fail[maxlen]);
	else puts("Just a legend");
	return 0;
}


























