#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,i,res = 0,j;
	string passwd,word;
	vector<string>text;
	cin >> passwd;
	cin >> n;
	while(n--){
		cin >> word;
		text.push_back(word);
	}

	for(i = 0;i < text.size();i++){
		if(text[i] == passwd)
			res = 1;

	}

	for(i = 0;i < text.size();i++){
		if(text[i][1] == passwd[0])
			for(j = 0;j < text.size();j++){
				if(text[j][0] == passwd[1])
					res = 1;
			}
	}

	if(res == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}