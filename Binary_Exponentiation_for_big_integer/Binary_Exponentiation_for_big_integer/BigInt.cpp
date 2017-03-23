#include "BigInt.h"

BigInt::BigInt()
{
	mass.reserve(100); 
	size = 0; 
}
BigInt::BigInt(int _size)
{	
	size = _size; 
	for (int i = 0; i < size; i++)
	{
		mass.push_back(0); 
	}
}

void BigInt::getIntFromString(std::string str)
{
	for (int i = str.length() - 1; i != -1; i--) {
		mass.push_back(str[i] - '0');
		size++;
	}
}

void BigInt::print()
{
	for (int i = mass.size() - 1; i != -1; i--)
	{
		printf("%d", mass[i]); 
	}
}

bool BigInt::operator> (const BigInt& a)
{
	if (size > a.size)
		return true; 
	if (size < a.size)
		return false; 
	else {
		for (int i = size - 1; i != -1; i--) {
			if (mass[i] > a.mass[i]) 
				return true;
			if (mass[i] < a.mass[i])
				return false; 
		}
	}
}

bool BigInt::operator== (const BigInt& a)
{
	if (size != a.size)
		return false;
	else {
		for (int i = size - 1; i != -1; i--) {
			if (mass[i] != a.mass[i])
				return false;
		}
	}
	return true; 
}
BigInt BigInt::operator+(const BigInt& a)
{
	int bigsize;
	int smallsize; 
	if (size > a.size || size == a.size){
		smallsize = a.size; 
		bigsize = size;
	}
	else {
		bigsize = a.size;
		smallsize = size; 
	}
			
	BigInt temp(bigsize);	
	for (int i = 0; i < bigsize; i++)
	{
		if (i < smallsize) {
			int sum = mass[i] + a.mass[i];
			int ind = 0;
			while (sum > 9) {
				ind++;
				sum %= 10;
				temp.mass[i + ind]++;
			}
			temp.mass[i] += sum;

		}
		else {
			temp.mass[i] = bigsize == a.size ? a.mass[i] : mass[i]; 
		}
	}
	return temp; 
}

BigInt& BigInt::operator =(const BigInt& a)
{
	this->size = a.size; 
	this->mass.clear(); 
	for (int i = 0; i < size; i++) {
		this->mass.push_back(a.mass[i]); 
	}
	return *this;
}

BigInt BigInt::operator*(const BigInt& a)
{
	int bigsize;
	int smallsize;
	if (size > a.size || size == a.size){
		smallsize = a.size;
		bigsize = size;
	}
	else {
		bigsize = a.size;
		smallsize = size;
	}

	BigInt temp(bigsize + smallsize);
	for (int i = 0; i < bigsize; i++)
	{
		for (int j = 0; j < smallsize; j++)
		{
			
		}
	}
	return temp;
}