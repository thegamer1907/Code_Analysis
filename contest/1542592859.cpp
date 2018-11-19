#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int>   vi;
typedef vector<long long> vll;
typedef vector<pair<int,int> > vii;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pq priority_queue
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
int inf = (1e9) + 7;

int main(){

	string pas;
	cin >> pas;
	set<char> st;
	st.insert(pas[0]);
	st.insert(pas[1]);
	int n;
	sf1(n);
	string aux;
	int f0 = 0;
	int f1 = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> aux;
		if(aux == pas)
		{
			printf("YES\n");
			return 0;
		}
		if(aux[0] == pas[1])
			f1 = 1;
		if(aux[1] == pas[0])
			f0 = 1;
	}
	if(f0 and f1)
		printf("YES\n");
	else
		printf("NO\n");
}