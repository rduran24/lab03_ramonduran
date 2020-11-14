#ifndef _BAG_H
#define _BAG_H

#include <string>
#include "word.h"

#define LIMIT 10000

class Bag{

	Word container[LIMIT];

public:
	void print_words() const;

	void addWord(std::string w, File f);
};

#endif

