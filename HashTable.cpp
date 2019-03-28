#include "HashTable.h"


HashTable::HashTable(){
}

bool HashTable::search(char *word){
	
	LinkedList &L = this->table[this->hash(word)];
	
	Node *aux = L.getHead();
	
while(aux != NULL){
	
	if(strcmp(aux->word,word) == 0){
		return true;
	}
	aux = aux->Next;
	
}
	
	
	return false;
}

void HashTable::loadDictionary(char *path){
string line;
  
  ifstream myfile(path);
  if (myfile.is_open())
  {
    while ( getline(myfile,line) )
    {
    
    	int n = line.length() + 1;
		char *char_array = new char[n];	
    	strcpy(char_array, line.c_str()); 
    	this->guarda(char_array);
    }
    myfile.close();
  }
	
}

HashTable::~HashTable(){
}

int HashTable::hash(int value){
	return value%MAX;
}

unsigned int HashTable::hash(char *word){
	int size = strlen(word);
	int i;
	unsigned int value = 5381;
	
	for(i = 0;i< size;i++ ){
	
	value += (value << 5)  + word[i];
	
	}
	return value%MAX;
}


void HashTable::guarda(int value){
	LinkedList &l = this->table[this->hash(value)];
	l.prepend(value);
}

void HashTable::guarda(char *word){
	LinkedList &l = this->table[this->hash(word)];
	l.prepend(word);
}

void HashTable::print(){
	
	for(int i = 0; i < MAX ; i++){
		LinkedList &l = this->table[i];
		std::cout << "Index "<< i << std::endl; 
		l.print();
		std::cout << std::endl;
	}
}
