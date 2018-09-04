/*input
1
*/
#include<bits/stdc++.h>
typedef std::vector<int> vi;
typedef std::vector<char> vc;
int sum(int a){
	int suma = 0;
	while(a){
		suma += a%10;
		a /= 10;
	}
	return suma;
}
int main(){
	int N;
	std::cin >> N;
	int count = 1;
	int i = 19;
	while(count != N){
		i++;
		if(sum(i) == 10) count++;
	}
	printf("%d\n", i);
	return 0;
}