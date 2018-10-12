#include <iostream>
#include <algorithm>

using namespace std;\
int ceil( int x ,  int y){
	if(x%y==0)
	return x/y;
	return x/y+1;
	
}
int main(){
	
	int n , m , sum=0 ;
	int a[110];
	cin >> n >> m ; 
	for(int i=1 ; i<=n ;i++){
		cin >> a[i]; 
		sum+=a[i];
		
	}
	sort(a+1 , a+n+1);
	int mx=a[n];
	int mn;
	if((mx*n)-sum>m)
	mn=mx;
	
	else{
		int k=m-((mx*n)-sum);
		mn=(mx+ceil(k , n));
		
	}
	mx+=m;
	cout << mn << " " << mx;
}
