#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;

	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];

int pos=m-1;
if(ar[m-1]>0){
	
	while(ar[pos]==ar[m-1]&&pos<n)
		pos++;

	cout<<pos<<endl;

	
}
else{
	
	while(ar[pos]<=0&&pos>=0)
		pos--;

	cout<<pos+1<<endl;

}


	

}