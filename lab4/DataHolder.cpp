#include "DataHolder.h"
#include <iostream>
DataHolder::DataHolder()
{
	setAmount("Uknown");
}

DataHolder::~DataHolder(void)
{
}
std::string DataHolder::getAmount()
{
	return Amount;
}
void DataHolder::setAmount(std::string value)
{
	Amount = value;
}
