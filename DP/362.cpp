#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int b,g,x(0);
	cin>>b;
	int bi[b];
	for(int i=0;i<b;i++){
		cin>>bi[i];	
	}
	cin>>g;
	int gi[g];
	for(int i=0;i<g;i++){
		cin>>gi[i];
	}
	sort(bi,bi+b);
	sort(gi,gi+g);
	for(int i=0;i<b;i++){
		for(int j=0;j<g;j++){
		if(bi[i]==gi[j] || abs(bi[i]-gi[j])==1){
			x++;
			for(int k=j+1;k<g;k++){
				gi[k-1]=gi[k];
			}
			g--;
			break ;
		}
			
		}
	}
cout<<x;	
return 0;
}
