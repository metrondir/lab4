#include "Winchester.h"
#include <iostream>
Winchester::Winchester()
{
	setNumberCylinders(1);
	setNumberTracks(1);
	setNumberSectors(1);
	setBrand("Uknown");
}

Winchester::~Winchester(void)
{
}
int Winchester::getNumberCylinders()
{
	return NumberCylinders;
}

void Winchester::setNumberCylinders(int value)
{
	NumberCylinders = value;
}

int Winchester::getNumberTracks()
{
	return NumberTracks;
}

void Winchester::setNumberTracks(int value)
{
	NumberTracks = value;
}

int Winchester::getNumberSectors()
{
	return NumberSectors;
}

void Winchester::setNumberSectors(int value)
{
	NumberSectors = value;
}

std::string Winchester::getBrand(void)
{
	return Brand;
}

void Winchester::setBrand(std::string value)
{
	Brand = value;
}

std::ostream& operator<<(std::ostream& os, const Winchester& so)
{
	os  <<"Winchester: " << "\n\tAmount: " << so.Amount  << "\n\tNumber of cylinders: " << so.NumberCylinders  << "\n\tNumber of tracks: " << so.NumberTracks  << "\n\tNumber of sectors: " << so.NumberSectors << "\n\tBrand name: " << so.Brand;
	return os;
}

std::istream& operator>>(std::istream& is, Winchester& so)
{
	std::cout << "Enter amount of Winchester: \n";
	is >> so.Amount;
	so.setAmount(so.Amount);
	std::cout << "Enter number of cylinders: \n";
	is >> so.NumberCylinders;
	so.setNumberCylinders(so.NumberCylinders);
	std::cout << "Enter number of tracks: \n";
	is >> so.NumberTracks;
	so.setNumberTracks(so.NumberTracks);
	std::cout << "Enter number of sectors: \n";
	is >> so.NumberSectors;
	so.setNumberSectors(so.NumberSectors);
	std::cout << "Enter brand name: \n";
	is >> so.Brand;
	so.setBrand(so.Brand);
	return is;
}
