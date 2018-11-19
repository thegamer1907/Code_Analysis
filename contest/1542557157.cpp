#include<iostream>
int N;
char a,b,c,d,ad,bc;
int main(){
for(std::cin>>a>>b>>N;N--;)
	std::cin>>c>>d,
	a==c&&b==d?ad=bc=1:0,
	ad|=a==d,
	bc|=b==c;
std::cout<<(ad&&bc?"YES":"NO");
}