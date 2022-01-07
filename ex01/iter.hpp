/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:32:02 by lle-briq          #+#    #+#             */
/*   Updated: 2022/01/07 16:47:10 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T> void	iter(const T *array, int size, void function(const T &))
{
	for (int i = 0; i < size; i++)
		function(array[i]);
}

template<typename T> void	printData(const T &data)
{
	std::cout << data << " ";
}

#endif
