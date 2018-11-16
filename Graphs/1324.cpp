// template fera
#include <bits/stdc++.h>

#define true 1
#define false -1
#define inf 0x3f3f3f3f // numero grandão

#define ll long long

using namespace std;

typedef vector<int> vi; // vector int

typedef pair<int ,int> p_i; // pair int
typedef vector<p_i> v_p_i; // vector pair int
typedef vector<v_p_i> graph; // vector de vector pair int; (lista de adjacencia) 


int main (){

	ios :: sync_with_stdio(false);

	int nc,dc;
	vi v(100000);

	cin >> nc >> dc;
	dc--;

	for (int i = 0; i < nc-1; ++i){
		cin >> v[i];
	}

	for (int i = 0; i < nc;i+=v[i]){
		
		if(dc == i){
			cout << "YES" << endl;
			exit(0);
		}else if(i + v[i] >  dc){
			cout << "NO" << endl;
			exit(0);
		}

	}
	cout << "NO" << endl;


}
// 1537559812377
