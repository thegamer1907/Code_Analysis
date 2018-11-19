#include<iostream>
using namespace std;
int main()
{
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	t1 %= 12;
	t2 %= 12;
	h %= 12;
	m /= 5;
	s /= 5;
	if(t1 > t2)
	swap(t1,t2);
	int c[] = {h >= t1 && h < t2, m >= t1 && m < t2, s >= t1 && s < t2};
	//cout << h << " " <<  m << " " << s << " " << t1 << " " << t2 << " " << c[0] << " " << c[1] << " " << c[2] << endl;
	(((c[0]+c[1]+c[2])%3) == 0)?cout << "YES":cout << "NO";
	return 0;
}