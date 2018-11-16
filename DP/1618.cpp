/*
  ***
  0.0
  *-*
 * * *
*  *  *
*  *  *
   *
   *
  * *
 *   *
 *   *
 	   	  		*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define F first
#define S second
// set <int> :: iterator it = x.begin(); it != x.end(); it ++
using namespace std;
ll  sum,num,maxi=-10e9,maxn=-10e9,mini=10e9,minn=10e9;string n;vector<ll>q,w;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie();	cout.tie();
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin>>n;
	for(int i = 0;i < n.size();i++){
		if(n[i]=='A'&&n[i+1]=='B'){
			q.pb(i);
		}
		else if(n[i]=='B'&&n[i+1]=='A'){
			w.pb(i);
		}
	}
	if(w.size()==0||q.size()==0){
		cout<<"NO";
		return 0;
	}
	if(q[0]<w[w.size()-1]-1||q[q.size()-1]-1>w[0]){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}

