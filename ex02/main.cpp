#include <iostream>
#include <cstdlib>
#include "Array.hpp"

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

int main(void)
{
	Array<int> numbers(5);
	Array<int> empty;
	std::cout << "-- Array of size 5 filled with integers --" << std::endl;
	for (size_t i = 0; i < numbers.size(); i++)
	{
		numbers[i] = 42 + i;
		std::cout << numbers[i] << '\t';
	}
	std::cout << std::endl << std::endl;
	std::cout << "-- Attempting to access out of bounds elements, should throw exceptions --\n";
	std::cout << "Array[-2]" << std::endl;
	try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "Array[5]" << std::endl;
	try
    {
        numbers[numbers.size()] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << std::endl;
	
	// Tests using complex types (in this case, the class from the previous exercise)

	Array<Awesome> awesome(5);
	std::cout << "-- Array of size 5 filled with Awesome objects --" << std::endl;
	for (size_t i = 0; i < numbers.size(); i++)
	{
		std::cout << awesome[i] << '\t';
	}
	std::cout << std::endl;
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }