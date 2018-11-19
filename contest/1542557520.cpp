#include <iostream>
#include <algorithm>
using namespace std; 
typedef long double ld; 
ld h,m,s,t1,t2; 
bool chk(ld x){
	return (x < min(t1,t2) || x > max(t1,t2)); 
}
int main(){
	cin >> h >> m >> s >> t1 >> t2; 
	m = 12*m/60.0;  
	s = 12*s/60.0; 
	if (s) m += 0.0001;  
	if (m) h += 0.0001; 
	if (chk(s) && chk(m) && chk(h)){
		cout << "YES" << endl;
		return 0; 
	}
	if (t1 > t2) swap(t1,t2); 
	if (t1 < s && t1 < m && t1 < h && t2 > s && t2 > m && t2 > h){
		cout << "YES" << endl; 
	}else{
		cout << "NO" << endl; 
	}
	return 0; 
}	