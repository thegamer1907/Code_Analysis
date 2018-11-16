#include <bits/stdc++.h>

#define Read()            freopen("in.txt", "r", stdin)
#define Write()           freopen("out.txt", "w", stdout)
#define min3(a, b, c)     min(a, min(b, c))
#define max3(a, b, c)     max(a, max(b, c))
#define TC(i, a, b)       for(int i = a; i<=b; i++)
#define FOR(i, a, b)      for(int i = a; i<b; i++)
#define ROF(i, a, b)      for(int i = a; i>=b; i--)
#define MEM(a, x)         memset(a, x, sizeof(a))
#define SQR(x)            ((x)*(x))
#define valid(x, s, e)    (x>=s && x<=e)
#define sz(a)             int((a).size())
#define all(c)            (c).begin(),(c).end()
#define tr(c,i)           for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x)      ((c).find(x) != (c).end())
#define cpresent(c,x)     (find(all(c),x) != (c).end())
#define pb                push_back
#define MAX               1000000000
#define sf             	  scanf
#define pf 	              printf
#define ll 				  long long
#define ull               unsigned long long

using namespace std;

int ar[101];
int main(){
  #ifdef dx
		Read();
		Write();
  #endif

    int n, ct = 0, sum = 0, mx = 0, ans = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
    	scanf("%d", &ar[i]);
    	sum += ar[i];
    } 

    for(int i = 0; i < n; i++){
    	ct = sum;
    	for(int j = i; j < n; j++){
    		if(ar[j]) ct--;
    		else ct++;
    		ans = max(ans, ct);
    	}
    }

    printf("%d\n", ans);
	
	return 0;
}


