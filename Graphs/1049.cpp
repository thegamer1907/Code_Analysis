#include<cstdio>
const int lim=1e6;
int n,m,arr[lim];
bool s(){
	for(int i=1;;){
		if(i==m)
			return true;
		else if(i>m || i>n)
			return false;
		i+=arr[i];		
	}
	
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=1;i<n;i++)
		scanf("%d",&arr[i]);
	if(s())
		printf("YES\n");
	else
		printf("NO\n");	
	return 0;
}