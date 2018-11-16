#include <iostream>
using namespace std;
int main ()
{
	int ab=0;
	int ba=0;
	int aba=0;
	int bab=0;
	string s;
	cin>>s;
	if(s.size()<=3){
		cout<<"NO";
		return 0;
	}
	for(int i=0 ; i < s.size() - 2 ; i++){
		if(s[i] == 'A' and s[i + 1] == 'B' and s[i+ 2] == 'A'){
					aba = aba + 1;
					s[i]=0;
					s[i+1]=0;
					s[i+2]=0;
				}
		if(s[i] == 'B' and s[i + 1] == 'A' and s[i+ 2] == 'B'){
					bab = bab + 1;
					s[i]=0;
					s[i+1]=0;
					s[i+2]=0;
				}
	}
	if(aba + bab >= 2){
		cout << "YES";
		return 0;
	}
	if(aba == 1 or bab == 1){
		for(int i=0 ; i <s.size() - 1 ; i++){
			if(s[i] == 'A' and s[i + 1] == 'B'){
					cout<<"YES";
					return 0;
				}
			if(s[i] == 'B' and s[i + 1] == 'A'){
					cout<<"YES";
					return 0;
				}
		}
	}
		for(int i=0;i<s.size()-1;i++){
			if(s[i] == 'A' and s[i + 1] == 'B'){
					ab = ab + 1;
					s[i] = 0;
					s[i+1] = 0;		
				}
				if(s[i] == 'B' and s[i + 1] == 'A'){
					ba = ba + 1;
					s[i] = 0;
					s[i+1] = 0;		
				}
		}
		if(ab > 0 and ba > 0)
		{
			cout<<"YES";
			return 0;
		}
	cout<<"NO";
	return 0;
}
