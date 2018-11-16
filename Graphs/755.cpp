#include<iostream>
using namespace std;

int main(){
	int n1,n2;
	cin>>n1;
	cin>>n2;
	char Tab[n1];
	cin>>Tab;
	for(int i=0;i<n2;i++){
		for(int j=0;j<n1-1;j++){
            if(Tab[j]=='B' && Tab[j+1]=='G'){
            	Tab[j]='G';
                Tab[j+1]='B';
                j++;
		}
	}
	}
	cout<<Tab;
}