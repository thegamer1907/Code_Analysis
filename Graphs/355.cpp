#include <bits/stdc++.h>
using namespace std;
const int maxn = 55;
char buf[maxn];

int main(void){
	int n,t;
	cin>>n>>t;
	scanf("%s",buf);
	int count = 0;	//记录已经移动的次数 
	while(count < t){
		for(int i = 0;i < n;){
			if(buf[i] == 'B' && buf[i+1] == 'G')		//如果一个男生后面有一个女生
			{
				//两者交换位置 
				char temp = buf[i];
				buf[i] = buf[i+1];
				buf[i+1] = temp;
				i = i+2;	
			}
			else i++;
		}
		count++;
	}
	
	printf("%s",buf);
	return 0;
}