#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,cnt=0,sc[55];
    scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	    scanf("%d",&sc[i]);
	for(int i=1;i<=n;i++){
		if(sc[i]&&sc[i]>=sc[k])
		    cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}