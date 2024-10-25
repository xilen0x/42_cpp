
# pragma once

# include <iostream>
# include <vector>


class Span
{
	private:
		std::vector<int>	_numbers;
		unsigned int		_maxSize;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span();

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		
		
		template <typename Iterator>
		void addRange(Iterator begin, Iterator end)
		{
			if (_numbers.size() + std::distance(begin, end) > _maxSize)
				throw StorageLimitExceeded();
			_numbers.insert(_numbers.end(), begin, end);
		}
		class StorageLimitExceeded : public std::exception {
        	virtual const char* what() const throw();
    	};
    
    	class NotEnoughElements : public std::exception {
        	virtual const char* what() const throw();
    	};
};


