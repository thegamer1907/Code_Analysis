#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string en;
	cin>>en;
	int i,j,k,l=en.length();
	for(i=0;i<l;i++){
		if(en[i]=='8'||en[i]=='0'){
			printf("YES\n%c\n",en[i]);
			return 0;
		}
	}
	int can;
	for(i=0;i<l;i++){
		for(j=i+1;j<l;j++){
			can=(en[i]-'0')*10+en[j]-'0';
			if(can%8==0){
				printf("YES\n%d\n",can);
				return 0;
			}
		}
	}
	for(i=0;i<l;i++){
		for(j=i+1;j<l;j++){
			for(k=j+1;k<l;k++){
				can=(en[i]-'0')*100+(en[j]-'0')*10+en[k]-'0';
				if(can%8==0){
					printf("YES\n%d\n",can);
					return 0;
				}
			}
		}
	}
	printf("NO\n");
	 
	return 0;
}