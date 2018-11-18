#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,k; cin>>n>>k;
	bool arr[16];
	int a;

	memset(arr,0,sizeof arr);

	while(n--){
		int  p= 0;
		for(int i =0 ;i <k;i++){
			cin>>a;
			p = 2*p + a;
		}
		arr[p]=true;
	}

	bool pos=false;
	for(int i= 0 ;i < 16 ;i++){
		for(int j=i+1;j < 16 ;j++ ){
			if( arr[i] && arr[j] && !(i&j) ){
				pos=true;
			}
		}
	}

	if(pos || arr[0]) cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}