#include <iostream>
#include <string>
#include "BigInt.h"
int main() {
	freopen("out.txt", "w", stdout);
	std::string str1("1238398939920322390199021209"); 
	std::string str2("4812021091930912309123091293");
	BigInt Bint1; 
	Bint1.getIntFromString(str1);
	Bint1.print(); 
	std::cout <<std::endl<<"+" <<std::endl; 
	BigInt Bint2; 
	Bint2.getIntFromString(str2); 
	Bint2.print(); 
	BigInt Bint3; 
	Bint3 = Bint1 + Bint2;
	
	std::cout << std::endl;
	std::cout << "----------------------------------------------------------------------------------------------------------------\n";
	Bint3.print(); 
	return 0;
}