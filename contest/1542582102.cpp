#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int h , m , s , A , B , now;
	cin >> h >> m >> s >> A >> B;
	h %= 12 , A %= 12 , B %= 12;
	h = h * 3600 + m * 60 + s;
	m = (m * 60 + s) * 12;
	s = s * 60 * 12;
	
	int u , t[4] = {0 , h , m , s} , a[2] = {A * 3600 , B * 3600};
	sort(t + 1 , t + 4);
	
	//for(int i = 1; i <= 3; i++) cout << t[i] << ' ';
//	cout << endl;
	//cout << a[0] << ' ' << a[1] << endl;
	
	
	bool flag = true;
	for(int i = 0; i < 2; i++)
		for(int j = 1; j <= 2; j++)
			if( (a[i] > t[j] && a[i] < t[j + 1]) && (a[i^1] < t[j] || a[i^1] > t[j+1]))
				flag = false;
	for(int i = 0; i < 2; i++)
		if(a[i] > t[3] && (a[i ^ 1] > t[1] && a[i ^ 1] < t[3]))
			flag = false;
	if(flag) cout << "YES";
		else cout << "NO";
	return 0;
}
