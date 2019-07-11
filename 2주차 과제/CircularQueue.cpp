
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;


class CircularQueue{
private:
	int capacity = 10;
	int size;
	int* data;
	int* head;
	int* tail;
public:
	CircularQueue(int cap=10){
		this->capacity = cap;
		this->data = new int[this->capacity];
		this->head = data;
		this->tail = data;
		this->size = 0;
	}
	
	void Add(int value){
		if (size == capacity){
			throw invalid_argument("QUEUE FULL");
		}
		// ------------------------------------
		// Implement your Code Here
		
		
		
		
		
		// ------------------------------------
	}

	int Pop(){
		if (size == 0){
			throw invalid_argument("QUEUE EMPTY");
		}
		// ------------------------------------
		// Implement your Code Here
		
		
		
		
		return 0;
		// ------------------------------------
	}

	int Tail(){
		return *(this->tail);
	}

};



int main(){

	// Input Queue Capacity
	int cap = 0;
	cin >> cap;
	CircularQueue circularQueue { cap };	
	
	int inputs = 0;
	// Input length
	cin >> inputs;
	for (int i=0;i<inputs;i++){
		// Input keyword
		string keyword;
		cin >> keyword;
		int value;
		if (keyword == "ADD"){
			cin >> value;
			try							{ circularQueue.Add(value); }
			catch (invalid_argument& e)	{ cout << e.what() << endl; }
		}
		else if (keyword == "POP"){
			try							{ cout << circularQueue.Pop() << endl; }
			catch (invalid_argument& e)	{ cout << e.what() << endl; }
			//int v = circularQueue.Pop();
			//if (v >= 0)
				//cout << v << endl;
		}
		else if (keyword == "TAIL"){
			cout << circularQueue.Tail() << endl;
		}
	}	
	return 0;
}
