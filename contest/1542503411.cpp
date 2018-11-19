#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int n;
    cin>>s;
	cin>>n;

	string st[n];

	int f1=0,b1=0;
	for(int i=0;i<n;i++){

        cin>>st[i];


	}

	for(int i=0;i<n;i++){

        if(st[i]==s){
            cout<<"YES"<<endl;
            return 0;
        }

        if(st[i][1]==s[0]){
            f1=1;

        }
         if(st[i][0]==s[1]){
            b1=1;
        }



        if(f1 && b1){
            cout<<"YES"<<endl;
            return 0;
        }


	}
	cout<<"NO"<<endl;
	return 0;

}
