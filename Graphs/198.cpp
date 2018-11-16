#include<iostream>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    char c[n];
    for(int i=0;i<n;i++)cin>>c[i];
    
    for(int j = 0; j < k ; j++) {
    	for(int i = 0; i < n-1; i++) {
    		if(c[i]=='B' && c[i+1]=='G'){
    			c[i] = 'G';
    			c[i+1] = 'B';
    			i++;
    		}
    	}
    }
    
    for(int i=0;i<n;i++)cout<<c[i];
    cout<<endl;
    return 0;
}