#ifndef _FILE_H
#define _FILE_H

#include <string>

class File{
	std::string name;
	int count;

public:
	File() {name = ""; count = 0;}

	File(std::string n);

	void setName(std::string a);
	std::string getName() const;
	int getCount() const;
	void increaseCount();
};

#endif
