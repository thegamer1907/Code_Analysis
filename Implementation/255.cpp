#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

// **  ** *****   ***** *    * ***  *   * *  *  * * 
// **  ** *           * *    * *  * *  ** *  *  * *
// ****** *****   ***** **** * ***  * * * *  *  * ***
//     ** *           * *  * * *    **  * *  *  * *  *
//     ** *****   ***** **** * *    *   * ******* ***

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int x, a, b;
	cin >> x >> a >> b;
	vector < int > f;
	for(int i = 1;i <= x;i++)
		f.push_back(i);
	int num = 1;

	if(a > b)
		swap(a, b);

	while(f.size() != 1){
		vector < int > nxt;
		for(int i = 0;i < f.size();i += 2){
			if(f[i] == a && f[i + 1] == b){
				if(f.size() != 2){
					cout << num;
				} else {
					cout << "Final!";
				}
				return 0;
			}
			if(f[i] == a || f[i] == b){
				nxt.push_back(f[i]);
			} else {
				nxt.push_back(f[i + 1]);
			}
		}
		num++;
		f = nxt;
	}
}