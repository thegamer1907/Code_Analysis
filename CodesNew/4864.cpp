#include<iostream>
#include<cstring>
using namespace std;
char a[1000000];
char b[1000000];
int c[1000000],de[1000000];
int d1,d2;
int check(int mid){
	for(int i=0;i<mid;i++){
		de[c[i]-1]=0;
	}
	for(int i=mid;i<d1;i++){
		de[c[i]-1]=1;
	}
	int j=0;
	for(int i=0;i<d1&&j<d2;i++){
		if(de[i]&&a[i]==b[j]){
			j++;
		}
	}
	if(j==d2)
		return 1;
	else 
		return 0;
	
}
int main(){
	cin>>a;
	cin>>b;
	d1=strlen(a);
	d2=strlen(b);
//	cout<<d1<<" "<<d2<<endl;
	for(int i=0;i<d1;i++){
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