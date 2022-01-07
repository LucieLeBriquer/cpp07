/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:24:01 by lle-briq          #+#    #+#             */
/*   Updated: 2022/01/07 20:36:22 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T> class Array
{
	private:
		T				*_data;
		unsigned int	_size;
		
	public:
		// Constructors and destructor
		Array(void) : _data(NULL), _size(0) {}
		Array(const unsigned int n) : _data(new T[n]), _size(n) {}
		Array(const Array<T> &array) : _data(NULL), _size(0) { *this = array; }
		virtual ~Array() { delete [] _data; }

		// Assignation
		Array<T>	&operator=(const Array<T> &array)
		{
			if (this != &array)
			{
				if (_size > 0)
					delete [] _data;
				_size = array._size;
				_data = new T[array._size];
				for (unsigned int i = 0; i < _size; i++)
					_data[i] = array._data[i];
			}
			return (*this);
		}

		// Accessor
		T	&operator[](const int i) const
		{
			if (i < 0 || static_cast<unsigned int>(i) >= _size)
				throw OutOfRange();
			return (_data[i]);
		}

		// Get size
		unsigned int	size(void) const { return (_size); }

		// Index out of range exception
		class OutOfRange : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Array::exception : index is out of range");
				}
		};

};

template<typename T> std::ostream	&operator<<(std::ostream &o, const Array<T> &array)
{
	unsigned int	max = 5;

	o << "[" << array.size() << "] ";
	for (unsigned int i = 0; i < array.size() && i < max; i++)
		o << array[i] << " ";
	if (max < array.size())
		o << "...";
	o << std::endl;
	return (o);
}

#endif
