#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int n,m;
int a[102];

int main(){
	cin>>n>>m;
	if(n==1){
		cin>>a[1];
		cout<<a[1]+m<<" "<<a[1]+m<<endl;
		return 0;
	}
	int sum=m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
		sum+=a[i];
	}
    int cut=sum/n;
    if(sum%n!=0) cut++;
    if(cut<a[n]) cut=a[n];
    sort(a+1,a+n+1);
    if(cut<a[n]) cut=a[n];
    cout<<cut<<" "<<a[n]+m<<endl;
    return 0;
}