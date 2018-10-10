#include <iostream>
using namespace std;
string s ;
int  n , kk;
bool check (int  mid  , char dd){
//	cout<<mid <<" "<<dd<<endl;
	int l =0 , r=-1 ; 
	int c =0 , k = kk ;
	while(r <n){

		r++;
		if(s[r]==dd)
			c++;
		else if(k) {
				k--;
				c++;
		}
		else{
			while(l <=r ){
				c--;
				if(s[l]!=dd)
					k++;
				l++;
				if(k) {
					k--;
					c++;
					break;
				}
			}
		}
	//	cout<<l<< " "<<r<< " "<<c <<"  "<< k<<"  "<<dd<< endl;
		if(c >= mid) return 1 ;
	}
	return 0 ;
}
int main() {
	 cin>>n>>kk;
	 cin>>s;
	 int  l = 1 , r = s.size() , mid  ,ans =0 ;; 
	 
	 while(l <=r){
	 	mid = (l+r) /2 ;
	 	if(check(mid,'a') || check(mid,'b')){
	 		ans =mid;
	 		l = mid+1;
	 	}
	 	else
	 		r = mid -1;
	 }
	 cout<<ans ; 
	return 0;
}