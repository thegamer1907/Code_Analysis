#include<iostream>
using namespace std;

int main(){
	int n , t;
	string in , out;
	cin>>n;
	cin>>t;
	cin>>in;
	bool enter;
	int len = in.size();
	for(int time=0 ; time<t ; time++){
		enter = false;
		out = "";
		for(int i=0 ; i<len ; i++){
			if((i+1)<len && in[i]=='B' && in[i+1]=='G'){
				out += "GB";
				enter = true;
				//cout<<out<<endl;
				i++;
			}	
			else{
				out += in[i];
				//cout<<out<<endl;
			}
		}
		in = out;
		if(!enter)
			break;
	}
	cout<<in<<endl;
	return 0;
}