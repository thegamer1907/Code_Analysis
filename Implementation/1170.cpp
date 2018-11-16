#include <bits/stdc++.h>
using namespace std;
#define MAX 60
bool primes[MAX];
vector<int> p;
int main() {
	int n, m;
	cin>>n>>m;
	string s;
	cin>>s;
	while (m>0){
	for(int i = 0; i < s.size()-1;) {
	    if(s[i] == 'B' && s[i+1] == 'G') {
	        swap(s[i], s[i+1]);
	        i+=2;
	    } else {
	        i++;
	    }
	}
	m--;
	}
	
	cout<<s<<endl;
}