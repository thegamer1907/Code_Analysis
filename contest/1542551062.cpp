#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll h,m,s,t1,t2;

bool can_move(ll now, ll next){
	ll mini = min(now,next);
	ll maxi = max(now,next);

	ll a = (s / 5);
	ll b = (s + 4) / 5;
	b %= 12;

	if(a == b){
		if(next == a)	return false;
	}
	else{
		if(mini == min(a,b) && maxi == max(a,b))	return false;
	}

	ll ts = m * 60 + s;
	a = ts / 300;
	b = (ts + 299) / 300;

	b %= 12;

	if(a == b){
		if(next == a)	return false; 
	}
	else if(min(a,b) == mini && max(a,b) == maxi)	return false;

	ts = h * 60 * 60 + m * 60 + s;

	a = ts / 3600;
	b = (ts + 3599) / 3600;
	b %= 12;

	if(a == b){
		if(next == a)	return false;
	}
	else if(min(a,b) == mini && max(a,b) == maxi)	return false;


	return true;

}
int main(){
	cin >> h >> m >> s >> t1 >> t2;

	h %= 12;
	t1 %= 12;
	t2 %= 12;

	ll current = t1;

	do{
		if(current == t2){
			printf("YES\n");
			return 0;
		}
		if(can_move(current,(current+1) % 12)){
			current = (current + 1) % 12;
		}
		else{
			break;
		}
	}	while(current != t1);

	current = t1;
	do{
		if(current == t2){
			printf("YES\n");
			return 0;
		}
		if(can_move(current,((current - 1) + 12) % 12)){
			current = ((current - 1) + 12) % 12;
		}
		else{
			break;
		}
	}	while(current != t1);

	printf("NO\n");
}