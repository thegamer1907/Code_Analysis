#include "iostream"
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	string k,p;
	cin>>k;
	for(int i=0;i<b;i++){
		p=k;
		for(int j=0;j<a-1;j++){
			if(p[j]=='B'&&p[j+1]=='G') swap(k[j],k[j+1]);
		}
	}
	cout<<k<<endl;
}