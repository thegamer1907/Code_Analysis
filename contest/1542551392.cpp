#include<iostream>
using namespace std;
int main(){
	string a;int n,f=0,f1=0;
	cin>>a>>n;
	string arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(f==0&&arr[i].compare(a)==0)f=1;
	}
	if(f)printf("YES");
	else {
		for(int i=0;i<n&&(f==0||f1==0);i++){
			if(arr[i][0]==a[1])f=1;
			if(arr[i][1]==a[0])f1=1;
		}
		if(f&&f1)printf("YES");
		else printf("NO");
	}
}
