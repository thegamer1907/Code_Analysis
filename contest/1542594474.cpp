#include <bits/stdc++.h>
 
using namespace std;
#define go_baby_go ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define pb push_back
#define pp pop_back
#define f first
#define se second
#define ll long long
#define mp make_pair
const int N=100100;
const int mod=1e9+7;
string a,s[200],q;
int main(){
	go_baby_go
	int n,i,j,k;
	cin>>a>>n;
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			q=s[i]+s[j];
			for(k=0;k<q.size()-1;k++)
				if(q.substr(k,2)==a){
					cout<<"YES";
					return 0;
				}
		}
	}
	cout<<"NO";
	return 0;
} 