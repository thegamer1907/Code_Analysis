#include<iostream>
using namespace std;

int n,h,w,x;
int main() {
   cin>>n>>h;
   for(int i=0;i<n;i++) {
      w++;
      cin>>x;
      if(x>h) w++;
   }
   cout<<w<<endl;
}
