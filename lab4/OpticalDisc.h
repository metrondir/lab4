#pragma once
#include "DataHolder.h"
#include<iostream>
class OpticalDisc : public DataHolder
{
		int GenerationNum;
		int AccessTime;
		std::string DataTransferRate;
		std::string Type;
public:
		
		OpticalDisc();
		~OpticalDisc(void);

		int getGenerationNum();
		void setGenerationNum(int GenerationNum);
		int getAccessTime();
		void setAccessTime(int AccessTime);
		std::string getDataTransferRate();
		void setDataTransferRate(std::string DataTransferRate);
		std::string getType();
		void setType(std::string Type);
		friend std::ostream& operator<<(std::ostream& os, const OpticalDisc& so);
		friend std::istream& operator>>(std::istream& is,OpticalDisc& so);

};
