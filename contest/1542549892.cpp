//g++5.4.0(rextester.com)g++5.1.0(codeforces.com)2017-12-08
#include<iostream>
using namespace std;main(){
    int totalWord,x=0,y=0;string pass,word;cin>>pass>>totalWord;
	for(int i=0;i<totalWord;i++){cin>>word;
		if(word==pass||(word[1]==pass[0]&&word[0]==pass[1])){cout<<"YES";return 0;}
		else if(pass[0]==word[1])x++;else if(pass[1]==word[0])y++;
		if(x>0&&y>0){cout<<"YES";return 0;}
	}
    cout<<"NO";
}