#include <bits/stdc++.h>

int main(){
	int n;
	std::string passwd;

	std::cin >> passwd >> n;

	bool has_front = false;
	bool has_back = false;

	for(auto i = 0; i < n; ++i){
		std::string b;
		std::cin >> b;

		if(b[1] == passwd[0]) has_front = true;
		if(b[0] == passwd[1]) has_back = true;
		if(b == passwd) has_front = has_back = true;
	}

	if(has_back && has_front)
		std::cout << "YES\n";
	else
		std::cout << "NO\n";

}
