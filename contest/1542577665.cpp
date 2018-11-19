#include <bits/stdc++.h>

using namespace std;
	
int h, m, s, t1, t2;
int vet[123456];

int main() {
	while(cin >> h >> m >> s >> t1 >> t2) {
		memset(vet, 0, sizeof vet);
		h %= 12; t1 %= 12; t2 %= 12;
		h *= 2; t1 *= 2; t2 *= 2;
		int ns = s/5;
		ns*=2;
		if(s %5) ns++;
		int nm = m/5;
		nm *= 2;
		if(m % 5 || s > 0)  nm ++;
		if(m > 0 || s > 0) h++;
		m = nm;s = ns;
		vet[h]++; vet[m]++; vet[s] ++; //vet[t1]++; vet[t2]++;
		if(t1 > t2) swap(t1, t2);
		bool pode = 1;
		for (int i = t1 + 1; i < t2; i++) if(vet[i]) pode = false;
		bool poden = 1;
		for (int i = 0; i < t1; i++) if(vet[i]) poden = false;
		for (int i = t2 + 1; i < 100; i++) if(vet[i]) poden = false;
		if(pode || poden) cout << "YES\n";
		else cout << "NO\n";	 
	}
}
