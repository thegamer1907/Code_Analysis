/*
	Baymyrat_turkmen
	language : C++
	date : 02.10.2018
*/

#include <bits/stdc++.h>

#define all(x)  x.begin(),x.end()
#define INF 1000000007
#define ll long long
#define N 100009

using namespace std;
int n,m,v[N],arr[N];
map<int,int>M;
vector<int>v2;
int main(){

	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
		cin>>v[i];	
		
	for(int i=n;i>=1;i--){
		M[v[i]]++;
		arr[i]=M.size();		
	}	
	
	for(int i=1;i<=m;i++){
		int a;
		cin>>a;
		v2.push_back(arr[a]);
	}
	
	for(auto i : v2)
		cout<<i<<"\n";

}
