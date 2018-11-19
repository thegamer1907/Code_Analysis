#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<algorithm>

using namespace std;
double ppo(double q)
{
	if (q >= 1)
		return (q - 1);
	else return q;
}


int main()
{
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	double q[10];
	bool flag = false;
	 q[1]= m + ((s + 0.0) / 60);
	q[0] = h + (q[1] / 60);
	q[0] = q[0] * 30;
	q[1] = q[1] * 6;
	q[2] = s ;
	q[3] = t1;
	q[4] = t2;
	q[2] = q[2] * 6;
	q[3] = q[3] * 30;
	q[4] = q[4] * 30;
	if (q[0] >= 360)
		q[0] = q[0] - 360;
	if (q[1] >= 360)
		q[1] = q[1] - 360;
	//for (int i = 0; i < 5; i++)
	//	cout << q[i] << "\n";
	//cout << "\n";
	sort(q, q+5);
	q[5] = q[0];
	for (int i = 0; i < 5; i++)
	{
	//	cout << q[i] << "\n";
		if ((q[i] == (t1+0.0)*30 && q[i + 1] == (t2 + 0.0) * 30) || (q[i] == (t2 + 0.0) * 30 && q[i + 1] == (t1 + 0.0)  *30))
			flag = true;
	}
//	cout << q[5] << "\n";
	if (flag)
		cout << "YES";
	else
		cout << "NO";
	//system("pause");
	return(0);
}