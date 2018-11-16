#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int r[30001],n,t;
int main(){
    cin>>n>>t;
    for(int i=1;i<n;i++) cin>>r[i];
    int i=1;
    while(i<t){
    	i+=r[i];
	}
    if(i==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}