#include <iostream>
using namespace std;
int main()
{
	int l, t;
	cin >> l >> t;
	string q;
	cin >> q;
	while(t > 0){
		for(int i = 0; i < l-1;i++){
			if(q[i] == 'B' && q[i+1] == 'G'){
				swap(q[i],q[i+1]);
				i++;//Just remember to check for index changes are repetitons when play with arrays.
			}
		}
		t--;
	}
	cout << q << endl;
}
