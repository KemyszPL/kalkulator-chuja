//OCENIACZ CHUJA
//COPYRIGHT 2022 SZYMON LEWANDOWSKI 1MI

#include <iostream>
#include <string>

int main()
{
	int rozmiar;
	std::cout << "jakiego dużego masz?";
	std::cin >> rozmiar;
	std::cout << rozmiar;
	if (rozmiar < 10) {
		std::cout << "\nale mały chuj";
	}
	else {
		std::cout << "\njest ok";
	}
}
