#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	bool flag = false;
	int len = s.size();
    int acnt = 0, bcnt = 0;

	for(int i=0; i<len; i++){
        if(s[i]-'0'){
            acnt++;
            bcnt = 0;
        }else{
            bcnt++;
            acnt = 0;
        }if(bcnt == 7 || acnt == 7){
            flag = true;
            break;
        }
	}

	if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
	return 0;
}
