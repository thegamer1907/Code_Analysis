#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
string p, s[1001];

int main(){
	cin >> p >> n;
	for(int i=1;i<=n;i++)
		cin >> s[i];
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			string a = s[i]+s[j];
			string b = s[j]+s[i];
			if(a.find(p)!=-1 || b.find(p)!=-1){
				cout << "YES";
				return 0;
			}	
		}
	}
	
	cout << "NO";
	
return 0;
}