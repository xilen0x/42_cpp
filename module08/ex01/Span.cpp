
# include "Span.hpp"
# include <algorithm>

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(const Span &copy) : _numbers(copy._numbers), _maxSize(copy._maxSize) {}

Span &Span::operator=(const Span &copy)
{
	if (this == &copy)
		return (*this);
	_numbers = copy._numbers;
	_maxSize = copy._maxSize;
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (_numbers.size() == _maxSize)
		throw StorageLimitExceeded();
	_numbers.push_back(n);
}

int Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw NotEnoughElements();
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int min = sorted[1] - sorted[0];
	for (size_t i = 2; i < sorted.size(); i++)
	{
		if (sorted[i] - sorted[i - 1] < min)
			min = sorted[i] - sorted[i - 1];
	}
	return (min);
}

int Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw NotEnoughElements();
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	return (sorted[sorted.size() - 1] - sorted[0]);
}

const char* Span::StorageLimitExceeded::what() const throw()
{
	return ("Storage limit exceeded");
}

const char* Span::NotEnoughElements::what() const throw()
{
	return ("Not enough elements");
}

