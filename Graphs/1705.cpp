#include<iostream>
#include<bits/stdc++.h>
#define fr(i,x,n) for(int i=x;i<n;i++)
#define frr(i,x,n) for(int i=x;i>=n;i--)
using namespace std;
void Doaa()
{
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
int n,t;
vector<int>v(100000);
bool dfs(int x)
{
	if(x>t)
		return false;
	if(x==t)
		return true;
	return dfs(x+v[x]);
}

int main(){
    Doaa();
cin>>n>>t;
	fr(i,1,n)
	cin>>v[i];
	if(dfs(1))
	cout<<"YES" <<endl;
	else
    cout<< "NO"<<endl; ;
return 0;
}



