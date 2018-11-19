/*
 * QualificationRounds.cpp
 *
 *  Created on: 05-Oct-2017
 *      Author: shivang
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define pb push_back
#define SIZE 100000
struct node {
	int a,b,c,d;
};
int main() {
	int n,k;
	cin>>n>>k;
	node data[SIZE];
	int ctr0=0;
	for(int i=0;i<n;i++) {
		data[i].a=0;
		data[i].b=0;
		data[i].c=0;
		data[i].d=0;
		if(k==1)
			cin>>data[i].a;
		if(k==2)
			cin>>data[i].a>>data[i].b;
		if(k==3)
			cin>>data[i].a>>data[i].b>>data[i].c;
		if(k==4)
			cin>>data[i].a>>data[i].b>>data[i].c>>data[i].d;
		if(data[i].a==0 && data[i].b==0 && data[i].c==0 && data[i].d==0)
			ctr0++;
	}
	if(n==1) {
		if(data[0].a==0 && data[0].b==0 && data[0].c==0 && data[0].d==0) {
			cout<<"YES";
			return 0;
		}
	}
	if(ctr0>1) {
		cout<<"YES";
		return 0;
	}
	node distinct[20];
	int ctr=0;
	for(int i=0;i<n;i++) {
		bool temp = false;
		for(int j=0;j<ctr;j++) {
			if(data[i].a==distinct[j].a && data[i].b==distinct[j].b && data[i].c==distinct[j].c && data[i].d==distinct[j].d) {
				temp = true;
				break;
			}
		}
		if(temp==false) {
			distinct[ctr] = data[i];
			ctr++;
		}
	}
	//    for(int i=0;i<ctr;i++)
	//        cout<<distinct[i].a<<distinct[i].b<<distinct[i].c<<distinct[i].d<<endl;
	for(int i=0;i<ctr-1;i++) {
		for(int j=i+1;j<ctr;j++) {
			node x = distinct[i];
			node y = distinct[j];
			if(x.a+y.a>1 || x.b+y.b>1 || x.c+y.c>1 || x.d+y.d>1)
				continue;
			else {
				cout<<"YES";
				return 0;
			}
		}
	}
	//    for(int i=0;i<n;i++) {
	//		cout<<data[i].a<<data[i].b<<data[i].c<<data[i].d<<endl;
	//	}
	cout<<"NO";
	return 0;
}
