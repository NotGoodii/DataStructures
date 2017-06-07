#include "DynamicArray.h"
#include "LinkedList.h"
#include "BinaryTree.h"
#include "HashTable.h"

void TestDynamicArray();
void TestLinkedLists();
void TestBinaryTrees();
void TestHashTable();
void TestStack();

void main()
{
	//test our dynamic array
	//TestDynamicArray();
	
	//test our linked lists
	TestLinkedLists();

	//test our Binary trees
	//TestBinaryTrees();

	//tests stack
	//TestStack();

	//test Hash table
	//TestHashTable();
}

void TestDynamicArray()
{
	//test construction
	//DynamicArray testArray1;
	
	//test overloaded constructor
	DynamicArray testArray1(20);

	//add values to our dynamic array
	for (int i = 0; i < 20; i++)
	{
		testArray1.Push(i);
	}


	std::cout << "Original:" << std::endl;
	testArray1.Print();
	std::cout << std::endl;

	//insert
	std::cout << "Insert 100 at index 5:" << std::endl;
	testArray1.Insert(100, 5);
	testArray1.Print();
	std::cout << std::endl;

	std::cout << "Insert 555 at index 10:" << std::endl;
	testArray1.Insert(555, 10);
	testArray1.Print();
	std::cout << std::endl;

	std::cout << "Insert 1 at index 25(larger than array size):" << std::endl;
	testArray1.Insert(1, 25);
	testArray1.Print();	
	std::cout << std::endl;

	//[] operator overload
	std::cout << "Sub-script operator overload, element 5 = 1:" << std::endl;
	testArray1[5] = 1;
	testArray1.Print();
	std::cout << std::endl;

	//RemoveAt
	std::cout << "Remove At 5: " << std::endl;
	testArray1.RemoveAt(5);
	testArray1.Print();
	std::cout << std::endl;

	std::cout << "Remove At 10: " << std::endl;
	testArray1.RemoveAt(10);
	testArray1.Print();
	std::cout << std::endl;

	std::cout << "Remove At 25 (invalid index): " << std::endl;
	testArray1.RemoveAt(25);
	testArray1.Print();
	std::cout << std::endl;

	//Remove(int)
	std::cout << "Remove int 3:" << std::endl;
	testArray1.Remove(3);
	testArray1.Print();
	std::cout << std::endl;

	std::cout << "Remove int 25 (non-existent):" << std::endl;
	testArray1.Remove(25);
	testArray1.Print();
	std::cout << std::endl;

	//Find(value)
	int index;
	std::cout << "Returns index of int 4: ";
	index = testArray1.Find(4);
	std::cout << index << std::endl;

	//Find(invalid value)
	std::cout << "Returns index of int 25: ";
	index = testArray1.Find(25);
	std::cout << std::endl;
	
	//Sort
	std::cout << "Sorted array:" << std::endl;
	testArray1.Sort();
	testArray1.Print();
	std::cout << std::endl;

	//Clear
	std::cout << "Cleared array:" << std::endl;
	testArray1.Clear();
	testArray1.Print();
	std::cout << std::endl;

	//test overloader constructor
	//DynamicArray testArray2(20);

}

void TestLinkedLists()
{
	//create linkedlist
	LinkedList numbers;

	//print out details
	std::cout << "PushBack(1),(2),(3),(4)" << std::endl;
	numbers.PushBack(1);
	numbers.PushBack(2);
	numbers.PushBack(3);
	numbers.PushBack(4);
	numbers.Print();

	//print out count
	std::cout << "Count: " << numbers.count << std::endl;

	//add number to start
	std::cout << std::endl << "PushFront(0)" << std::endl;
	numbers.PushFront(0);
	numbers.Print();
	//print out count
	std::cout << "Count: " << numbers.count << std::endl;

	//remove number at index 2
	std::cout << std::endl << "Remove( at index 2 )" << std::endl;
	numbers.Remove(2);
	numbers.Print();
	//print out count
	std::cout << "Count: " << numbers.count << std::endl;

	//insert number at index 1
	std::cout << std::endl << "Insert(10 at index 1)" << std::endl;
	numbers.Insert(10, 1);
	numbers.Print();
	//print out count
	std::cout << "Count: " << numbers.count << std::endl;

	//remove first number
	std::cout << std::endl << "PopFront" << std::endl;
	numbers.PopFront();
	numbers.Print();
	//print out count
	std::cout << "Count: " << numbers.count << std::endl;

	//remove last number
	std::cout << std::endl << "PopBack" << std::endl;
	numbers.PopBack();
	numbers.Print();

	//print out count
	std::cout << "Count: " << numbers.count << std::endl;

	//return start node
	std::cout << std::endl << "Return Start Node address: " << numbers.begin() << std::endl;

	//return last node
	std::cout << std::endl << "Return Last Node address: " << numbers.end() << std::endl;
}

void TestBinaryTrees()
{
	BinaryTree numberTree;

	std::cout << "Original order : ";

	

	for (int i = 0; i < 10; i++)
	{
		int value = rand() % 10;
		std::cout << " " << value << " ";
		numberTree.Insert(value);
	}

	numberTree.Insert(5);
	std::cout << " 5 ";

	std::cout << std::endl;
	numberTree.PrintNodes();

	numberTree.Find(5);
}

void TestHashTable()
{
	HashTable data;

	data.Add("John Smith", 2);
	data.Add("Johnny Joestar", 3);

	std::cout << data.Get("John Smith") << std::endl;
	std::cout << data.Get("Johnny Joestar") << std::endl;
	
	data["Num1"] = 1;
	std::cout << data["Num1"] << std::endl;

	data.Add("John Smith", 11);
	std::cout << data.Get("John Smith") << std::endl;
}

void TestStack()
{

}