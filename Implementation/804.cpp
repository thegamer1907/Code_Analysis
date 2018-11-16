#include <iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
string queue;
int t,j=50,k=50,n;
char c[150];
int main(){
	cin>>n>>t;
	cin>>queue;
	for(int j=1; j<=t; j++){
		for(int i=0; i<n; i++){
				if(queue[i]=='B' && queue[i+1]=='G' && i+1 <n){
					 swap(queue[i],queue[i+1]);
					 i++;
				}
		}
	}
	cout<<queue;
	
}