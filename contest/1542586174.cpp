#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5+5;

int n;
int h , m , s , t1 , t2 , m1 , m2;
bool b[6];

int main(){
	scanf("%d%d%d%d%d" , &h , &m , &s , &t1 , &t2);
	int t3 = t1 , m3 , s3;
	while(t3 != t2){
		if(h == t3){
			b[0] = 1;
			break;
		}
		t3++;
		if(t3 > 12)t3 -= 12;
	}
	if(!b[0])b[1] = 1;
	m1 = (t1 == 12) ? 0 : 5 * t1;
	m2 = (t2 == 12) ? 0 : 5 * t2;
	m3 = m1;
	while(m3 != m2){
		if(m == m3){
			b[2] = 1;
			break;
		}
		m3++;
		if(m3 == 60)m3 = 0;
	}
	if(!b[2])b[3] = 1;
	s3 = m1;
	while(s3 != m2){
		if(s == s3){
			b[4] = 1;
			break;
		}
		s3++;
		if(s3 == 60)s3 = 0;
	}
	if(!b[4])b[5] = 1;
	b[0] = (b[0] or b[2] or b[4]);
	b[1] = (b[1] or b[3] or b[5]);
	if(b[0] and b[1])printf("NO\n");
	else printf("YES\n");
}
