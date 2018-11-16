#include <iostream>

using namespace std;

int a[1000001] , pref[1000001];

int main(){
    string s;
    cin >>s;
	for(int i = 0 ;i < s.size(); ++i){
		pref[i] = pref[i - 1];
		if( s[i] == s[i - 1]){
			pref[i] ++;
		}
	}
	int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        int x , y;
        cin >> x >> y;
        cout<<pref[y - 1] - pref[x - 1]  << "\n";
    }
}