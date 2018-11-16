#include<iostream>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	char l[n];
	cin>>l;
    while(t>0){
    	for(int i=0;i+1<n;i++){
    		if(l[i]=='B'&&l[i+1]=='G'){
    			l[i]='G';
    			l[i+1]='B';
    			i++;
    			continue;
    		}
    	}
    	t--;
    }
    cout<<l;
	return 0;
}