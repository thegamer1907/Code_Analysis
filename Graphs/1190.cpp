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
	int arr[30013];
	int d;
	cin>>d;
	int ist;
	cin>>ist;
	int tut[d+123];
	int j=0;
	int i;
	for(i=1;i<d;i++){
		scanf("%d",&arr[i]);
	}
	i=1;
	while(i<d){
		tut[j]=i;
		i+=arr[i];
		j++;
	}
	if(arr[i-1]==1 && i==d && ist==d || arr[i-2]==1 && i==d && ist ==d){
		printf("YES");
		return 0;
	}
	for(int p=0;p<=j;p++){
		if(tut[p]==ist){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	
	return 0;
}