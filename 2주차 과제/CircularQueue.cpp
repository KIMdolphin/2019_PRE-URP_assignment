
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
		this->capacity = cap; //원형큐의 최대 수용량
		this->data = new int[this->capacity]; //데이터를 담고 있는 배열
		this->head = data; //큐에 데이터가 들어갈 장소를 가리킴
		this->tail = data; //큐에서 데이터가 빠지는 장소를 가리키는 포인터
		this->size = 0;
	}
	
	void Add(int value){
		if (size == capacity){
			throw invalid_argument("QUEUE FULL");
		}
		// ------------------------------------
		size++;
		head++;
		CircularQueue[head] = value;

		return 0;
		// ------------------------------------
	}

	int Pop(){
		if (size == 0){
			throw invalid_argument("QUEUE EMPTY");
		}
		// ------------------------------------
		int remove_data = CircularQueue[tail];
		tail++;
		size--;

		return remove_data;
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
