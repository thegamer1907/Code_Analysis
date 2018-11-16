#include<iostream>
using namespace std;
int main(){

	int n,t;
	cin>>n>>t;
	int a[n-1];
	int i,f=0;

	for(i=0;i<n-1;i++)
		cin>>a[i];
i=1;
while(i<=n){
	if(i==t){
		f=1;
		break;
	}
	else if(i>t)
		break;
	else
		i+=a[i-1];


    }
    if(f==1)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
	return 0;

}