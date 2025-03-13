/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:21:17 by jbaeza-c          #+#    #+#             */
/*   Updated: 2025/03/13 21:09:11 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));

	std::cout << "Test provided on Subject" << std::endl;
	Span	sp(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Subject shortest span: 2" << std::endl;
	std::cout << "My shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Subject largest span: 14" << std::endl;
	std::cout << "My largest span: " << sp.longestSpan() << std::endl;



	std::cout << std::endl << "Own test" << std::endl;
	Span				sp1(50000);
	Span				sp2(50000);
	std::vector<int>	v;
	int		number;
	int		max = 0;
	int		min = 999999999;

	for (int i = 0; i < 50000; i++)
	{
		number = rand()%1000000000;
		if (number < min)
			min = number;
		if (number > max)
			max = number;
		sp1.addNumber(number);
		v.push_back(number);
	}
	sp2.addNumber(v.begin(), v.end());
	std::cout << "Shortest span 1 by 1: " << sp1.shortestSpan() << std::endl;
	std::cout << "Shortest span bulk: " << sp2.shortestSpan() << std::endl;

	std::cout << "Longest span 1 by 1: " << sp1.longestSpan() << std::endl;
	std::cout << "Longest span bulk: " << sp2.longestSpan() << std::endl;
	std::cout << "Longest span manual: " << max - min << std::endl;



	std::cout << std::endl << "Exception test" << std::endl;

	Span exception1(1);
	Span exceptionEmpty(4);

	exception1.addNumber(2);
	try
	{
		std::cout << "Trying to introduce more than allowed 1 by 1" << std::endl;
		exception1.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Trying to introduce more than allowed bulk" << std::endl;
		exception1.addNumber(v.begin(), v.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Trying shortestSpan() on empty" << std::endl;
		exceptionEmpty.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Trying longestSpan() on empty" << std::endl;
		exceptionEmpty.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Trying shortestSpan() with only 1" << std::endl;
		exception1.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Trying longestSpan() with only 1" << std::endl;
		exception1.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return 0;
}