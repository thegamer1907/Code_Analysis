#include<cstring>
#include<string>
#include<iostream>
#include<cstdio>

using namespace std;

string a;
int n;
bool f=false,ff=false;
string c;

int main(){
	cin>>a;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		cin>>c;
		if(c==a)f=ff=true;
		if(c[0]==a[1])f=true;
		if(c[1]==a[0])ff=true;
	}
	if(f==true && ff==true)puts("YES");
	else puts("NO");
	
	return 0;
}