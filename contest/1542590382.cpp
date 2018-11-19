#include <bits/stdc++.h>
#define endl '\n'
#define forn(i, n) for(int i=0;i<n;i++)
#define lli long long int
#define pii pair<int,int>
#define fi first
#define se second
#define psi pair<int,pii>
#define pb push_back
#define vi vector<int>
#define vii vector< vi >

using namespace std;

const int MAXN = 1000001;

string cad[MAXN];

void AC() {
	cout<<"YES"<<endl;
	exit(0);
}

int inside(const string& A,const string& B) {
	forn(i, B.size()) {
		int j = 0;
		while(i + j < B.size() && j < A.size() && A[j] == B[i + j]) j++;
		if(j == A.size()) return 1;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string A, B;
	cin>>A;
	int n;
	cin>>n;
	forn(i, n)
		cin>>cad[i];
	
	forn(i, n)
		if(cad[i] == A) AC();
	
	forn(i, n)
	forn(j, n)
		if(inside(A, cad[i] + cad[j])) AC();
	
	cout<<"NO"<<endl;
	return 0;
}
