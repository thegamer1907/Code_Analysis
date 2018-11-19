#include<bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair

int main(){
	int h,m,s,t1,t2;
	scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
	int rh = (m != 0 || s != 0);
	int rm = (m%5) != 0 || (s != 0);
	m /= 5;
	int rs = (s%5) != 0;
	s /= 5;
	int d1 = max(t1,t2) - min(t1,t2);
	int d2 = min(t1,t2) - max(t1,t2);
	if(t1 > t2){
		d1 = t1 - t2;
		d2 = 12 - d1;
	}
	else{
		d2 = t2 - t1;
		d1 = 12 - d2;
	}
	if(t1 == t2){
		printf("YES\n");
		return 0;
	}
	int esq = 1000;
	int dir = 1000;
	if(t1 > h){
		esq = min(esq,(t1-h-rh));
		dir = min(dir,12 - (t1-h));
	}
	else{
		dir = min(dir,h-t1);
		esq = min(esq,12 - (h-t1+rh));	
	}
	if(t1 > m){
		esq = min(esq,t1-m-rm);
		dir = min(dir,12 - (t1-m));
	}
	else{
		dir = min(dir,m-t1);
		esq = min(esq,12 - (m-t1+rm));	
	}
	if(t1 > s){
		esq = min(esq,t1-s-rs);
		dir = min(dir,12 - (t1-s));
	}
	else{
		dir = min(dir,s-t1);
		esq = min(esq,12 - (s-t1+rs));	
	}
	//printf("%d %d %d %d\n",esq,d1,dir,d2);
	if(dir >= d2 || esq >= d1){
		printf("YES\n");
	}
	else
		printf("NO\n");
    return 0;
}
