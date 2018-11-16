#include <bits/stdc++.h>

using namespace std;
      
set <int> s;
int n, m, a[100005], b[100005];
int main(){
	cin >> n>> m;
	for(int i = 1;i <= n;++i){
		cin >> a[i];
  }
  for(int i = n;i >= 1;--i){
    s.insert(a[i]);
		a[i] = s.size();
	}
  for(int i = 1;i <= m;++i){
		cin >> b[i];
	}
	for(int i = 1;i <= m;++i){
		cout << a[b[i]]<< endl;
	}
	return 0;
}
