#include<bits/stdc++.h>
#define inf 68308930
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

int mut(int x){
	if(x<0){
		return -x;
	}
	return x;
}

int main(){
	int x,y;	
	cin>>x;	
	int arr1[x+13];
	for(int o=0;o<x;o++){
		scanf("%d",&arr1[o]);
	}
	cin>>y;
	int arr2[y+13];
	for(int o=0;o<y;o++){
		scanf("%d",&arr2[o]);
	}
	sort(arr1,arr1+x);
	sort(arr2,arr2+y);
	int es=0;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(mut(arr1[i]-arr2[j])<2){
				es++;
				arr2[j]=782939;
				break;
			}
			
		}
	}
	cout<<es;
	
		
	return 0;
}