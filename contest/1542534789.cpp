#include<bits/stdc++.h>
using namespace std;
#define ll long long
char s[110];
int l[210],r[210],len[210],temp;
bool p[210][(1<<15)+10];
int n,m;

void geter(int x){
	int i=1;
	while(i<x) i<<=1;
	while(i>>=1){
		cout<<x/i;
		x%=i;
	}
	cout<<" ";
	return;
}

int main(){
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		scanf("%s",s);
		int tlen=strlen(s);
		for(int j=0; j<tlen; j++){
			temp=0;
			for(int k=0; k<14; k++){
				if(!s[j+k]) break;
				temp=temp*2+s[j+k]-'0';
				p[i][(1<<(k+1))+temp]=1;
				//if((1<<(k+1))+temp==4) cout<<"hehe"<<j<<"  "<<k<<" "<<s[j+k]<<endl;
			}
		}
		int ulen=min(tlen,14);
		len[i]=ulen;
		temp=0;
		for(int j=0; j<ulen; j++){
			temp=temp*2+s[j]-'0';
		}
		l[i]=temp;
		//cout<<endl;
		//geter(l[i]);
		temp=0;
		for(int j=tlen-ulen; j<tlen; j++){
			temp=temp*2+s[j]-'0';
		}
		r[i]=temp;
		//geter(r[i]);
		//cout<<endl;
		//cout<<l[i]<<" "<<r[i]<<" "<<len[i]<<endl;
	}
	scanf("%d",&m);
	int a,b;
	for(int i=n+1; i<=n+m; i++){
		scanf("%d %d",&a,&b);
		for(int j=0; j<=(1<<15); j++) p[i][j]=p[a][j]|p[b][j];
		//cout<<p[a][21]<<"  "<<p[b][21]<<endl;
		temp=(r[a]*(1<<len[b]))+l[b];
		
		int tlen=len[a]+len[b];
		for(int j=tlen; j>0; j--){
			for(int k=1; k<=14; k++){
				if(k>j) break;
				p[i][(1<<k)+(temp%(1<<j)/(1<<(j-k)))]=1;
				//if((1<<k)+(temp%(1<<j)/(1<<(j-k)))==21){ geter(temp); cout<<tlen<<" "<<j<<" "<<k<<endl;}
			}
		}
		
		if(tlen<=14){
			l[i]=r[i]=temp;
			len[i]=tlen;
		}
		else{
			len[i]=14;
			if(len[a]<14) l[i]=temp/(1<<(tlen-14));
			else l[i]=l[a];
			if(len[b]<14) r[i]=temp%(1<<14);
			else r[i]=r[b];
		}
		/*
		int ulen=min(tlen,14);
		len[i]=ulen;
		l[i]=temp/(1<<(tlen-ulen));
		r[i]=temp%(1<<(ulen));
		*/
		int j=2;
		for(j=2; j<=(1<<15)+1; j++){
			if(!p[i][j]) break;
		}
		//cout<<"   "<<p[i][4]<<endl;
		int k=-1;
		//cout<<j<<endl;
		while(j>>=1) k++;
		cout<<k<<endl;
	}
	return 0;
} 



