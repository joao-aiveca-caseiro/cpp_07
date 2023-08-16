/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:09:31 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/08/16 16:39:11 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

#include <string>
#include <iostream>

template <typename T>
void	increment(T &a)
{
	a++;
}

template <typename T>
void	print(T &a)
{
	std::cout << a << '\t';
}

#endif