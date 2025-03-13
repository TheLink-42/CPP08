/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:54:03 by jimmy             #+#    #+#             */
/*   Updated: 2025/03/13 12:28:58 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename Container>
typename Container::iterator easyFind(Container& container, int value);

# include "easyFind.tpp"

#endif