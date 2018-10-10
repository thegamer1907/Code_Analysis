#include <iostream>

using namespace std;
long long int n,m,k;
long long int nb_elements_in_table_strictly_less_than_mid(long long int mid){
    long long int result = 0;
    for(long long int i=1;i<=min(mid-1,n);i++)
        result+=min((mid-1)/i,m);
    return result;
}
int main() {
	cin>>n>>m>>k;
	long long int nn = n;
	n=max(n,m);
	m=min(nn,m);
	
	long long int l=1,r=n*m;
	while(l<=r){
	    long long int mid = (l+r)/2;
	    if(nb_elements_in_table_strictly_less_than_mid(mid)<k)l=mid+1;
	    else r=mid-1;
	}
	cout<<l-1<<endl;
	
}
