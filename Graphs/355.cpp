#include <bits/stdc++.h>
using namespace std;
const int maxn = 55;
char buf[maxn];

int main(void){
	int n,t;
	cin>>n>>t;
	scanf("%s",buf);
	int count = 0;	//��¼�Ѿ��ƶ��Ĵ��� 
	while(count < t){
		for(int i = 0;i < n;){
			if(buf[i] == 'B' && buf[i+1] == 'G')		//���һ������������һ��Ů��
			{
				//���߽���λ�� 
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