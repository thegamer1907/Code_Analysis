#include <iostream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
#define ll long long int
#define loopn for(int i=1; i<n; i++)
#define loopm for(int i=1; i<=m; i++)
#define loopn0 for(int i=0; i<n; i++)
#define loopnij for(int i=j; i<n; i++)
#define loopnj0 for(int j=0; j<n; j++)
bool flag;
int r,l;
string k;
int a[100000];
int main(){
	cin>>k;
	int n= k.length();
	a[0]=1;
	loopn
		if(k[i]==k[i-1]) a[i]=a[i-1]+1;
		else a[i]=a[i-1];
	int m;
	cin>>m;
	loopm{
		cin>>l>>r; cout<<a[r-1]-a[l-1]<<endl;
	}
}