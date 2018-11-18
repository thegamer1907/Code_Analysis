#include <iostream>
#include<cstdlib>
using namespace std;


int main(){
	double h, m, s, tF, tS, coor, minim, medium, maxim, numF, numS;
	cin >> h >> m >> s >> tF >> tS;
	h += m / 60.0 + s / 3600.0;
	m += s / 60.0;
	m /= 5.0;
	s /= 5.0;
	coor = tF;
	if(h > 12) h -= 12;
	if(m > 12) m -= 12;
	if(s > 12) s -= 12;
	minim = min(h, min(m, s));
	maxim = max(h, max(m, s));
	medium = h + m + s - minim - maxim;
	if(tF > minim && tF < medium) numF = 1;
	else if(tF > medium && tF < maxim) numF = 2;
	else numF = 3;

	if(tS > minim && tS < medium) numS = 1;
	else if(tS > medium && tS < maxim) numS = 2;
	else numS = 3;

	if(numS == numF){
		cout << "YES";
	}else{
		cout << "NO";
	}

	return 0;
}