#include<stdio.h>
int b[30];
int main(){
	int n,k,i,j,cnt=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++){
		cnt=0;
		for(j=1;j<=k;j++){
			int xx;
			scanf("%d",&xx);
			cnt*=2;
			cnt+=xx;
		}
		b[cnt]=1;
	}
	if(b[0]==1) {printf("YES"); return 0;}
	if(k==2){
		if(b[1]==1 && b[2]==1) printf("YES"); else printf("NO");
	}
	else if(k==3){
		if(b[1]==1 && (b[2]==1 || b[4]==1 || b[6]==1) || b[2]==1 && (b[4]==1 || b[5]==1) || b[3]==1 && b[4]==1) printf("YES"); else printf("NO");
	}
	else if(k==4){
		if(b[1]==1 && (b[2]==1 || b[4]==1 || b[6]==1 || b[8]==1 || b[10]==1 || b[12]==1 || b[14]==1) || 
			b[2]==1 && (b[4]==1 || b[5]==1 || b[8]==1 || b[9]==1 || b[12]==1 || b[13]==1) || 
			b[3]==1 && (b[4]==1 || b[8]==1 || b[12]==1) || b[4]==1 && (b[8]==1 || b[9]==1 || b[10]==1 || b[11]==1) || 
			b[5]==1 && (b[8]==1 || b[10]==1) || b[6]==1 && (b[8]==1 || b[9]==1) || b[7]==1 && b[8]==1) printf("YES"); else printf("NO");
	}
	else printf("NO");
	return 0;
}