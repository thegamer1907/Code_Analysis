#include<iostream>
using namespace std;
const int maxn=1e4+10;
long long map[maxn];
bool check(int x){
	int sum=0;
	while(x){
		sum+=x%10;
		x/=10;
		if(sum>10)return 0;
	}
	if(sum==10)return 1;
	else return 0;
}
void init(){
	int op=0;
	long long i=19;
	while(op!=10000){
		if(check(i))map[++op]=i;
		i++;
	}
}
int main(){
	init();
	int n;
	cin>>n;
	cout<<map[n]<<endl;
	return 0;
}