#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector< pair<long long int,long long int> > A;

//A[0].first > A[1].first

long long int solven2(int n, int d){

	long long int res=0;
	
	for(int i=0; i<n; i++){
		long long int suma=0;
		for(int j=0; j<n ; j++){
			if( A[j].first>=A[i].first && A[j].first<A[i].first+d ) suma+=A[j].second;
		}
		//cout<<"suma "<<suma<<endl;
		res = max(res,suma);
	}
	
	return res;
}

long long int solven(int n, int d ){
	
	long long int res=0;
	long long int sumaant=0;
	int pos=-1;
	
	for(int i=0; i<n ;i++){
	    
	    if(i>0) sumaant-= A[i-1].second;		
	    
	    while( pos+1<n && A[pos+1].first < A[i].first+d ){
	    	sumaant+=A[pos+1].second;
	    	pos++;
		}
		//cout<<"primer elemento "<<A[i].first<<" -> suma "<<sumaant<<endl;
	    res = max(res,sumaant);			
	}
	
	return res;
}

int main() {
	
	int n,d;
	long long int a,b;
	
	cin>>n>>d;
	
	for(int i=0;i<n;i++){
		cin>>a>>b;
		A.push_back(make_pair(a,b));
	}
	
	sort( A.begin(), A.end() );
	
	cout<<solven(n,d)<<endl;		
	
	
	return 0;
}

