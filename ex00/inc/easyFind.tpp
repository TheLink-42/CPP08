/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:24:51 by jimmy             #+#    #+#             */
/*   Updated: 2025/03/13 12:29:28 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template <typename Container>
typename Container::iterator easyFind(Container& container, int value)
{
	for(typename Container::iterator it = container.begin(); it != container.end(); it++)
		if (*it == value)
			return it
	throw NotFoundException();
}

#endif