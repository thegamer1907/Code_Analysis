#include<bits/stdc++.h>
using namespace std;
int ncnt=0;
bool check(int k) { 
	int tot=0;
	while(k!=0) { 
		 tot+=k%10;
		 k/=10;
	} 
	if(tot==10) return true;
	return false; 
} 
int main() { 
	int k;
	cin>>k;
	int nw;
	for(int i=1;ncnt!=k;++i) { 
		if(check(i)) ncnt++;
		nw=i;
	} 
	printf("%d",nw);
} 