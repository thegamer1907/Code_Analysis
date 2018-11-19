#include <iostream>

using namespace std;

string arr[101];
                      /*
bool is_pas(string s, string pas)
{
	for(int i = 0; i < s.size(); i++){
		string temp = arr[i];
		if(temp[i] == pas[0]){
			if(i != s.size()-1 && temp[i + 1] == pas[1]) return true;
		}

	}
	return false;	
}
      */
bool is_pas(string s, string pas)
{
	if(s[1] == pas[0] && s[2] == pas[1]) return true;
	return false;
}

int main()
{
	string pas, temp;
	int n;
	cin >> pas >> n;
	bool ok = false;
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			temp = arr[i] + arr[j];
			if(is_pas(temp, pas)) {ok = true; break;}
			if(arr[i] == pas) {ok = true; break;}
		}
	}
	if(ok) printf("YES");
	else printf("NO");
	return 0;
}