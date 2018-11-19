using namespace std;
#include<bits/stdc++.h>
int main(){
	string p;
	cin>>p;
	char p1=p[0],p2=p[1];
	int n;
	cin>>n;
	vector<string> v;
	int flg1=0,flg2=0;
	for(int i=0;i<n;i++){
	 string s;
	 cin>>s;
	 if(s[0]==p2)
	 	flg1=1;
	 if(s[1]==p1)
	 	flg2=1;
	 if(s==p){
	 	flg1=1;
	 	flg2=1;
	 }
	 // v.push_back(s);
	}
	if(flg1==1 && flg2==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}