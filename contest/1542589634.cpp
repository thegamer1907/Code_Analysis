#include <bits/stdc++.h>
using namespace std;

#define gc getchar 
#define pc putchar
#define fRead	freopen("input.txt","r",stdin) 
#define fWrite	freopen ("output.txt","w",stdout)
#define LL              long long
#define PI              acos(-1.0)
#define pb              push_back
#define pii             pair<int,int>
#define pLL             pair<LL,LL>
#define f              	first
#define s              	second
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0)
#define vi              vector <int>
#define vL              vector <LL>

#define scani2(a,b) scani(a) , scani(b)
#define scani3(a,b,c) scani(a), scani(b), scani(c)
#define scani4(a,b,c,d) scani(a), scani(b), scani(c), scani(d)
#define scani5(a,b,c,d,e) scani(a), scani(b), scani(c), scani(d) , scani(e)
template <typename T> T scani(T &n){n = 0;bool negative = false;char c = gc();while( c < '0' || c > '9'){if(c == '-') negative = true;c = gc();}while(c >= '0' && c <= '9'){n = n*10 + c-48;c = gc();}if(negative) n = ~(n-1);return n;}
template <typename T> void write(T n,int type = true){if(n<0) {pc('-');n = -n;}if(!n) {pc('0');if(type==32) pc(' '); else if(type) pc('\n'); return;}char buff[22];int len = 0;while(n) buff[len++] = n%10+48,n/=10;for(int i=len-1;i>=0;i--) pc(buff[i]);if(type==32) pc(' '); else if(type) pc('\n');}
int scans(char *a){int i=0;char c = 0;while(c < 33) c = gc();while(c > 33){a[i++] = c;c = gc();}a[i] = 0;return i;}
const int MOD = 1e9 + 7;


int main() {
	char s[3],in[3];
	scans(s);
	int n; scani(n);
	bool f=0,sb=0,pos = 0;
	for(unsigned i = 0; i < n; ++i) {
		scans(in);

		if(in[1] == s[0]){
			f=1;
		}

		if(in[0] == s[1]){
			sb=1;
		}

		if( (sb && f) || (in[0] == s[0] & in[1] == s[1]) ) {
			pos = 1;
		}
	}

	return printf(pos?"YES\n":"NO\n"),0;
}