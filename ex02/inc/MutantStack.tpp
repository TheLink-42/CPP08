/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 23:18:05 by jimmy             #+#    #+#             */
/*   Updated: 2025/03/14 00:06:22 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


////////////////////////////////////////////////////////////////////////////////
////																		////
////							CONSTRUCTORS								////
////																		////
////////////////////////////////////////////////////////////////////////////////

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other)
{

}

template <typename T>
MutantStack<T>::~MutantStack()
{

}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& other)
{
	if (*this != other)
		std::stack<T>::operator=(other);
	return *this;
}


////////////////////////////////////////////////////////////////////////////////
////																		////
////							MEMBER FUNCTIONS							////
////																		////
////////////////////////////////////////////////////////////////////////////////


/*
	std::stack<T>::c is the protected member variable that holds the elements
	Its type is std::stack<T>::container_type which is de underlying container
	in std::stack<T> implementation (usually std::deque<T>)

	Use of keyword 'typename' to ensure it is treated as a type and avoid ambiguity
*/

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}



template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const
{
	return std::stack<T>::c.end();
}



template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin()
{
	return std::stack<T>::c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend()
{
	return std::stack<T>::c.rend();
}



template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin() const
{
	return std::stack<T>::c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend() const
{
	return std::stack<T>::c.rend();
}