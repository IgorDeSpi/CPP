/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:53:36 by ide-spir          #+#    #+#             */
/*   Updated: 2023/08/01 14:49:42 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
unsigned int	Array<T>::Array::size() const
{
	return (this->_size);
}

template<typename T>
Array<T>::Array::Array() : _array(NULL), _size(0)
{
	std::cout << "Array Default Constructor called" << std::endl;
}

template<typename T>
Array<T>::Array::Array(unsigned int n) : _array(NULL), _size(n)
{
	std::cout << "Array Overload Constructor called" << std::endl;
	if (n < 0)
		throw std::out_of_range("Array size value unavailable !");
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; ++i)
		this->_array[i] = 0;
}

template<>
Array<std::string>::Array::Array(unsigned int n) : _array(NULL), _size(n)
{
	std::cout << "Array Overload Constructor called" << std::endl;
	if (n <= 0)
		throw std::out_of_range("Array size value unavailable !");
	this->_array = new std::string[n];
	for(unsigned int i = 0; i < n; ++i)
		this->_array[i] = "";
}

template<typename T>
Array<T>::Array::Array(Array const &obj) : _array(NULL), _size(0)
{
	std::cout << "Array Copy Constructor called" << std::endl;
	*this = obj;
}

template<typename T>
Array<T>::Array::~Array()
{
	if (this->size() >= 0)
		delete [] this->_array;
	std::cout << "Array Destructor called" << std::endl;
}

template<typename T>
Array<T> &Array<T>::Array::operator=(Array<T> const &obj)
{
	if (this == &obj)
		return (*this);
	if (this->size() >= 0)
		delete [] this->_array;
	this->_array = new T[obj.size()];
	this->_size = obj.size();
	for (unsigned int i = 0; i < this->size(); i++)
		this->_array[i] = obj._array[i];
	std::cout << "Array Copy assignment operator called" << std::endl;
	return (*this);
}

template<typename T>
T &Array<T>::Array::operator[](unsigned int idx) const
{
	if (idx < 0 || this->size() <= idx)
		throw std::out_of_range("Index array value unavailable !");
	return (this->_array[idx]);
}

template <typename T>
void		Array<T>::display(std::ostream& stream) const
{
	unsigned int i;
	if (_size == 0)
		return;
	for (i = 0; i < _size - 1; i++)
		stream << _array[i] << " - ";
	if (i == _size - 1)
		stream << _array[i];
}

template <class T>
std::ostream&	operator<<(std::ostream& stream, Array<T>const& rhs)
{
	rhs.display(stream);
	return (stream);
}
