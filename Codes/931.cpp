#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define ipair pair<int,int>
#define mp make_pair
#define trace1(a) cout<<a<<endl;
#define trace3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl;
#define trace2(a,b) cout<<a<<" "<<b<<endl;
#define trace4(a,b,c,d) cout<<a<<" "<< b <<" "<<c<<" "<<d<<endl; 
bool compare(ll a,ll b){
	return (a<b);
}
string s;
bool checkdiameter(int mid,int n,int k){
	int suma=0,sumb=0;
	for(int i=0;i<mid;i++){
		if(s[i]=='a') suma+=1;
		else sumb+=1;
	}
	if(sumb<=k || suma<=k) return true;
	for(int i=mid;i<n;i++){
		if(s[i-mid]=='a') suma-=1;
		else sumb-=1;

		if(s[i]=='a')suma+=1;
		else sumb+=1;

		if(sumb<=k || suma<=k) return true;
	}
	return false;

}
int main(){
	int n,k;
	cin>>n>>k;
	cin>>s;
	int start=0,end=n+1,mid;
	while(end-start>1){
		mid=(end+start)/2;
		if(checkdiameter(mid,n,k)) start=mid;
		else end=mid;
	}
	cout<<start<<endl;

}