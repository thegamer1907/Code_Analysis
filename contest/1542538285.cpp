#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	char f = s[0];
	char se = s[1];
	int n;
	cin>>n;
	int one = 0 ;
	int two = 0;
	while(n--){
	    string a;
	    cin>>a;
	    if(a==s){
	        cout<<"YES";
	        return 0;
	    }
	    else if(a[1]==s[0] && a[0]==s[1]){
	        cout<<"YES";
	        return 0;
	    }
	    else if(a[1]==s[0])
	        one++;
	    else if(a[0]==s[1])
	        two++;
	    
	}
	if(one&&two)
	    cout<<"YES";
	else{
	    cout<<"NO";
	}
	return 0;
}
