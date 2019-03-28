#include "HashTable.h"

using namespace std;


int main(int argc, char** argv) {

HashTable ht = HashTable();

ht.loadDictionary("exemplo.txt");
ht.guarda("pneumoultramicroscopicossilicovulcanoconiotico");

if(ht.search("pneumoultramicroscopicossilicovulcanoconiotico")){
	cout<<"ta"<<endl;
}else{
	cout<<"nao ta"<<endl;
}


	return 0;
}
