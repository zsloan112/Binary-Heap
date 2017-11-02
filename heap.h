#ifndef HEAP_H
#define HEAP_H

#include <iostream>

using namespace std;

class heap{
private: 
	//Private Data Members
	int heapSize;
	int heapArr[100];

	//Private Member Functions
	int Parent(int i);
	int LeftChild(int i);
	int RightChild(int i);
	void Heapify(int arr[], int i);
	void BuildHeap(int arr[]);

public:
	//Public Member functions
	int getHeapSize();
	void setHeapSize(int i);
	heap(int size, int arr[]);
	void Insert(int arr[], int key);
	void HeapSort(int arr[]);
	int ExtractMax(int arr[]);
	int Maximum(int arr[]);
	void PrintHeap(int arr[]);
};

#endif