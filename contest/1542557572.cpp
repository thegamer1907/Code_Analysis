#include <iostream>
using namespace std;
const int maxn=100;
const int maxk=14;
const int maxStringNumber=(1<<(maxk+1));
int n, m;
string S[maxn+1];
string first[(maxn*2)+1];
string last [(maxn*2)+1];
bool sub[(maxn*2)+1][maxStringNumber];

void read();
void initialize();
void debug();
string toString(int);
void addNewSubstrings(int, int, int);
int Hash(string);
int value(string);
void print(int);
int f(int);

int main(){
	read();
	initialize();
	//debug();
	for(int i=n+1; i<=n+m; i++){
		int a, b;
		cin>>a>>b;
		first[i]=first[a];
		last [i]=last [b];
		if(first[i].size()<maxn)
			first[i]=first[i]+first[b];
		if(last [i].size()<maxn)
			last [i]=last [a]+last [i];
		for(int j=1; j<maxStringNumber; j++)
			if(sub[a][j] || sub[b][j])
				sub[i][j]=true;
		addNewSubstrings(i, a, b);
		//print(i);
		cout<<f(i)<<endl;
	}
	return 0;
}

void read(){
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>S[i];
	cin>>m;
}

void initialize(){
	for(int i=1; i<=n; i++){
		first[i]=S[i];
		last [i]=S[i];
	}
	for(int i=1; i<=n; i++)
		for(int j=0; j<S[i].size(); j++)
			for(int k=1; k<=maxk; k++)
				sub[i][Hash(S[i].substr(j, k))]=true;
}

void debug(){
	for(int i=1; i<=n; i++){
		cout<<"String number "<<i<<" contains substrings:"<<endl;
		for(int j=1; j<maxStringNumber; j++)
			if(sub[i][j])
				cout<<toString(j)<<endl;
	}
}

string toString(int number){
	string result;
	int size=1;
	while(number-(1<<size)+1>=(1<<size))
		size++;
	number-=(1<<size)-1;
	while(number>0){
		int digit=number%2;
		if(digit==0)
			result="0"+result;
		else
			result="1"+result;
		number/=2;
	}
	while(result.size()<size)
		result="0"+result;
	return result;
}

void addNewSubstrings(int index, int p, int q){
	for(int i=0; i<last[p].size(); i++){
		for(int j=0; j<first[q].size(); j++){
			string substring=last[p].substr(i, maxk)+first[q].substr(0, j+1);
			sub[index][Hash(substring)]=true;
		}
	}
}

int Hash(string str){
	if(str.size()>maxk)
		return 0;
	return (1<<str.size())-1+value(str);
}

int value(string str){
	int result=0;
	int power=1<<(str.size()-1);
	for(int i=0; i<str.size(); i++){
		if(str[i]=='1')
			result+=power;
		power/=2;
	}
	return result;
}

void print(int index){
	cout<<"String number "<<index<<" ---> first characters:"<<endl;
	cout<<first[index]<<endl;
	cout<<"String number "<<index<<" ---> last  characters:"<<endl;
	cout<<last [index]<<endl;
	cout<<"String number "<<index<<" contains substrings:"<<endl;
	for(int j=1; j<maxStringNumber; j++)
		if(sub[index][j])
			cout<<toString(j)<<endl;
}

int f(int index){
	int k=maxk;
	while(k>0){
		bool b=true;
		for(int i=(1<<k)-1; i<=(1<<(k+1))-2; i++){
			if(!sub[index][i]){
				b=false;
				break;
			}
		}
		if(b)
			break;
		k--;
	}
	return k;
}
