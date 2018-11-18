#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,n) for(int i = a; i < n;i++)
#define FORR(i,a,n) for(int i = a; i >n;i--)
#define ri(x) scanf("%d",&x)
#define rii(x,y) ri(x),ri(y)
#define mp make_pair
#define pb push_back
#define S second
#define F first

typedef long long ll;
char s[3], w[100][3];
int main(){
	int n;
	scanf("%s",s);
	ri(n);
	FOR(i,0,n){
		scanf("%s",w[i]);
	}
	FOR(i,0,n)
	{
		if(strcmp(w[i],s)==0)
		{
			printf("YES\n");
			return 0;
		}
		FOR(j,0,n)
		{
			if(w[i][1]==s[0]&&w[j][0]==s[1])
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}