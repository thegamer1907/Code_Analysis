#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(v) v.begin(),v.end()
#define Max 1000001
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[3]={0};
	while(n--){
		int x, y,z;
		cin>>x>>y>>z;
		arr[0]+=x;
		arr[1]+=y;
		arr[2]+=z;
	}
	if(arr[0]==0 && arr[1]==0 && arr[2]==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}