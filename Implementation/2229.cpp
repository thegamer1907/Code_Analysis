 #include<stdio.h>
 int main(){
 	int n,k,w,s=0;
 	scanf("%d %d %d",&k,&n,&w);
 	for(int i=0;i<=w;i++){
			s+=i*k;
			}
	if(s>n) printf("%d\n",s-n);
	else printf("0");
	return 0;
}


      