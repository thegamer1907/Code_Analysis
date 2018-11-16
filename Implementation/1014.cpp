#include <iostream>
using namespace std;

int main() {
	int n,t,i;
	cin>>n>>t;
	char c[101];
    for(i=0;i<n;i++){
        cin>>c[i];
    }
    c[i]='\0';
	for( i=1;i<=t;i++){
	    for(int j=0;c[j]!='\0';j++){
	        if(j<n&&c[j]=='B'&&c[j+1]=='G'){
	            char t=c[j];
	            c[j]=c[j+1];
	            c[j+1]=t;
	            j++;
	        }
	    }
	}
	cout<<c;
	return 0;
}