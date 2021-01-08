#include <iostream>
#include <fstream>
#include <string>
#include <cerrno>
int main(void)
{
	std::string word, filename;
	std::ifstream ethfile;
	ethfile.open("/sys/class/net/enp0s5/operstate");

	if(ethfile.fail())
	{
		std::cout << "Error to open Operstate" << std::endl;
		return -1;
	}

	ethfile >> word;
	std::cout << "Operstate : " << word << std::endl;

	return 0;
}
