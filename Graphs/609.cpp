#include<iostream>
#include<string>
using namespace std;
void fast()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int main(){
	fast();
	 bool b=1;
	 int o, s;
	 string f;
	 char m;
	 cin >> s >> o >> f;
	 s--;
	 for (int r = 0; r < o; r++){
		 for (int i = 0; i < s; i++){
			 if (f[i] < f[i + 1]){ m = f[i]; f[i] = f[i + 1]; f[i + 1] = m; i++; }
		 }
	 }
	 cout << f;
	return 0;
}