#include <bits/stdc++.h>
using namespace std;

int main() {
int n, first=0, loccount=0, glocount=-1, count1=0, sum=0;
cin>>n;
while(n--){
	int a;
	cin>>a;
	if(a==1){
		count1++;
		if(loccount>0)
		loccount--;
	}
	else{
	loccount++;
	glocount = max(loccount, glocount);
	}
}

cout<<count1+glocount<<endl;
}
