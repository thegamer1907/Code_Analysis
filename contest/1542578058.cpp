#include <iostream>

using namespace std;


int n, k , s1, s2, s3, s0;
int main(){
	
	cin>>n>>k;
	
	if (k == 1){
		bool res = false;
		for (int i = 0; i < n; i++) {
			cin>>s0;
			if (s0 ==0) res = true;
		}
		if(res) cout << "YES"<<endl;
		else cout << "NO"<<endl;
		
	}
	
	
	if (k == 2) {

		bool res0 = false;
		bool res1 = false;
		for (int i = 0; i < n; i++) {
			cin>>s0>>s1;
			if (s0 ==0) res0 = true;
			if (s1 ==0) res1 = true;
		}
		if(res0 && res1) cout << "YES"<<endl;
		else cout << "NO"<<endl;
		
	}
	
	if (k == 3){
		bool res0 = false;
		bool res1 = false;
		bool res2 = false;
		bool res01 = false;
		bool res02 = false;
		bool res12 = false;
		
		for (int i = 0; i < n; i++) {
			cin>>s0>>s1>>s2;
			if (s0 ==0) {
				res0 = true;
			}
			if (s1 ==0) {
				res1 = true;	
			}
			if(s2 == 0){
				res2 = true;
			}
			
			if(s0 ==0  && s1 ==0 ) res01 =true;
			if(s0 ==0  && s2 ==0 ) res02 =true;
			if(s1 ==0  && s2 ==0 ) res12 =true;
		}
		
		
		if((res0 && res12) || (res1 && res02) || (res2 && res01))
			cout << "YES"<<endl;
		else 
			cout << "NO"<<endl;
		
	}
	
	if(k == 4){
		bool res0 = false;
		bool res1 = false;
		bool res2 = false;
		bool res3 = false;
		
		bool res01 = false;
		bool res02 = false;
		bool res03 = false;
		bool res12 = false;
		bool res13 = false;
		bool res23 = false;
		
		bool res012 = false;
		bool res013 = false;
		bool res023 = false;
		bool res123 = false;
		
		for (int i = 0; i < n; i++) {
			cin>>s0>>s1>>s2>>s3;
			if (s0 ==0) {
				res0 = true;
			}
			if (s1 ==0) {
				res1 = true;	
			}
			if(s2 == 0){
				res2 = true;
			}
			if(s3 == 0 ){
				res3 = true;
			}
			
			if(s0 ==0 && s1 ==0) res01 =true;
			if(s0 ==0 && s2 ==0) res02 =true;
			if(s0 ==0 && s3 ==0) res03 =true;
			if(s1 ==0 && s2 ==0) res12 =true;
			if(s1 ==0 && s3 ==0) res13 =true;
			if(s2 ==0 && s3 ==0) res23 =true;
			
			if(s0 ==0 && s1 ==0 && s2 ==0  ) res012 = true;
			if(s0 ==0 && s1 ==0 && s3 ==0  ) res013 = true;
			if(s0 ==0 && s2 ==0 && s3 ==0  ) res023 = true;
			if(s1 ==0 && s2 ==0 && s3 ==0  ) res123 = true;
		}
		
		
		if((res03 && res12) || (res13 && res02) || (res23 && res01)||
		(res0 && res123) || (res1 && res023) || (res2 && res013) || (res3 && res012) )
			cout << "YES"<<endl;
		else 
			cout << "NO"<<endl;
		
		
		
	}
	
}
