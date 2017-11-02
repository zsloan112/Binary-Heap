#include <iostream>
#include "heap.h"

using namespace std;

int main(){
	int arr[100] = {4, 12, 3, 19, 23, 5, 32, 11, 2, 24};
	
	int size = 10;
	int selection;


	/*-----------------------------*
	|CheckList:					   |
	|	-BuildHeap: Done           |
	|   -Heapify: Done             |
	|	-PrintHeap: Done		   |
	|	-HeapSort: Done            |
	|	-Extract Max: Done         |
	|	-Maximum Value: Done	   |
	|	-Insert: NOT DONE          |
	*------------------------------*/


	heap h1(size, arr);
	
	while(selection != 0){
		cout << "Main Menu:" << endl;
		cout << "|------------------------|" << endl;
		cout << "| 1.) Insert Element     |" << endl;
		cout << "| 2.) Maximum Value      |" << endl;
		cout << "| 3.) Extract Maximum    |" << endl;
		cout << "| 4.) Print Heap         |" << endl;
		cout << "| 5.) Heap Sort          |" << endl;
		cout << "| 0.) Quit Program       |" << endl;
		cout << "|------------------------|" << endl;
		cout << "Selection: ";
		cin >> selection;

		cout << endl;
		if(selection == 1){
			int key;
			cout << "Please input a number to insert into the heap: ";
			cin >> key;
			h1.Insert(arr, key);
		}else if(selection == 2){
			cout << "Maximum Value of the heap: " << h1.Maximum(arr) << endl << endl;
		}else if(selection == 3){
			cout << "Extracting max value from the heap..." << endl;
			cout << endl;
			h1.ExtractMax(arr);
		}else if(selection == 4){
			h1.PrintHeap(arr);
			cout << endl << endl;
		}else if(selection == 5){
			h1.HeapSort(arr);
			for(int i = 0; i < size; i++){
				cout << arr[i] << " ";;
			}
			cout << endl;
		}
	}

	cout << endl;
	return 0;
}