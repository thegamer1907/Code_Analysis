#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	
	int n;
	string str,pass;

	cin>>pass;
	cin>>n;
	map<char,vector<string> > m;
	int flag=0;

	while(n>0){

		cin>>str;
		m[str[0]].push_back(str);
		m[str[1]].push_back(str);
		n--;
	}
	// for(map<char,vector<string> >::iterator it=m.begin();it!=m.end();it++){
	// 	cout<<it->first<<" ";
	// 	cout<<it->second.size()<<"\n";
	// 	cout<<"\n";
	// }

	for(int i=0;i<m[pass[0]].size();i++){
		string temp=m[pass[0]][i];
		for(int j=0;j<m[pass[1]].size();j++){
			string tmp=temp+m[pass[1]][j];
			size_t found = tmp.find(pass);
			if (found!=string::npos){
				flag=1;
				break;    
			}
		}
		if(flag)
			break;
	}

	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	return 0;
}