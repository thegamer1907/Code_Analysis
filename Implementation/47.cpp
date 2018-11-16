#include <iostream>
#define LL long long
using namespace std;

LL n, a, b;
LL time(){
	LL t = n;
	LL count = 0; 
	while(t != 1){
		t /= 2;
		count++;
	}
	return count;
}
LL search(LL c, LL l){
	// cout << a << " "<< b<< " " << c<< " " << l<< " " << endl;
	if(a <= n /2+l && b > n/2+l){
		return c;
	}
	else if(a <= n/2+l && b <= n/2+l){
		n /= 2;
		//cout << "else" << endl;
		return search(c+1, l);
	}
	else{
		l += n/2;
		n /= 2;
		return search(c+1, l);
	}
}
int main(){
	cin >> n >> a >> b;
	if(a > b){
		LL t = a;
		a = b;
		b = t;
	}
	// cout << time() << endl;
	if(a <= n/2 && b > n/2)
		cout << "Final!" << endl;
	else
		cout << time() - search(0, 0) << endl;
	return 0;
}