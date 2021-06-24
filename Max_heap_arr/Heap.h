#pragma once
#include <vector>

class Heap
{
private:
	std::vector<int> vector_representation;
	int size;
	inline int find_a_parent_index(int index);
	inline int find_left_child_index(int index);
	inline int find_right_child_index(int index);

public:
	friend class Only_for_testing;
	Heap();
	int& operator[](int index);
	void insert(int value);
	bool is_empty();
	void pop();
	int top();
	void heapify_down(int index);
	void print();
};

