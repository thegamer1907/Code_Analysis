#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct Position{
    char c;
    double pos;
};

int h, m, s;
int t1, t2;

bool sortas(Position p1, Position p2){
    return p1.pos < p2.pos;
}

int main(){
	cin >> h >> m >> s >> t1 >> t2;
	if (h == 12) h = 0;
	int t = min (t1, t2);
	t2 = max (t1, t2);
	t1 = t;

    Position p[5];
	double arrows[3];
	arrows[0] = s * 6;
	arrows[1] = m * 6 + s * .1;
	arrows[2] = h * 30 + m * .5 + s * .0083333333333;
	double td1 = t1 * 30;
	double td2 = t2 * 30;
	for (int i = 0; i < 3; i++){
        p[i].c = '1';
        p[i].pos = arrows[i];
	}
	p[3].c = '0';
	p[3].pos = td1;
	p[4].c = '0';
	p[4].pos = td2;
    sort(p, p+5, sortas);
    int a1 = -1, a2;
    for (int i = 0; i < 5; i++){
        if (p[i].c == '0'){
            if (a1 == -1)
                a1 = i;
            else
                a2 = i;
        }
    }

    if (abs(a1 - a2) == 1 || abs(a1 - a2) == 4)
        cout << "YES";
    else
        cout <<"NO";
}
