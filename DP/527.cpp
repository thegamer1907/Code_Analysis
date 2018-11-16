#include <iostream>
#include <vector>

using namespace std;

class bit
{
  private:
	int *elems;
	int size;

  public:
	bit(int size) : size(size)
	{
		elems = new int[size + 1];
		for (int i = 0; i <= size; i++)
			elems[i] = 0;
	}

	~bit()
	{
		delete elems;
	}

	void add(int pos, int v)
	{
		// Update element at pos
		elems[pos] += v;

		// Update right sibilings and all right parents
		int next = pos + (pos & -pos);
		while (next < size)
		{
			elems[next] += v;
			next = next + (next & -next);
		}
	}

	int sum(int i)
	{
		int s = elems[i];
		int prev = i - (i & -i);
		while (prev > 0)
		{
			s += elems[prev];
			prev = prev - (prev & -prev);
		}

		return s;
	}

	int rangeSum(int a, int b)
	{
		int sa = sum(a - 1);
		int sb = sum(b - 1);

		return sb - sa;
	}
};

int main()
{
	int n, x, y;
	string s;

	cin >> s;

	bit b(s.length());

	for (int i = 0; i < s.length(); i++)
	{
		if(s[i] == s[i + 1]) b.add(i + 1, 1);
	}

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cin >> y;

		cout << b.rangeSum(x, y) << endl;
	}

	return 0;
}