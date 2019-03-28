#include "Header.h"
#include <iostream>

class LinkedList{
	private:
		Header header;
	public:
		LinkedList();
		~LinkedList();
		void prepend(int value);
		void prepend(char *word);
		void append (int value);
		void print();
		int getSize();
		Node* getHead();
		
};
