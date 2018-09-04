#include <bits/stdc++.h>
const int maxn = 1000000 + 5;
std::vector<int> t_len;
char s[maxn], t[maxn];
int next[maxn];
void get_next() {
	int len = strlen(s);
	int j = 0, k = -1;
	next[0] = -1;
	while (j < len) {
		if (k == -1 || s[j] == s[k]) {
			next[++j] = ++k;
		} else {
			k = next[k];
		}
	}
}

int kmp() {
	int len1 = strlen(s), len2 = strlen(t);
	int cnt = 0;
	for (int i = 0, j = 0; i < len1; i++) {
		if (j < len2 && s[i] == t[j]) {
			j++;
		} else {
			while (true) {
				j = next[j];
				if (j == -1) {
					j = 0;
					break;
				}
				if (s[i] == t[j]) {
					j++;
					break;
				}
			}
		}
		if (j == len2) {
//			cnt++;
			int start = i - len2 + 1;
			if (start != 0 && start != len1 - len2) {
				return true;
			}
		}
	}
//	printf("%d\n", cnt);
	return false;
	
}


int main(void) {
	scanf("%s", s);
//	scanf("%s", t);
	get_next();
	int len = strlen(s);
	int pos = next[len - 1];
	while (pos != -1) {
		if (s[pos] == s[len - 1]) {
			t_len.push_back(pos + 1);
		}
		pos = next[pos];
	}
//	printf("%d\n", t_len.size());
	if (t_len.empty()) {
		puts("Just a legend");
	} else {
		bool found = false;
		for (int i = 0; i < t_len.size(); i++) {
			char ch = s[t_len[i]];
			s[t_len[i]] = '\0';
			strcpy(t, s);
			s[t_len[i]] = ch;
//			puts(s);
//			puts(t);
			if (kmp()) {
				puts(t);
				found = true;
				break;
			}
		}
		if (!found) {
			puts("Just a legend");
		}
		
	}
	
	
	
//	
//	printf(" ");
//	for (int i = 0; i < len; i++) {
//		printf("%c ", s[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < len; i++) {
//		printf("%d ", next[i]);
//	}
//	printf("\n");
	return 0;
}