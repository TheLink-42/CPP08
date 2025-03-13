/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:32:04 by jimmy             #+#    #+#             */
/*   Updated: 2025/03/13 21:07:08 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

////////////////////////////////////////////////////////////////////////////////
////																		////
////							CONSTRUCTORS								////
////																		////
////////////////////////////////////////////////////////////////////////////////

Span::Span(): _size(0){
//	std::cout << "Span default constructor called" << std::endl;

}

Span::Span(unsigned int n): _size(n){
	
}

Span::~Span(){
//	std::cout << "Span destructor called" << std::endl;

}

Span::Span(const Span& other):_vector(other._vector), _size(other._size){

}

Span&	Span::operator=(const Span& other){
//	std::cout << "Span copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_vector = other._vector;
		_size = other._size;
	}
	return *this;
}



////////////////////////////////////////////////////////////////////////////////
////																		////
////								OVERLOADS								////
////																		////
////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////
////																		////
////							MEMBER FUNCTIONS							////
////																		////
////////////////////////////////////////////////////////////////////////////////

void	Span::addNumber(int n)
{
	if (_vector.size() >= _size)
		throw OverflowException();
	_vector.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (_vector.size() + std::distance(start, end) > _size)
		throw OverflowException();
	_vector.insert(_vector.begin(), start, end);
}

int		Span::shortestSpan() const
{
	int min;

	if (_vector.size() < 2)
		throw NotEnoughNumbersStoredException();
		
	std::vector<int>	tmp = _vector;
	std::sort(tmp.begin(), tmp.end());

	min = tmp[1] - tmp[0];
	for (unsigned int i = 2; i < tmp.size(); i++)
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	
	return min;
}

int		Span::longestSpan() const
{
	if (_vector.size() < 2)
		throw NotEnoughNumbersStoredException();

	std::vector<int>	tmp = _vector;
	std::sort(tmp.begin(), tmp.end());
	
	return (tmp[tmp.size() - 1] - tmp[0]);
}

////////////////////////////////////////////////////////////////////////////////
////																		////
////								EXCEPTIONS								////
////																		////
////////////////////////////////////////////////////////////////////////////////

const char*	Span::OverflowException::what() const throw()
{
	return ("Not enough space");
}
const char*	Span::NotEnoughNumbersStoredException::what() const throw()
{
	return ("There are not enough numbers to find a span");
}