#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,ss;
    cin>>ss;
    int n;
    cin>>n;
    bool ms=false,me=false;
    while (n--) {
        cin>>s;
        if(s[0]==ss[ss.length()-1])
            me=true;
        if (s[s.length()-1]==ss[0])
            ms=true;
        if(s==ss)
        {
            me=true;
            ms=true;
        }
    }
    if (me&&ms) {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}
    			 	 	     	  	  	   	  		