#include "file.h"
#include <iostream>

using namespace std;

File::File(std::string n){
	n = name;
	count = 0;
}

void File::setName(string n){
	name = n;
}

string File::getName(){
	return name;

}

int File::getCount(){
	return count;

}

void File::increaseCount(){
	count = count+1;

}

