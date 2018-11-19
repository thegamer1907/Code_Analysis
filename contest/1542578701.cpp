#include<bits/stdc++.h>
#define RG register
using namespace std;
int n,k,cnt;
bool tmp[5],one[5],two[5][5],three[5][5][5];
inline int gi(){
    RG int x=0;RG char c=getchar();
    while(c<'0'||c>'9') c=getchar();
    while(c>='0'&&c<='9') x=x*10+c-'0',c=getchar();
    return x;
}
int main(){
    //freopen("C.in","r",stdin);
    //freopen("C.out","w",stdout);
    n=gi();k=gi();
    for (RG int i=1;i<=n;++i){
	cnt=0;
	for (RG int j=1;j<=k;++j){
	    tmp[j]=gi();
	    cnt+=tmp[j];
	}
	if(!cnt){
	    puts("YES");
	    return 0;
	}
	if(cnt==k) continue;
	if(cnt==1){
	    for (RG int j=1;j<=k;++j)
		if(tmp[j]){
		    for (RG int jj=1;jj<=k;++jj)
			if(jj!=j&&one[jj]){
			    puts("YES");
			    return 0;
			}
		    for (RG int ii=1;ii<=k;++ii)
			if(ii!=j)
			    for (RG int jj=ii+1;jj<=k;++jj)
				if(jj!=j)
				    if(two[ii][jj]){
					puts("YES");
					return 0;
				    }
		    for (RG int ii=1;ii<=k;++ii)
			if(ii!=j)
			    for (RG int jj=ii+1;jj<=k;++jj)
				if(jj!=j)
				    for (RG int kk=jj+1;kk<=k;++kk)
					if(kk!=j)
					    if(three[ii][jj][kk]){
						puts("YES");
						return 0;
					    }
		    one[j]=1;
		    break;
		}
	}
	if(cnt==2){
	    for (RG int j=1;j<=k;++j)
		if(tmp[j])
		    for (RG int l=j+1;l<=k;++l)
			if(tmp[l]){
			    for (RG int jj=1;jj<=k;++jj)
				if(jj!=j&&jj!=l&&one[jj]){
				    puts("YES");
				    return 0;
				}
			    for (RG int ii=1;ii<=k;++ii)
				if(ii!=j&&ii!=l)
				    for (RG int jj=ii+1;jj<=k;++jj)
					if(jj!=j&&jj!=l)
					    if(two[ii][jj]){
						puts("YES");
						return 0;
					    }
			    two[j][l]=1;
			    break;
			}
	}
	if(cnt==3){
	    for (RG int j=1;j<=k;++j)
		if(tmp[j])
		    for (RG int l=j+1;l<=k;++l)
			if(tmp[l])
			    for (RG int m=l+1;m<=k;++m)
				if(tmp[m]){
				    for (RG int jj=1;jj<=k;++jj)
					if(jj!=j&&jj!=l&&jj!=m&&one[jj]){
					    puts("YES");
					    return 0;
					}
				    three[j][l][m]=1;
				    break;
				}
	}	
    }
    puts("NO");
    return 0;
}

