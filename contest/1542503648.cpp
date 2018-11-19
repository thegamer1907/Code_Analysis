#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string password;
    int n, i;
    bool found = false;
    bool endFound = false, startFound = false;
    cin >> password;
    cin >> n;
    vector<string> words(n);
    for(i=0;i<n;i++) {
    	cin >> words[i];
    }


    for(i=0;i<n;i++)
    	if(words[i] == password)
    		found = true;

    if(!found) {
    	for(i=0;i<n;i++) {
    		if(words[i][1]==password[0])
    			startFound = true;
    	}
    	if(startFound) {
    		for(i=0;i<n;i++) {
    			if(words[i][0] == password[1])
    				endFound = true;
    		}
    	}
    	found = startFound && endFound;
    }

    if(found)
    	cout << "YES";
    else 
    	cout << "NO";

    return 0;
}