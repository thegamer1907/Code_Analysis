#include <iostream>

using namespace std;

int main() {
	char s[101];
	cin.sync_with_stdio(false);
	cin.getline(s, 101);
	for (char* ps = s; *ps != '\0'; ++ps) {
		if (*ps == *(ps + 6)) {
			bool found = true;
			for (char* ps2 = ps + 1; ps2 != ps + 6; ++ps2)
				if (*ps != *ps2) {
					found = false;
					break;
				}
			if (found) {
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
}
