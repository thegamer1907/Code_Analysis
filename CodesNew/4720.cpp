#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> size;
int used[101234];

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin>>n;
	for(int i=0; i<n;i++){
		int s;
		cin>>s;
		size.push_back(s);
	}
	sort(size.begin(),size.end());
	
	int pj = n/2;
	int pi = 0;
	int ans = n;
	for(pi,pj; pi < n/2 && pj < n; ){
		if(2*size[pi] <= size[pj]){
			ans--; pi++;
		}
		pj++;

	}	

	cout<<ans<<endl;
	return 0;
}
