#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string pass;
int n;
int a[5];

int main(){
	cin>>pass;
	cin>>n;
	memset(a,0,sizeof(a));
	for(int i = 0;i<n;i++){
		string temp;
		cin>>temp;
		
		if(temp == pass){
		a[0]=1,a[1]=1;
		}
		if(temp[1]==pass[0])
			a[0] =1;
		if(temp[0] == pass[1])
			a[1]=1;
	}
	bool ans = false;
	if(a[0]==1&&a[1]==1)
		ans = true;
		
	if(ans)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
	return 0;
}