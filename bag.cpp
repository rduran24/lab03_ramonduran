#include "bag.h"
#include "word.h"
#include <iostream>

using namespace std;

void Bag::print_words() const{
	for(int i = 0; i < LIMIT; i++){
		if(container[i].getTotal() == -1){
			return;
		}
		else{
			cout << container[i].getWord() << "::" << container[i].getTotal() << endl;
		}
	}
}

void Bag::addWord(string w, File f){
	for(int i = 0; i<LIMIT; i++){
		if(container[i].getTotal() == -1){
			container[i].setWord(w,f.getName());
			break;
		}
		if(container[i].getTotal() == -1){
			container[i].increaseTotal();
			break;
		}
		container[i].addFile(f);
	}
}





