#include <bits/stdc++.h>
using namespace std;
char mm[3];
char a[103][3];
int n;
bool flag=0;
int main(){
	cin>>mm[1]>>mm[2];
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i][1]>>a[i][2];
    	if(a[i][1]==mm[1] && a[i][2]==mm[2]){
    		cout<<"YES"<<endl;
    		return 0;
		} 
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][2]==mm[1] && a[j][1]==mm[2]){
				cout<<"YES"<<endl;
				flag=1;
				return 0;
			}
		}
	}
	if(!flag){
		cout<<"NO"<<endl;
	}
	return 0;
}