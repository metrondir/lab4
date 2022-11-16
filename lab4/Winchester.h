#pragma once
#include "DataHolder.h"
class Winchester : public DataHolder
{
	int NumberCylinders;
	int NumberTracks;
	int NumberSectors;
	std::string Brand;
public:
	Winchester();
	~Winchester(void);

	int getNumberCylinders();
	void setNumberCylinders(int NumberCylinders);
	int getNumberTracks();
	void setNumberTracks(int NumberTracks);
	int getNumberSectors();
	void setNumberSectors(int NumberSectors);
	std::string getBrand();
	void setBrand(std::string Brand );
	friend std::ostream& operator<<(std::ostream& os, const Winchester& so);
	friend std::istream& operator>>(std::istream& is, Winchester& so);
};

