#include<bits/stdc++.h>

using namespace std;
int main(){
    int n, m, x;
    int a[100005];
    set <int> s;
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
        cin >>a [i];
    }
	for(int i = n;i >= 1; i--){
        s.insert(a[i]);
        a[i]=s.size();
	}
	for(int i = 0; i < m; i ++){
        cin >> x;
		cout << a[x]<<endl;
    }
}
