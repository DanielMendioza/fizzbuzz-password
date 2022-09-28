//DMS
//21/09/2022

#include <iostream>
#include <string>

std::string fizzbuzz(int t_string);

int main()
{
	_ASSERTE(fizzbuzz(1) == "1");
	_ASSERTE(fizzbuzz(2) == "2");
	_ASSERTE(fizzbuzz(3) == "fizz");
	_ASSERTE(fizzbuzz(27) == "fizz");
	_ASSERTE(fizzbuzz(5) == "buzz");
	_ASSERTE(fizzbuzz(25) == "buzz");
	_ASSERTE(fizzbuzz(15) == "fizzbuzz");
	_ASSERTE(fizzbuzz(30) == "fizzbuzz");

}

std::string fizzbuzz(int t_string)
{
	std::string output;
	std::string fizz = "fizz";
	std::string buzz = "buzz";

	for (size_t i = 1; i <= t_string; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0) 
		{

			output = fizz + buzz;
		}
		else if (i % 3 == 0)
		{
			output = fizz;
		}
		else if ((i % 5) == 0)
		{
			output = buzz;
		}
		else
		{
			output = std::to_string(t_string);
		}
	}
	return (output);
}
