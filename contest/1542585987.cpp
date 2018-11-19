#include <iostream>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	
	int h,m,s;
	cin>>h>>m>>s;
	int t1,t2;
	cin>>t1>>t2;
	s = s*3600;
	m = m*3600;
	h = h*5*3600;
	t1 = t1*5*3600;
	t2 = t2*5*3600;
	m = m+s/60;
	h = h+m/60;
	h = h%(3600*60);
	m = m%(3600*60);
	int gbchecked = 0;
	int mi = min(t1,t2);
	int ma = max(t1,t2);
	int check = 1;
	for(int i=mi;i<=ma;i++){
		if(i==h||i==m||i==s){
			check = 0;
		}
	}
	if(check==0){
		check = 1; 
		for(int i=ma;i<=(mi+3600*60);i++){
			int y = i%(3600*60);
			if(y==h||y==m||y==s){
				check = 0;
			}
		}
	}
	if(check==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	

	return 0;
}