#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <math.h>
#define ll long long

using namespace std;

class Heap
{
	int size = 0;
	vector<int> items;

public:

	int LeftChildIndex(int index)
	{
		return index * 2 + 1;
	}

	int RightChildIndex(int index)
	{
		return index * 2 + 2;
	}

	int ParentIndex(int index)
	{
		return (index - 1) / 2;
	}

	bool HasLeftChild(int index)
	{
		return (index * 2 + 1) < size;
	}

	bool HasRightChild(int index)
	{
		return (index * 2 + 2) < size;
	}

	int GetMin()
	{
		return items[0];
	}

	void Add(int newValue)
	{
		items.push_back(newValue);
		size++;
		HeapifyUp(size - 1);
	}

	void Remove(int newValue)
	{
		for (int i = 0; i < size; i++)
		{
			if (items[i] == newValue)
			{
				items[i] = items[size - 1];
				size--;
				items.erase(items.begin() + size);
				HeapifyDown(i);
				break;
			}
		}
	}

	void HeapifyUp(int index)
	{
		while (index != 0)
		{
			int parentIndex = ParentIndex(index);
			if (items[index] > items[parentIndex])
				break;
			swap(index, parentIndex);
			index = parentIndex;
		}
	}

	void HeapifyDown(int index)
	{
		while (LeftChildIndex(index) < size)
		{
			int leftChildIndex = LeftChildIndex(index);
			int rightChildIndex = RightChildIndex(index);
			int smallIndex = leftChildIndex;
			if (rightChildIndex < size && items[rightChildIndex] < items[leftChildIndex])
				smallIndex = rightChildIndex;

			if (items[smallIndex] > items[index])
				break;

			swap(smallIndex, index);
			index = smallIndex;
		}
	}

	void swap(int i1, int i2)
	{
		int temp = items[i1];
		items[i1] = items[i2];
		items[i2] = temp;
	}
};

void sort(vector<int>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		int min = 101;
		int index;
		for (int j = i; j < a.size(); j++)
		{
			if (min > a[j])
			{
				min = a[j];
				index = j;
			}
		}
		int temp = a[i];
		a[i] = min;
		a[index] = temp;
	}
}

void resort(vector<int>& a)
{
	int i = 1;
	while (i < a.size() && a[i-1] > a[i])
	{
		int temp = a[i];
		a[i] = a[i-1];
		a[i-1] = temp;
		i++;
	}
		
	
}

int main()
{

	int m, n;
	cin >> n >> m;

	vector<int> a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a);

	int max = a[n - 1] + m;

	while (m--)
	{
		a[0]++;
		resort(a);
	}

	cout << a[n-1] << " " << max << endl;
	
	return 0;
}