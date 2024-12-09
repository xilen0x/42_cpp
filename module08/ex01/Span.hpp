/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:39:11 by castorga          #+#    #+#             */
/*   Updated: 2024/12/09 10:39:12 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
 //COLORS
# define RESET   "\033[0m"
//ROJO VIVO
# define BRED     "\033[1;31m"      /* Bold Red */
# define RED     "\033[31m"      /* Red */

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

#endif
