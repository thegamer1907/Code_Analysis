#include <bits/stdc++.h>

using namespace std;

#define WAIT cout << flush,system("pause");
#define TRUE 1
#define FALSE 0

typedef pair<int, int> ii;
typedef vector<int> vi; 
typedef long long ll;
typedef vector< ii > vii; 
typedef pair<int , pair<int , int> > tri;

#define F first
#define S second

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,k;
	cin >> n >> k;
	
	int t = 240 -k;
	int p = 0;
	int i = 1;
	
	while(p < n){
		t -= (5*i);
		if(t < 0){
			cout << p << endl;
			return 0;
		} 
		
		i++;
		p++;
	}
	
	cout << p << endl;
	
//	WAIT
}





