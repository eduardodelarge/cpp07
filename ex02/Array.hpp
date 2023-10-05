/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:26:47 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/05 15:42:25 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>  //required for rand(), srand()
#include <ctime>    //required for time()
#include <exception>

template<typename T>
class Array {
public:
    // Default constructor
    Array() : m_size(0), m_data(NULL) {}

    // Constructor with size parameter
    Array(unsigned int n) : m_size(n), m_data(new T[n]) {
        for (unsigned int i = 0; i < m_size; ++i) {
            m_data[i] = T();
        }
    }

    // Copy constructor
    Array(const Array& other) : m_size(other.m_size), m_data(new T[m_size]) {
        for (unsigned int i = 0; i < m_size; ++i) {
            m_data[i] = other.m_data[i];
        }
    }

    // Assignment operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            T* new_data = new T[other.m_size];
            for (unsigned int i = 0; i < other.m_size; ++i) {
                new_data[i] = other.m_data[i];
            }
            delete[] m_data;
            m_data = new_data;
            m_size = other.m_size;
        }
        return *this;
    }

    // Destructor
    ~Array() {
        delete[] m_data;
    }

    // Subscript operator
    T& operator[](unsigned int index) {
        if (index >= m_size) {
            throw std::exception();
        }
        return m_data[index];
    }

    // Size member function
    unsigned int size() const {
        return m_size;
    }

private:
    unsigned int m_size;
    T* m_data;
};


#endif