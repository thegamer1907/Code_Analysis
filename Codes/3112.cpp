#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < int(n); i++)
#define FOREACH(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); i++)
#define SIZE(v) ((int)(v).size())
#define pb push_back
#define mp make_pair
#define st first
#define nd second
#define ll long long
#define pii pair<int, int>

const int MAX = 100100;
int a[MAX], ound[MAX];

int main(){
	int n; scanf("%d", &n);
	int id = 0;
	REP(i, n){
		scanf("%d", a + i);
		a[i] -= i;
		a[i] = max(a[i], 0);
		ound[i] = a[i]/n + (a[i]%n == 0 ? 0 : 1);
		if(ound[i] < ound[id]) id = i;
	}
	printf("%d\n", id + 1);
}	