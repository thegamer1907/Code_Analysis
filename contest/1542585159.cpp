/*
 * RaceAgainstTime.cpp
 *
 *  Created on: 05-Oct-2017
 *      Author: shivang
 */
#include<iostream>
using namespace std;
int main() {
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	bool temp1 = true,temp2=true;
	for(int i=t1;i!=t2;) {
		if(i == h) {
			temp1 = false;
//			cout<<"here1";
			break;
		}
		if(i==12)
			i=1;
		else
			i++;
	}
	for(int i=t2;i!=t1;) {
		if(i == h) {
//			cout<<"here2";
			temp2 = false;
			break;
		}
		if(i==12)
			i=1;
		else
			i++;
	}
	for(int i=(t1*5)%60;i!=(t2*5)%60;) {
		if(i==m || i==s) {
//			cout<<"here3";
			temp1=false;
			break;

		}

		if(i==59)
			i=0;
		else
			i++;
	}
	for(int i=(t2*5)%60;i!=(t1*5)%60;) {
		if(i==m || i==s) {
//			cout<<"here4";
//			cout<<i<<" ";
			temp2=false;
			break;
		}
		if(i==59)
			i=0;
		else
			i++;
	}
	if(temp1==false && temp2==false)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}



