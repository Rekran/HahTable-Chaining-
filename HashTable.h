#include "LinkedList.h"
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
 using namespace std;
#define MAX 20


class HashTable{
	private:
		LinkedList table[MAX];
	public:
		
		int hash(int value);
		unsigned int hash(char *word);
		void loadDictionary(char *path);
		
		void guarda(int value);
		void guarda(char *word);
		
		bool search(char *word);
		
		void print();
		HashTable();
		~HashTable();
};
