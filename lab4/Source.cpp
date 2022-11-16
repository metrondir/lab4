#include <conio.h>
#include "OpticalDisc.h"
#include "Winchester.h"
#include "DataHolder.h"
#include <iostream>
#pragma warning(disable : 4996)
int main()
{
			std::ofstream fileopen;
			fileopen.open("myfile.txt", std::ios::trunc);
			std::cout << "OpticalDisc: \n";
			OpticalDisc optical;
			std::cin >> optical;
			std::cout << optical;
			fileopen << optical;
			std::cout << "Winchester: \n";
			Winchester winches;
			std::cin >> winches;
			std::cout << winches;
			fileopen << winches;
			fileopen.close();
			while (!kbhit());
}