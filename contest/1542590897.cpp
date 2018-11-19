#include <bits/stdc++.h>
using namespace std;
vector<string>v;
int main(){
	//freopen("readin.txt","r",stdin);
   	string s;
   	cin >> s;
   	int n;
   	scanf("%d",&n);
   	while(n--){
   		string a;
   		cin >>a;	
   		v.push_back(a);
   		for(auto i : v){
   			string temp = a + i;
   			if(temp.find(s) != -1)return puts("YES"),0;
   			temp = i + a;
   			if(temp.find(s) != -1)return puts("YES"),0;
   		}
   	}
   	puts("NO");
}