// One day i will make you mine A...
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define Aloveg ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
const int mn = 1e6+5;

int main()
{
    Aloveg

    string a, c="AG"; cin>>a;
    int n; cin>>n; string g[n+1];
    bool love = 0;
    for(int i=0;i<n;i++){
    	cin>>g[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a == g[j] or (a[0]==g[j][1] and a[1]==g[j][0]) or (a[0]==g[i][1] and a[1]==g[j][0])){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
    
    return 0;
}


