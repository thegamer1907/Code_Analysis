#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	string st;
	cin>>st;
	for(int i = 0;i<t;i++){
		for(int i = n-1;i>0;){
			if(st[i] == 'G' && st[i-1] == 'B'){
				st.replace(i, 1, "B");
				st.replace(i-1, 1, "G");
				i = i-1;
			}
			i = i -1;
		}
	}
	cout<<st;
}