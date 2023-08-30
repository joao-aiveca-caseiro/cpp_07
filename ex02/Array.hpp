/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 01:13:24 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/08/23 01:13:24 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	public:
		
		Array();
		Array(unsigned int n);
		Array(const Array &target);

		Array &operator=(const Array &target);
		T &operator[](int n) const;
		unsigned int size() const;

		class OutOfBoundsIndexException: public std::exception
		{
			virtual const char* what() const throw();
		};

	private:

		T				*_contents;
		unsigned int	_size;
};

#include "Array.tpp"

#endif