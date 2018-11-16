#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	string c;
	cin >> c;
	for(int i = 0; i < k; i ++)
        for(int j = 0; j < n-1; j ++)
            if(c[j]=='B' && c[j+1]=='G'){
                c[j] = 'G';
                c[j+1] = 'B';
                j ++;
            }
	cout << c;
    return 0;
}
