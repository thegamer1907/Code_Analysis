#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
	// your code goes here
	int n,s;
	
	cin>>n;
	int a[n];
	rep(i,n){
	    cin>>a[i];
	}
	cin>>s;
	int b[s];
	
	rep(i,s){
	    cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+s);
	int num=0;
	int i=n-1,j=s-1;
	while(i>=0&&j>=0){
	    if(a[i]==b[j]||a[i]-b[j]==1||a[i]-b[j]==-1){
	        num++;
	        i--;
	        j--;
	    }
	    else if(a[i]-b[j]>1)
	        i--;
	    else if(b[j]-a[i]>1)
	        j--;
	}
	cout<<num;
	return 0;
}
