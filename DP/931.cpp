#include <bits/stdc++.h>

using namespace std;

int countOnes(vector<int> vec, int SIZE)
{
	int ones = 0;
	for(int l = 0; l < SIZE; l++){
      if(vec[l] == 1){
      	ones++;
      }
	}
	return ones;
}

int main()
{
int n;
cin>>n;

int SIZE = n;
vector<int> vec;
vector<int> ones;
vector<int> original;

while(n--){
 int x;
 cin>>x;
 vec.push_back(x);
}

original = vec;
for(int i = 0; i < SIZE; i++){
    vec = original;
	for(int j = i; j < SIZE; j++){
		if(original[j] == 0){
			vec[j] = 1;
		}
		if(original[j] == 1){
			vec[j] = 0;
		}
		int amount = countOnes(vec, SIZE);
		ones.push_back(amount);
	}
}


int maxNum = 0;
for(int i = 0; i < ones.size(); i++){

 if(ones[i] > maxNum){
 	maxNum = ones[i];
 }
}

cout<<maxNum;

return 0;
}
