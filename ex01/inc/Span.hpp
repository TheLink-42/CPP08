/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:44:29 by jbaeza-c          #+#    #+#             */
/*   Updated: 2025/03/13 18:45:10 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>
# include <algorithm>

class Span
{
	private:
		std::vector<int>	_vector;
		unsigned int		_size;

	public:
		Span();
		Span(unsigned int size);
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& other);

		void	addNumber(int value);
		void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		shortestSpan() const;
		int		longestSpan() const;

		class	OverflowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	NotEnoughNumbersStoredException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};	
};

#endif