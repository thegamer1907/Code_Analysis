#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char s[100000];
	cin>>s;
	int flag=0,count=0;
	char *ptr=NULL;
	ptr=strstr(s,"AB");
	if(ptr!=NULL){
		*ptr=*ptr+32;
		ptr++;
		*ptr=*ptr+32;
		count++;
	}
	ptr=NULL;
	ptr=strstr(s,"BA");
	if(ptr!=NULL)
		count++;
	if(count==2) flag++;
	count=0;
	ptr=NULL;
	for(int i=0;s[i]!='\0';i++) if(s[i]>=97&&s[i]<=122) s[i]=s[i]-32;
		ptr=strstr(s,"BA");
	if(ptr!=NULL){
		*ptr=*ptr+26;
		ptr++;
		*ptr=*ptr+26;
		count++;
	}
	ptr=strstr(s,"AB");
	if(ptr!=NULL)
		count++;
	if(count==2) flag++;
	if(flag!=0) cout<<"YES";
	else cout<<"NO";
}
