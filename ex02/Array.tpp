/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 01:13:13 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/08/23 01:13:13 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(): _size(0)
{
	_contents = new T[_size];
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	_contents = new T[_size];
}

template <typename T>
Array<T>::Array(const Array &target)
{
	_size = target.size();
	_contents = new T[_size];
	for (size_t i = 0; i < _size; i++)
	{
		_contents[i] = target[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &target)
{
	if (this != &target)
	{
		delete[] _contents;

		_size = target.size();
		_contents = new T[_size];
		for (size_t i = 0; i < _size; i++)
		{
			_contents[i] = target[i];
		}
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](int n) const
{
	if (n < 0 || n >= static_cast<int>(_size))
		throw OutOfBoundsIndexException();
	return (_contents[n]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return(_size);
}

template <typename T>
const char *Array<T>::OutOfBoundsIndexException::what() const throw()
{
	return ("Error: There is no element with the specified index.");
}
