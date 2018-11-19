#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int n,i;
    cin>>n;
    string x;
    int ld=0,fd=0;
    int ex=0;
    for(i=0;i<n;i++){
    	cin>>x;
    	if(str==x){
    		ex=1;
    		break;
		}
		if(str[0]==x[1])
		   ld=1;
	    if(str[1]==x[0])
	       fd=1;
	}
	
	if(ex==0 && ld==1 && fd==1){
		cout<<"YES";
	}
	else if(ex==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
    return 0;
}
