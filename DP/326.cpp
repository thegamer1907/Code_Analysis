#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,m,n,j,ans=0;
	int b[100],g[100];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	cin>>m;
	for(i=0;i<m;i++){
		cin>>g[i];
	}
	sort(b,b+n);
	sort(g,g+m);
	for(int i=0, j=0; i<n && j<m;){
            
			if(b[i]-g[j]==0||b[i]-g[j]==1||(b[i]-g[j])==-1) {
			ans=ans+1;   
		
			    i++;
                j++;
            }
            else if(b[i] > g[j]) {
		
                j++;}
              else {
			     
			   i++; }  
			             
        } 
			cout<<ans<<endl;   
    }
