#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int arr[100000];
int main(){
	int n, m;
	cin>>n>>m;
	if(n>=m){
		cout<<n-m<<endl;
		return 0;
	}
	queue <int> q;
	q.push(n);
	arr[n]=0;
	while(!q.empty()){
		int con = q.front();
		q.pop();
		int first = con*2;
		if(arr[first]==0 && first<20000){
			arr[first] = arr[con]+1;
			q.push(first);
		}
		int second = con-1;
		if(second >0 && arr[second]==0 && second <20000){
			q.push(second);
			arr[second] = arr[con]+1;
		}
	}
	cout<<arr[m]<<endl;
}