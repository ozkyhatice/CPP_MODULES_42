#include "Span.hpp"



int main()
{
	Span sp = Span(5);
	Span sp2 = Span(6);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

    
	std::cout << "Sp1 min -> " << sp.shortestSpan() << std::endl;
	std::cout << "Sp1 max -> " << sp.longestSpan() << std::endl;

	std::cout << "----------------------" << std::endl;

	srand(time(NULL));
	std::vector<int> numbers;
	for (int i = 0; i < 6; i++) {
    	int random_n = rand() % 50;
		std::cout << random_n << "  ";
		numbers.push_back(random_n);
	}
	std::cout << std::endl;

	sp2.addNumber2(numbers.begin(), numbers.end());
	std::cout << "Sp2 min -> " << sp2.shortestSpan() << std::endl;
	std::cout << "Sp2 max -> " << sp2.longestSpan() << std::endl;
    return 0;
}
