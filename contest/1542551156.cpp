//============================================================================
// Name        : codeforces.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	string password;
	cin >> password;
	char first_char = password[0] , second_char = password[1];
	int n; cin >> n;
	string words[n];
	for (int i = 0 ; i < n ; i++)
		cin >> words[i];

	bool all_found = false , in_one_word = false , distinct = false;
	vector <int> first_indices;
	vector <int> second_indices;
	bool first = false , second = false;
	for (int i = 0 ; i < n ; i++){
		string word = words[i];
		if( (first_char == word[0] && second_char == word[1]) ||
				(first_char == word[1] && second_char == word[0]))
			in_one_word = true;

		for (int j = 0 ; j < 2 ; j++){
			if (first_char == word[j]){
				first = true;
				first_indices.push_back(j);
			}
			if (second_char == word[j]){
				second = true;
				second_indices.push_back(j);
			}

		}
		if (first && second)
			all_found = true;
	}

	int first_size = first_indices.size();
	int second_size = second_indices.size();

	for (int i = 0 ; i < first_size ; i++){
		for (int j = 0 ; j < second_size ; j++){
			if (first_indices[i] != second_indices[j] &&
					(first_indices[i] == 1 && second_indices[j] == 0))
				distinct = true;
		}
	}

//	cout << all_found << endl;
//	cout << in_one_word << endl;
//	cout << distinct << endl;

	if ((all_found && in_one_word) || (all_found && distinct))
		cout << "YES";
	else
		cout << "NO";



	return 0;
}
