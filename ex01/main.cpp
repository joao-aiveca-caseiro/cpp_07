/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:02:19 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/08/16 16:46:08 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"
#include "iter.hpp"

int main( void ) 
{
	int		array_a[] = {2, 4, 6, 8, 0};
	char	array_b[] = {'a', 'b', 'c', 'd', 'e'};
	
	std::cout << "-- Array A --" << std::endl;
	iter(array_a, 5, print);
	iter(array_a, 5, increment);
	std::cout << "\n-- Array A after applying the increment function --" << std::endl;
	iter(array_a, 5, print);
	std::cout << std::endl << std::endl;
	std::cout << "-- Array B --" << std::endl;
	iter(array_b, 5, print);
	iter(array_b, 5, increment);
	std::cout << "\n-- Array B after applying the increment function --" << std::endl;
	iter(array_b, 5, print);
	std::cout << std::endl << std::endl;
	return 0;
}