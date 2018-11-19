#include <bits/stdc++.h>

#define TRACE(x) cerr << #x << " " << x << endl
#define pb push_back
using namespace std;
typedef long long ll;
const int MaxN = 200;

string a[MaxN];
string pass;
int N;

int main(){
	cin>>pass;
	cin>>N;
bool ok = 0;
	for (int i = 0; i < N; i++) {
		cin>>a[i];
		if (a[i] == pass || (a[i][0] == pass[1] && a[i][1] == pass[0]))
			ok = 1;
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++){
				if (a[i][1] == pass[0] && a[j][0] == pass[1]) ok = 1;
	}	
	if (ok)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
