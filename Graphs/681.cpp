#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int t;
	string s;
	cin >> n >> t >> s;

	while(t--){
		for(int i = 1 ; i <= n ; i++)
		{
			if(s[i] == 'G' && s[i-1] == 'B')
			{
				s[i] = 'B';
				s[i-1] = 'G';
				i++;
			}
		}
	}
	cout << s;
	return 0;
}
