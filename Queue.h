#ifndef __Queue_H
#define __Queue_H

// Data structure Queue

#include <iostream>
#include <list>
using namespace std;

template <typename T>

class Queue{
		//Attributes
	private:
		list<T> storage;
	public:
		// Constructor
		Queue(): storage() {}

		// Destructor
        ~Queue() = default;
		
		// Return size Queue
		unsigned int size() const{ return storage.size(); }
		
		// Insert an element into the Queue
		void push(const T& e){ storage.push_back(e); }
		
		// Remove an element from the Queue
		void pop(){ storage.pop_front(); }
	
		// Return front Queue
		T front() { return storage.front(); }
		
		// Evaluate if the Queue is empty
		bool empty() const{ return storage.empty(); }
};
#endif
