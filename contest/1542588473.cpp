#include<bits/stdc++.h>
using namespace std;
int main(){
//	ifstream cin("INPUT.txt");
	string pass,rev="  ";
	cin>>pass;
	rev[0]=pass[1];
	rev[1]=pass[0];
	int n;
	cin>>n;
	vector<string> arr(n);
	for(int a=0;a<n;a++)
		cin>>arr[a];
	for(int a=0;a<n;a++)
		if(arr[a]==pass || arr[a] == rev){
			cout<<"YES\n";
			return 0;
		}
	for(int a=0;a<n;a++){
		for(int b=a+1;b<n;b++){
			string temp="  ";
			temp[0]=arr[a][1];
			temp[1]=arr[b][0];
			if(temp==pass){
				cout<<"YES\n";
				return 0;
			}
			temp[0]=arr[b][1];
			temp[1]=arr[a][0];
			if(temp==pass){
				cout<<"YES\n";
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}