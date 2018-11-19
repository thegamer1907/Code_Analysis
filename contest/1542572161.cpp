#include<iostream>
#include<algorithm>
#include<cassert>
#include<cstring>
#include<string>
using namespace std;

#define dbg(x) cout << #x << " " << x << endl;
#define fi(a,b) for(int i=a;i<b;++i)
#define fj(a,b) for(int j=a;j<b;++j)
#define fdi(a,b) for(int i=a-1;i>=b;--i)
#define fdj(a,b) for(int j=a-1;j>=b;--j)
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;
///////////////////////

int const N = 123;

char s[N][N];
int n;
char t[N];
char ans[N];

string const YES = "YES";
string const NO = "NO";

void solve(){
	fi(0, n) if(strcmp(t, s[i]) == 0){
		strcat(ans, YES.c_str());
		return;
	}
	fi(0, n) fj(0, n){
		if(t[0] == s[i][1] && t[1] == s[j][0]){
			strcat(ans, YES.c_str());
			return;
		}
	}
	strcat(ans, NO.c_str());
}

int main(){
#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	scanf("%s",&t);
	scanf("%d",&n);
	fi(0,n) scanf("%s",&s[i]);

	solve();

	printf("%s\n",ans);

	return 0;
}