/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:09:31 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/08/16 15:34:36 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>
#include <iostream>

template <typename T>
void	iter(T *array, size_t length, void(*f)(T &))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}


#endif