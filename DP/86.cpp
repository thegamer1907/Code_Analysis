#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,i,j,numb[101],numg[101],m,tr=0;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&numb[i]);
	}
	sort (numb,numb+n);

	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&numg[i]);
	}
	sort (numg,numg+m);
	for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            if (abs(numb[i]-numg[j])<=1 && numg[j]!=0){
                tr++;
                numg[j]=0;
                break;
            }
        }
	}
	printf("%d\n",tr);

	return 0;
}