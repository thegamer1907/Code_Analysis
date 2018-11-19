#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define MAXN 101100
#define PI acos(-1)
typedef long double ld;
#define EPS 1e-9


bool igual(ld a, ld b){
	return fabs(a-b) < EPS;
}

bool maior(ld a, ld b){
	return a > EPS + b;
}

bool menor(ld a, ld b){
	return a + EPS < b;
}

bool maiorIgual(ld a, ld b){
	return maior(a, b) || igual(a, b);
}

bool menorIgual(ld a, ld b){
	return menor(a, b) || igual(a, b);
}

struct pv{
	ld x, y;
	pv(){}
	pv(ld _x, ld _y){
		x = _x;
		y = _y;
	}
	
	int getQuad(){
		if(maiorIgual(x, 0.0) && maiorIgual(y, 0.0)) return 1;
		if(menor(x, 0.0) && maiorIgual(y, 0.0)) return 2;
		if(menorIgual(x, 0.0) && menor(y, 0.0)) return 3;
		return 4;
	}
	
	pv operator + (pv other){
		return pv(x+other.x, y+other.y);
	}
	
	pv operator - (pv other){
		return pv(x-other.x, y-other.y);
	}
	
	pv operator * (ld k){
		return pv(x*k, y*k);
	}
	
	pv operator / (ld k){
		return pv(x/k, y/k);
	}
	
	bool operator == (pv other){
		return igual(x, other.x) && igual(y, other.y);
	}
};


pv rotacionaHorario(pv p, ld rad)
{
	rad = (rad * PI) / 180.0;
	rad=-rad;
	
	return pv(p.x * cos(rad) - p.y * sin(rad), p.x * sin(rad) + p.y * cos(rad));
}


ld cross(pv a, pv b){
	return a.x * b.y - a.y * b.x;
}

ld dot(pv a, pv b){
	return a.x * b.x + a.y * b.y;
}


//norma de um vetor
ld norma(pv a){
	return sqrt(dot(a, a));
}

bool comparePolarAngle(pv a, pv b){
	if(a==b) return true;
	int q1 = a.getQuad();
	int q2 = b.getQuad();
	
	if(q1==q2){
		if(igual(cross(a, b), 0.0)) return menor(norma(a), norma(b));
		return maior(cross(a, b), 0.0);
	}
	return q1 < q2;
}


int main(){
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	pv A, B, C;
	ld ghr = a*30 + (b + (c*1.0)/60.0)/2.0;
	ld gmn = b * 6 + ((c*1.0) * 6.0) / 60.0;
	ld gs = ((c*1.0)*360.0)/60.0;
	
	//~ cout << ghr << endl << gmn << endl << gs << endl;
	A = rotacionaHorario(pv(0, 1), ghr);
	B = rotacionaHorario(pv(0, 1), gmn);
	C = rotacionaHorario(pv(0, 1), gs);
	
	//~ cout << fixed << setprecision(10) << endl;
	//~ cout << A.x << " " << A.y << endl;
	//~ cout << B.x << " " << B.y << endl;
	//~ cout << C.x << " " << C.y << endl;
	
	vector<pv> v;
	v.pb(A);
	v.pb(B);
	v.pb(C);
	
	pv D, E;
	D = rotacionaHorario(pv(0, 1), d*30);
	E = rotacionaHorario(pv(0, 1), e*30);
	v.pb(E);
	v.pb(D);
	sort(v.begin(), v.end(), comparePolarAngle);
	//~ for (int i = 0; i < v.size(); i++)
	//~ {
		//~ cout << v[i].x << " " << v[i].y << endl;
	//~ }
	v.pb(v[0]);
	
	for (int i = 0; i < v.size()-1; i++)
	{
		if(v[i] == D && v[i+1] == E){
			cout << "YES\n";
			return 0;
		}
		if(v[i] == E && v[i+1] == D){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	
	
	return 0;
}
