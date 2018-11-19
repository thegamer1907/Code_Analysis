#include <stdio.h>
#include <vector>
using namespace std;
int n,k;
bool exist[20];
vector<int> p;
bool yes;
vector<int> two;
void get_two(){
	two.push_back(1);
	for(int i=0;i<20;i++){
		two.push_back(two[i] * 2);
	}
}
bool get_digit(int x, int y){
	return (x/two[y]) % 2 == 1;
}
void check(bool used[]){

	// for(int i=0;i<4;i++){
	// 	printf("%d ", used[i]);
	// }
	// puts("");

	int cnt = 0;
	int team[5] = {};
	for(int i=0;i<p.size();i++){
		if(used[i]){
			cnt += 1;
			for(int j=0;j<k;j++){
				if(get_digit(p[i], j)){
					team[j] += 1;
				}
			}
		}
	}
	for(int j=0;j<k;j++){
		if(2*team[j] > cnt){
			return;
		}
	}
	yes = true;
	if(cnt == 0){
		yes = false;
	}
	// for(int i=0;i<20;i++){
	// 	printf("%d ",used[i]);
	// }
	// puts("");
}
void f(int x, bool used[]){ // x is an index at vector p.
	if(yes) return;
	if(x == p.size()){
		check(used);
		return;
	}
	used[x] = true;
	f(x+1, used);
	used[x] = false;
	f(x+1, used);
}
int main(){
	scanf("%d%d",&n,&k);
	get_two();
	for(int i=1;i<=n;i++){
		int x = 0;
		for(int j=1;j<=k;j++){
			int temp;
			scanf("%d",&temp);
			x += temp;
			x *= 2;
		}
		x /= 2;
		exist[x] = true;
	}
	bool blank[20] = {};
	for(int i=0;i<20;i++){
		if(exist[i]){
			p.push_back(i);
		}
	}
	f(0, blank);
	printf(yes?"YES":"NO");
}