#include <bits/stdc++.h>

using namespace std;

const int Z = (int)1e5 + 111;

bool used[Z];

template <class T>
class MyQueue {
public:
	MyQueue() {
		start_ = end_ = nullptr;
	}

	void push(T x) {
		if (start_ == nullptr) {
			start_ = new Node();
			end_ = start_;
		} else {
			end_->next = new Node();
			end_ = end_->next;
		}
		end_->value = x;
	}

	T front() const {
		if (start_ == nullptr) {
			throw runtime_error("Queue is empty");
		}
		return start_->value;
	}

	void pop() {
		if (start_ == nullptr) {
			throw runtime_error("Queue is empty");
		}
        if (start_ == end_) {
            delete start_;
        	start_ = end_ = nullptr;
		} else {
		    Node *p = start_;
			start_ = start_->next;
			delete p;
		}
	}

	bool empty() const {
		return start_ == nullptr;
	}

private:
	struct Node {
		T value;
		Node *next;

		Node() {
			next = nullptr;
		}
	};

	Node *start_;
	Node *end_;
};

int main() {
	int n, m;
	cin >> n >> m;
	queue <pair<int, int> > q;
	q.push({0, n});
	while (!q.empty()) {
		int k = q.front().first;
		int v = q.front().second;
		q.pop();
		if (used[v]) continue;
		used[v] = 1;
		if (v == m) {
			cout << k;
			return 0;
		}
		if (v > 0) q.push({k+1,v-1});
		if (v <= m * 2) q.push({k+1,v * 2});
	}
	return 0;
}