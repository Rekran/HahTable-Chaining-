#include "LinkedList.h"

LinkedList::LinkedList(){	
}
LinkedList::~LinkedList(){
	
}

int LinkedList::getSize(){
	
	return this->header.size;
}

Node* LinkedList::getHead(){
	
	return this->header.head;
}


void LinkedList::print(){
	Node *n = this->header.head;
	for(int i = 0;i < this->header.size; i++){
		std::cout<<"["<<i<<"]"<<n->word<<" ";
		n = n->Next;
		
		if(i%10 == 0 && i != 0)
			std::cout<<std::endl;	
 	}
}

void LinkedList::prepend(char *word){
	if(header.head == NULL){
		Node *N1 = new Node();
		N1->word = word;
		
		this->header.head = N1;
		this->header.tail = N1;
		
		this->header.size += 1;	
			
	}else{
		
		Node *N1 = new Node();
		N1->word = word;
		
		N1->Next = header.head;
		this->header.head = N1;
		
		this->header.size += 1;	
	}

};


void LinkedList::prepend(int value){
	if(header.head == NULL){
		Node *N1 = new Node();
		N1->Value = value;
		
		this->header.head = N1;
		this->header.tail = N1;
		
		this->header.size += 1;	
			
	}else{
		
		Node *N1 = new Node();
		N1->Value = value;
		
		N1->Next = header.head;
		this->header.head = N1;
		
		this->header.size += 1;	
	}

};

void LinkedList::append(int value){
	
	if(this->header.head == NULL){
		
		Node *N1 = new Node();
		N1->Value = value;
		
		this->header.head = N1;
		this->header.tail = N1;
		
		this->header.size += 1;	
			
	}else{
		
		Node *N1 = new Node();
		N1->Value = value;
		
		this->header.tail->Next = N1;
		this->header.tail = N1;		
		this->header.size += 1;	
	}

};
