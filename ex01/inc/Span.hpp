/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:44:29 by jbaeza-c          #+#    #+#             */
/*   Updated: 2025/03/13 13:53:31 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>

class Span
{
	private:
		unsigned int	_size;
		std::vecor<int>	_vector;

	public:
		Span();
		Span(unsigned int size);
		~Span();
		Span(const Span& other);
		Span& operator=(Const Span& other);

		void	addNumber(int value);
		void	addManyNumber();
		int		shortestSpan() const;
		int		longestSpan() const;

		class	OverflowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	NoNumbersStoredException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};	
};

#endif