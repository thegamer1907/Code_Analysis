#include <iostream>
#include <map>
#include <vector>
#include <cstring>
#include <utility>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <string>
#include <stack>
#include <set>
#include <deque>
#define mp make_pair
using namespace std;
int h,m,s,a,b,hm,mm,sm,half;
int main(){
	cin>>h>>m>>s>>a>>b;
	if (b<a){
		int t=b;
		b=a;
		a=t;
	}
	if (m>0 || s>0) hm=1;
	if (hm==1){
		if (h>=a && h<b){
			half=1;
		}else{
			half=2;
		}
	}else{
		if (h==a || h==b){
			cout<<"NO";
			return 0;
		}
		if (h>a && h<b){
			half=1;
		}else{
			half=2;
		}
	}
	if (s>0) mm=1;
	if (m%5!=0) mm=1;
	m=m/5;
	if (mm==1){
		if (m>=a && m<b){
			if (half==2){
				cout<<"NO";
				return 0;
			}
		}else{
			if (half==1){
				cout<<"NO";
				return 0;
			}
		}
	}else{
		if (m==a || m==b){
			cout<<"NO";
			return 0;
		}
		if (m>a && m<b){
			if (half==2){
				cout<<"NO";
				return 0;
			}
		}else{
			if (half==1){
				cout<<"NO";
				return 0;
			}
		}
	}
	if (s%5!=0) sm=1;
	s=s/5;
	if (sm==1){
		if (s>=a && s<b){
			if (half==2){
				cout<<"NO";
				return 0;
			}
		}else{
			if (half==1){
				cout<<"NO";
				return 0;
			}
		}
	}else{
		if (s==a || s==b){
			cout<<"NO";
			return 0;
		}
		if (s>a && s<b){
			if (half==2){
				cout<<"NO";
				return 0;
			}
		}else{
			if (half==1){
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
	return 0;
}