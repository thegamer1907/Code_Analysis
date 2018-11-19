#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string str;
string makeStr;
string tmp;
int main() {
	int n;
	bool first_second = false;
	bool second_first = false;
	bool jd = false;
	cin >> str;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (!jd) {
			if (tmp == str)
				jd = true;
			else {
				if (tmp[1] == str[0]) {
					first_second = true;
				}
				if (tmp[0] == str[1]) {
					second_first = true;
				}
				if (first_second && second_first) {
					jd = true;
				}
			}

		}

	}
	if (jd) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}