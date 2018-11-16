#include<bits/stdc++.h>
#define inf 68308930869
#define sc(a) scanf("%d",&a)
#define scc(a,b) scanf("%d %d",&a,&b)
#define sccc(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf(a) printf("%d",a)
#define pff(a,b) printf("%d %d",a,b)
#define pfff(a,b,c) printf("%d %d %d",a,b,c)
#define pb(a) push_back(a)
#define em empty()
#define fr front()
#define cl clear()
#define sz size()
#define fri(b) freopen(b,"r",stdin)
#define fro(b) freopen(b,"w",stdout)
using namespace std;

int main(){
	int k,d;
	char temp;
	cin>>k>>d;
	string arr;
	cin>>arr;
	for(int i=0;i<d;i++){
		for(int j=0;j<k-1;j++){
			if(arr[j]=='B' && arr[j+1]=='G'){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				j++;	
			}
		}
	}
	cout<<arr;
	
	return 0;
}