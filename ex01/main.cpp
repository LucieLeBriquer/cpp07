/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:35:54 by lle-briq          #+#    #+#             */
/*   Updated: 2022/01/07 17:06:52 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int			arrayInt[5] = {0, 1, 2, 3, 4};
	std::string	arrayStr[5] = {"Retsuko", "Fenneko", "Haida", "Washimi", "Gori"};
	const char	*arrayStrC[5] = {"Haida", "Washimi", "Retsuko", "Fenneko", "Gori"};
	char		arrayChar[5] = {'r', 'e', 't', 's', 'u'};

	iter<int>(arrayInt, 5, printData);
	std::cout << std::endl;
	iter<int>(arrayInt, 2, printData);
	std::cout << std::endl;

	iter<std::string>(arrayStr, 5, printData);
	std::cout << std::endl;

	iter<const char *>(arrayStrC, 5, printData);
	std::cout << std::endl;

	iter<char>(arrayChar, 5, printData);
	std::cout << std::endl;

	return (0);
}
