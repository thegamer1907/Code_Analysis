#include <iostream>
using namespace std;
                                                /////cf////A. Bark to Unlock///868A
int main() {
	// your code goes here
	int i,n;
	string s,s1,s2;
	cin>>s;
	cin>>n;
	int f1=0,f2=0;
	while(n--){
		cin>>s1;
	      if (s==s1)f1=1,f2=1;
	           if (s[0]==s1[1]) f1=1;
	           if (s[1]==s1[0]) f2=1;

	       }

	       if (f1==1 && f2==1)cout<<"YES";
	       else cout<<"NO";
	return 0;
}