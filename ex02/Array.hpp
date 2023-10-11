/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:26:47 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/07 17:30:52 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib> //required for rand(), srand()
#include <ctime>  //required for time()
#include <exception>

template <typename T>
class Array
{
    private:
        unsigned int size;
        T *array;

    public:
        // Constructors
        Array(unsigned int n) : size(n), array(new T[n]) {}

        // Copy constructor
        Array(const Array &src) : size(src.size), array(new T[src.size])
        {
            for (unsigned int i = 0; i < src.size; ++i)
            {
                this->array[i] = src.array[i];
            }
        }

        // Assignment operator
        Array &operator=(const Array &src)
        {
            if (this != &src)
            {
                delete[] this->array;
                this->size = src.size;
                this->array = new T[src.size];
                for (unsigned int i = 0; i < src.size; ++i)
                {
                    this->array[i] = src.array[i];
                }
            }
            return *this;
        }

        // Destructor
        ~Array()
        {
            delete[] this->array;
        }

        // Subscript operator to access elements
        T &operator[](unsigned int n)
        {
            if (n >= this->size)
            {
                throw OutOfBoundsException(); // Throw an std::exception for out-of-bounds access
            }
            return this->array[n];
        }

        // Const version of the subscript operator for read-only access
        const T &operator[](unsigned int n) const
        {
            if (n >= this->size)
            {
                throw OutOfBoundsException(); // Throw an std::exception for out-of-bounds access
            }
            return this->array[n];
        }

        // Function to get the size of the array
        unsigned int _size() const
        {
            return this->size;
        }

        // Class exception
        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Out of bounds exception";
                }
        };
};

#endif