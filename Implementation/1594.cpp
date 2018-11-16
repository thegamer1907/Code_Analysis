#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("in.txt","r",stdin);
	string str;
    int a=0,b=0;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='0') a++,b=0;
      	else			a=0,b++; 
        if(a>=7 or b>=7)break;
    }
	cout<<((a>=7 or b>=7)?"YES":"NO")<<endl;	
 
return 0;
}


