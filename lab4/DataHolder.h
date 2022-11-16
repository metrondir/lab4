#pragma once
#include<fstream>
#include <iostream>
class DataHolder
{
protected:
	std::string Amount;
public:
	DataHolder();
	~DataHolder(void);

	std::string getAmount();
	void setAmount(std::string Amount);

};

