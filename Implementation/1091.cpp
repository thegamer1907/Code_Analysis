#include <iostream>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int i=0;i<t;i++){
		size_t index = 0;
		while (true) {
		    index = s.find("BG", index);
		    if (index == std::string::npos) break;
		    s.replace(index, 2, "GB");
			index += 2;
		}
	}
	cout<<s<<endl;
}