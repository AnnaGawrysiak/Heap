#include "pch.h"
#include "../Max_heap_arr/Only_for_testing.h"

TEST(Top_Test, Handles_Empty_Heap) 
{
	Only_for_testing my_heap;
  EXPECT_EQ(1, my_heap.is_empty());
}

TEST(Top_Test, Handles_NonEmpty_Heap)
{
	Only_for_testing my_heap;
	my_heap.insert(5);
	EXPECT_EQ(0, my_heap.is_empty());
}

TEST(Insert_Test, Handles_Multiple_Insertion)
{
	Only_for_testing my_heap;
	my_heap.insert(7);
	my_heap.insert(4);
	my_heap.insert(1);
	my_heap.insert(9);
	my_heap.insert(8);
	my_heap.insert(12);
	my_heap.insert(11);
	
	//std::vector<int> expected = {1, 4, 7, 8, 9, 11, 12};

	EXPECT_EQ(12, my_heap[0]);
}