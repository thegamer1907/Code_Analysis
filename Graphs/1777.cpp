#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false)
#define FOR(i,a,b) for (int i = (a); i < (b) ; i++)
#define	all(x) x.begin(),x.end()

int ans = 0;

int n; string st,st1,st2;
 
int A[30001],B[31];

//set <char> s;

int main(){
	
	FIO;
	int t;
	cin >> n >> t;
	FOR (i,1,n){
		cin >> A[i];
	}
	FOR (i,1,n){
		if (i==t){
			puts("YES");
			return 0;
		}
		if (i>t){
			puts("NO");
			return 0;
		}
		i = A[i] + i;
		if (i==t){
			puts("YES");
			return 0;
		}
		if (i>t){
			puts("NO");
			return 0;
		}
		i -= 1;
	}
	puts("NO");
//	cout << ans;
	return 0;
}
