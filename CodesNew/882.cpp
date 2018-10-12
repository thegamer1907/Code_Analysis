#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void file(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}
void file2(){
	fclose(stdout);
	fclose(stdin);
}

int main (void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//file();

	int n,i;
	int p;
	string falseLine,x,answer;
	vector<string> poland,enemy,all;
	set<string> lol;
	int size1,size2;
	cin >> n >> i;
	getline(cin,falseLine);
	for(int j=0;j<(n+i);j++){
		getline(cin,x);
		size1=lol.size();
		lol.insert(x);
		size2=lol.size();
		if(size2>size1){
			all.push_back(x);
		}

	}

	if(n>i){
		answer="YES\n";
	}
	else if(i>n){
		answer="NO\n";
	}

	else{
		p=all.size();
		if(p%2==0){
			answer="NO\n";
		}
		else{
			answer="YES\n";
		}
	}

	cout << answer;
	//return 0;
	//file2();

}
