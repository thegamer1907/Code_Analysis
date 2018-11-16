#include <iostream>
using namespace std;

void swap(int a ,int b){
	int temp = a;
		a = b;
		b = temp;

}

int main(){
	int t,n;
	string s;
	int temp;
	cin>>n>>t;
	cin>>s;
	for(int k =0 ; k < t ; k++){
		for(int i = 0 ; s[i]!= '\0'; ++i){


		if (s[i] == 'B' && s[i+1]== 'G')
	{	// while(y>0){
		swap(s[i],s[i+1]);
		i++;
	}}
}
	cout<<s<<endl;


}
