#include<cstdio>
#include<cstring>

#define Fast register
const int Maxv=1000000;
const int Sigma=9;

template<class T>inline void chkMin(T&x,const T&y){(x>y)&&(x=y);}

char s[Maxv+1];
int a[Sigma+1];

int main(){
	Fast int v;
	scanf(" %d",&v);
	Fast int Minv=100000,Mind;
	for(Fast int i=1,v;i<=9;++i){
		scanf(" %d",&v);
		a[i]=v;
		if(v<=Minv)
			Minv=v,Mind=i;
	}

	if(Minv>v)
		return puts("-1"),0;

	Fast int Len=v/Minv;
	memset(s+1,Mind+48,Len);

	if(Mind==9)
		return fwrite(s+1,1,Len,stdout),0;

	Fast int Minc=100000;
	for(Fast int i=Mind+1;i<=9;++i)
		chkMin(Minc,a[i]-=Minv);

	v-=Len*Minv;

	for(Fast char *c=s+1;Minc<=v;++c)
		for(Fast int td=9;Mind<td;--td)
			if(a[td]<=v){
				*c=td+48;
				v-=a[td];
				break;
			}

	return fwrite(s+1,1,Len,stdout),0;
}
