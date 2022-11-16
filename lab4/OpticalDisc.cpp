#include "OpticalDisc.h"
#include <string>
#include <iostream>
OpticalDisc::OpticalDisc()
{
	setGenerationNum(1);
	setAccessTime(80);
	setDataTransferRate("Uknown");
	setType("Uknown");
}

OpticalDisc::~OpticalDisc(void)
{
}
int OpticalDisc::getGenerationNum()
{
	return GenerationNum;
}

void OpticalDisc::setGenerationNum(int value)
{
	GenerationNum = -1;
	while (GenerationNum == -1) {
		try {
			if (value <= 4 && value > 0) { GenerationNum = value; }

			else
			{
				throw("");
			}

		}
		catch (const char* err) {
			std::cout << "Error type: " << err << "\n Write again but correctly: ";
			std::cin >> value;
			std::cout << std::endl;
		}
	}
}

int OpticalDisc::getAccessTime()
{
	return AccessTime;
}

void OpticalDisc::setAccessTime(int value)
{
	AccessTime = value;
}

std::string OpticalDisc::getDataTransferRate()
{
	return DataTransferRate;
}

void OpticalDisc::setDataTransferRate(std::string value)
{
	 DataTransferRate = value; 	
}

std::string OpticalDisc::getType()
{
	return Type;
}

void OpticalDisc::setType(std::string value)
{
	Type = value;
}
std::ostream& operator<<(std::ostream& os, const OpticalDisc& so)
{
	os <<"OpticalDisc: " << "\n\tAmount: " << so.Amount  << "\n\tGeneration number " << so.GenerationNum  << "\n\tAccess time: " << so.AccessTime  << "\n\tData transfer time: " << so.DataTransferRate << "\n\tType: " << so.Type << "\n";
	return os;
}

std::istream& operator>>(std::istream& is, OpticalDisc& so)
{
	std::cout << "Enter amount of optical disc: \n";
	is >> so.Amount;
	so.setAmount(so.Amount);
	std::cout << "Enter generation number: \n";
	is >> so.GenerationNum;
	so.setGenerationNum(so.GenerationNum);
	std::cout << "Enter access time: \n";
	is >> so.AccessTime;
	so.setAccessTime(so.AccessTime);
	std::cout << "Enter data transfer rate: \n";
	is >> so.DataTransferRate;
	so.setDataTransferRate(so.DataTransferRate);
	std::cout << "Enter Type of optical disc: \n";
	is >> so.Type;
	so.setType(so.Type);
	return is;
}
