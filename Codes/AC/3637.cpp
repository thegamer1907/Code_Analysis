#include<bits/stdc++.h>
#define JESUS(x) long long int x;scanf("%lld",&x);
#define GOD(x) long long int x=0;
using namespace std;
long long int jesus=777777777777ll;
int main(){
	char rem[101];
	scanf("%s",rem);
	JESUS(a);
	JESUS(b);
	JESUS(c);
	JESUS(ca);
	JESUS(cb);
	JESUS(cc);
	GOD(A);
	GOD(B);
	GOD(C);
	int l=strlen(rem);
	for (int i=0;i<l;i++){
		if (rem[i]=='B')A++;
		else if (rem[i]=='S')B++;
		else if (rem[i]=='C')C++;
	}
	
	JESUS(money);
	JESUS(_eating_a_burger);
	JESUS(_wants_to_buy_a_burger);
	
	
	_wants_to_buy_a_burger=ca*A+cb*B+cc*C;
	_eating_a_burger=jesus;
	if (A)_eating_a_burger=min(_eating_a_burger,a/A);
	if (B)_eating_a_burger=min(_eating_a_burger,b/B);
	if (C)_eating_a_burger=min(_eating_a_burger,c/C);
	a-=A*_eating_a_burger;
	b-=B*_eating_a_burger;
	c-=C*_eating_a_burger;
	while ((A!=0&&a>0)||(B!=0&&b>0)||(C!=0&&c>0)){
		while (money>=ca&&a<A){
			a++;
			money-=ca;
		}
		while (money>=cb&&b<B){
			b++;
			money-=cb;
		}
		while (money>=cc&&c<C){
			c++;
			money-=cc;
		}
		if (a<A||b<B||c<C){
			break;
		}
		else{
			a-=A;
			b-=B;
			c-=C;
			_eating_a_burger++;
		}
	}
	_eating_a_burger+=money/_wants_to_buy_a_burger;
	printf ("%lld\n",_eating_a_burger);
}