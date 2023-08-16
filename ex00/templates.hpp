/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:09:31 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/08/16 14:32:43 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

#include <string>
#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T &a, T&b)
{
	return ((b <= a) ? b : a);
}

template <typename T>
T	max(T &a, T&b)
{
	return ((b >= a) ? b : a);
}

#endif