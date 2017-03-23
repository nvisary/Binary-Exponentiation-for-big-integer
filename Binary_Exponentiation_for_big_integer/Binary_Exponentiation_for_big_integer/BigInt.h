#ifndef BIG_INT
#define BIG_INT
#include <vector>
#include <cstdio>
class BigInt {
private: 
	std::vector<char> mass; 
	int size; 
public:
	BigInt(); 
	BigInt(int size); 
	void getIntFromFile(FILE* fp);
	void getIntFromString(std::string str);
	void print(); 
	BigInt operator +(const BigInt& a); 
	BigInt operator *(const BigInt& a);
	BigInt& operator =(const BigInt& a);
	bool operator > (const BigInt& a); 
	bool operator == (const BigInt&a); 
	
	
};

#endif