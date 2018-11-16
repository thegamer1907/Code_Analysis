#include<iostream>
using namespace std;
int main(){
	int n , t;
	cin>>n>>t;
	int a[n+1];
	for(int i=1 ; i<n ; i++){
		cin>>a[i];
	}
	a[n] = 0;
	bool flag=false;
	int i=1;
	while(i<n)
	{
		if(i==t){
			flag = true;
			break;
		}
		i += a[i];
	}
	if(i==t)  flag = true;
	(flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;	
	return 0;
}