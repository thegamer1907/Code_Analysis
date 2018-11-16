#include <bits/stdc++.h>
#define llu long long unsigned
#define lld long long int
#define ii pair<int, int>
#define x first
#define y second
#define pb(x) push_back(x)
#define go(i,n) for (int i = 0; i < (int)n; i++)
#define vi vector <int>
#define vii vector <ii>
#define INF 0x3f3f3f3f
#define ff first
#define ss second
#define dd pair<double, double>
#define ms(v, x) memset(v, x, sizeof(v))
#define MAXN 100100
using namespace std;

#define MAX_N 100010

char T[MAX_N], P[MAX_N]; // T = text, P = pattern
int b[MAX_N], n, m; // b = back table, n = length of T, m = length of P

vi AB;
vi BA;

lld bit[MAXN];


void update (int i, int val){
	for (; i <= MAXN; i += (i&-i))bit[i] += val;

}

lld query (int i){
	if (i <= 0) return 0;
	lld ans = 0;
	for (; i; i -= (i&-i)) ans += bit[i];
	return ans;
}


void kmpPreprocess(string P) { // call this before calling kmpSearch()
	m = P.size();
  int i = 0, j = -1; b[0] = -1; // starting values
  while (i < m) { // pre-process the pattern string P
    while (j >= 0 && P[i] != P[j]) j = b[j]; // if different, reset j using b
    i++; j++; // if same, advance both pointers
    b[i] = j; // observe i = 8, 9, 10, 11, 12 with j = 0, 1, 2, 3, 4
} }           // in the example of P = "SEVENTY SEVEN" above

void kmpSearch(string T, string P, bool f) { // this is similar as kmpPreprocess(), but on string T
	int i = 0, j = 0; // starting values
	n = T.size(); m = P.size();
	while (i < n) { // search through string T
	    while (j >= 0 && T[i] != P[j]){ j = b[j]; } // if different, reset j using b
	    i++; j++; // if same, advance both pointers
	    if (j == m) { // a match found when j == m
	    	//printf("j = %d\n",j );
	      //printf("P is found at index %d in T\n", i - j);
	      if (f) AB.pb(i-j);
	      else BA.pb(i-j);
	      j = b[j]; // prepare j for the next possible match
	      //return true;
		} 
	}
	//return false; 
}


string s;
int main (){
	cin >> s;
	
	kmpPreprocess("AB");
	kmpSearch(s, "AB", true);
	kmpPreprocess("BA");
	kmpSearch(s, "BA", false);
	
	if(!AB.size() || !BA.size()){
		printf("NO\n");
		return 0;
	}
	/*
	for (auto x: AB) cout << x << " ";
	printf("\n");
	for (auto x: BA) cout << x << " ";
	printf("\n");
	*/
	for (auto x: BA) update(x+1, 1);
	
	
	go(i,AB.size()){
		//if (AB[i]+2 < BA[0]) continue;
		if (query(AB[i]-2+1) || (query(MAXN-100)-query(AB[i]+2))){
			//cout << query(AB[i]-2+1) << " " << (query(MAXN-100)-query(AB[i]+2+1)) << endl;
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
