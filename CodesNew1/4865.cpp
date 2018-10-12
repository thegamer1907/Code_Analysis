#include<iostream>
#include<cstring>
using namespace std;
char a[1000000];
char b[1000000];
int c[1000000],de[1000000];
int d1,d2;
int check(int mid){
	for(int i=1;i<=mid;i++){
		de[c[i]]=0;
	}
	for(int i=mid+1;i<=d1;i++){
		de[c[i]]=1;
	}
	int j=1;
	for(int i=1;i<=d1&&j<=d2;i++){
		if(de[i]&&a[i]==b[j]){
			j++;
		}
	}
	if(j==d2+1)
		return 1;
	else 
		return 0;
	
}
int main(){
	cin>>a+1;
	cin>>b+1;
	d1=strlen(a+1);
	d2=strlen(b+1);
//	cout<<d1<<" "<<d2<<endl;
	for(int i=1;i<=d1;i++){
		cin>>c[i];
	}
	int l,r;
	r=d1;l=0;
	while(l<r){
        int mid=(l+r+1)/2;
        if(check(mid))
            l=mid;
        else 
			r=mid-1;
//			cout<<mid<<endl;
    }
    cout<<l;
}