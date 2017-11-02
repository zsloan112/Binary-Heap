#include "heap.h"

//Private Member Functions
int heap::Parent(int i){
	return (i-1)/2;
}

int heap::LeftChild(int i){
	return (2 * i) + 1;
}

int heap::RightChild(int i){
	return (2 * i ) + 2;
}

int heap::getHeapSize(){
	return heapSize;
}

void heap::setHeapSize(int i){
	heapSize = i;
}

void heap::Heapify(int arr[], int i){
	int largest = i;
	int L = LeftChild(i);
	int R = RightChild(i);
	if (L < heapSize && arr[L] > arr[i])
		largest = L;
	else{
		largest = i;
	}

	if (R < heapSize && arr[R] > arr[largest]){
		largest = R;
	}
	if(largest != i){
		int temp = arr[i];
		arr[i] = arr[largest];
		arr[largest] = temp;
		Heapify(arr, largest);
	}
}


void heap::BuildHeap(int arr[]){
	for(int i = (heapSize/2)-1; i >= 0; i--){
		Heapify(arr, i);
	}
}


//Public Member Functions
heap::heap(int size, int arr[]){
	heapSize = size;

	BuildHeap(arr);

}

void heap::Insert(int arr[], int key){
	heapSize++;
	int i = heapSize - 1;

	while(i > 0 && arr[Parent(i)] < key){
		//swap(arr[i], arr[Parent(i)]);
		arr[i] = arr[Parent(i)];
		i = Parent(i);
	}

	arr[i] = key;
}

void heap::HeapSort(int arr[]){
	for(int i = heapSize - 1; i >= 0; i--){
		int temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;

		heapSize = heapSize - 1;
		Heapify(arr, 0);
	}
}



int heap::ExtractMax(int arr[]){
	if(heapSize < 1){
		throw out_of_range("Heap Underflow");
	}else{
		int max = arr[0];
		arr[0] = arr[heapSize - 1];
		heapSize = heapSize - 1;
		Heapify(arr, 0);
		return max;
	}
}

int heap::Maximum(int arr[]){
	return arr[0];
}


void heap::PrintHeap(int arr[]){

	for(int i = 0; i < heapSize; i++){
		cout << arr[i] << " ";
	}

}
