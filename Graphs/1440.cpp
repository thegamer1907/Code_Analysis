#include<bits//stdc++.h>
using namespace  std;
int main(){
	int n, m, i = 0;
	cin >> n >> m;
	int a[n - 1];
	
	vector <int> v;
		
	for(int i = 0; i < n - 1; i++){
		cin >> a[i];
	}
	
	int j;
	
	while(1){
	    j = i;
	    if(i >= n - 1)break;
	    v.push_back(i + 1);
	    i += a[i];
	}
        
        v.push_back(j + 1);
        
	for(i = 0; i < v.size(); i++){
	    if(v[i] > m) break;
		if(v[i] == m) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}   