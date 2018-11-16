#include<bits/stdc++.h>

using namespace std;

int main()
{
	char nafee[100];
	cin>>nafee;

	int i,length=0;
	for(i=0;nafee[i]!='\0';i++) {
		length++;
	}
	int counter,counter1;

	counter=0;

	for(i=0;i<length;i++) {
		if((nafee[i]=='0' && nafee[i+1]=='0' && nafee[i+2]=='0' &&
			nafee[i+3]=='0' && nafee[i+4]=='0' && nafee[i+5]=='0' &&
			nafee[i+6]=='0') || (nafee[i]=='1' && nafee[i+1]=='1' && nafee[i+2]=='1' &&
			nafee[i+3]=='1' && nafee[i+4]=='1' && nafee[i+5]=='1' &&
			nafee[i+6]=='1')) {
			counter++;
		}
	}
	if(counter>=1) {
		cout<<"YES";
	}
	else if(counter==0 || length<=6) {
		cout<<"NO";
	}


	return 0;

}
