#include<iostream>
int n,a,c,x,m,r=-1;main(){std::cin>>n;while(n--){std::cin>>a;c+=a;x+=1-a*2;r=std::max(r,x-m);m=std::min(x,m);}std::cout<<r+c;}
