#include "word.h"
#include "file.h"
#include <iostream>

using namespace std;

Word::Word(std::string name, File f){
	word = name;
	file[0] = f;
	totalCount = 1;
}
void Word::addFile(File f){
	for(int i = 0; i < 10; i++){
		file[i] = f;
		if(file[i].getCount() > 0){
		totalCount += file[i].getCount();
		
		}

	}
}

void Word::setWord(string a){
	word = a;
	total = 1;
}

int Word::getTotal() const{
	return totalCount;

}

string Word::getWord() const{
	return word;

}

void Word::increaseTotal(){
	totalCount = totalCount+1;
}





