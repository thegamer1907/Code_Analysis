#include<iostream>
using namespace std;
char a[101];
int main(){
	int cnt=1;
	cin>>a;
	for( int i=1;a[i];i++){
		if( a[i]==a[i-1]){
			cnt++;
			if(cnt==7){
				cout<<"YES";
				return 0;
			}
			
		}else cnt =1;
		
		
		
	}
	cout<<"NO";
	
}