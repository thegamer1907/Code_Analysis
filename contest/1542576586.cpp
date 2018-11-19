#include<iostream>
#include<queue>
#include <algorithm>
using namespace std;
typedef long long LL;

long long g;
int main() {
	LL h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	LL sec = (s*360*360/60)%129600;
	LL minutes = (m*360*360/60 + sec / 60)%129600;//
	LL hour = (h*360*360/12 + minutes / 12)%129600; 
	LL v[6];
	v[0] = sec;
	v[1] = minutes;
	v[2] = hour;
	t1 = (t1 * 360*360/12)%129600;
	t2 = (t2 * 360*360/12)%129600;
	//cout << t1 << " " << t2 << " " << hour << " " << minutes << " " << sec << endl;
	//cout << hour << " " << minutes << " " << 
	LL mini = std::min(t1, t2);
	LL maxi = max(t1, t2);
	for(int i=0;i<3;i++)
		if((v[i] > mini && v[i] < maxi) || (v[i]+129600 > mini && v[i]+129600 < maxi))
			goto antiorario;
	cout << "YES";
	return 0;		
	antiorario:;
	mini += 129600;
	swap(mini, maxi);
	for(int i=0;i<3;i++)
		if((v[i] > mini && v[i] < maxi) || (v[i]+129600 > mini && v[i]+129600 < maxi)) {
			cout << "NO";
			return 0;
		}
	cout << "YES";
}


