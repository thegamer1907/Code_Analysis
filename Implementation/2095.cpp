#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
#define mk make_pair
#define fi first
#define sec second
#define fori(i, a, b) for(int i = int(a); i < int(b); i++)
#define cc(x)	cout << #x << " = " << x << endl
#define ok		cout << "ok" << endl

typedef pair<int,int> ii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);
 
int f[4];

int main(){
    ios_base::sync_with_stdio(false);

    int n;
	cin >>n;
	
	fori(i,0,n) {
		fori(j,0,3) {
			int v;
			cin >>v;
			f[j] += v;
		}
	}

	bool ans = false;
	if(f[0] == 0 and f[1] == 0 and f[2] == 0) ans = true;
	cout <<(ans?"YES":"NO") <<endl;
	
    return 0;
}

