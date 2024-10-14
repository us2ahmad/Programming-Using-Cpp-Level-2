#pragma once
#include <iostream>
using namespace std;

namespace StatusNumberLib 
{
	enum enPerfectOrNotPerfect {Perfect,NotPerfect};
	enum enPrimeOrNotPrime {Prime,NotPrime};
	enum enOddOrEven {Odd=0,Even=1};

	enPerfectOrNotPerfect CheckNumberIsPerfect(short number)
	{
		short sum = 0;
		for (short i = 1; i <= number / 2 ; i++)
		{
			if( number % i == 0)
				sum += i;
		}
		
		return sum == number ? enPerfectOrNotPerfect::Perfect : enPerfectOrNotPerfect::NotPerfect;
	}

	enPrimeOrNotPrime CheckNumberIsPrime(short number)
	{
		short M = sqrt(number);

		for (short counter = 2 ; counter <= M; counter++)
		{
			if (number % counter == 0)
				return enPrimeOrNotPrime::NotPrime;
		}
		return enPrimeOrNotPrime::Prime;

	}

	enOddOrEven IsNumberOddOrEven(const short number)
	{
		if (number % 2 != 0)
			return enOddOrEven::Odd;
		else
			return enOddOrEven::Even;

	}
}