#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string pass;
	cin>>pass;
	int n;
	cin>>n;
	string word;
	bool start, end;
	start = end = false;
	for(int i =0 ;i<n; i++){
	    cin>>word;
	    if((word[0] == pass[0] && word[1] == pass[1]) || (word[1] == pass[0] && word[0] == pass[1])){
	        cout<<"YES"<<endl;
	        return 0;
	    }
	    if(word[1] == pass[0])
	        start = true;
	    
	    
	    if(word[0] == pass[1])
	        end = true;
	    
	    
	    if(start&&end){
	        cout<<"YES"<<endl;
	        return 0;
	    }
	}
	cout<<"NO"<<endl;
	return 0;
}
