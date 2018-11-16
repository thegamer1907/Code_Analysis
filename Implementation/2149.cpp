#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cmath>
#define lap(i,n) for(int i = 0;i < n;i++)
#define lap1(i,j,n) for(int i = j;i < n;i++)
#define lap2(i,n,j) for(int i = n;i >= j;i--) 
typedef long long ll;
using namespace std;

string itoa (int n){
	string s;
	while (n > 0){
		char c = (n%10) + 48;
		n /= 10;
		s += c;
	}
	lap (i,s.size()/2) swap(s[i],s[s.size()-1-i]);
	return s;
}
int atoi (string s){
	int a = 0,mu = 0,h = s.size();
	while (h > 0){
		a += (s[h-1]-48) * pow(10,mu);
		mu++;
		h--;
	}
	return a;
}

int main() {
	//freopen("input.txt","r",stdin);
	int n,dem = 0,dem1 = 0,dem2 = 0;
	cin >> n;
	lap (_,n){
		int a,b,c;
		cin >> a >> b >> c;
		dem += a;
		dem1 += b;
		dem2 == c;
		
	}
	if (dem == 0 && dem1 == 0 && dem2 == 0) cout <<"YES";
	else cout << "NO";
	return 0;
}