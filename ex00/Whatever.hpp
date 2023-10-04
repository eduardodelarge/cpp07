/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:57:42 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/04 01:07:46 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp; 
};

template <typename T>
T const& min(T const& a, T const& b) {
    return (a < b ? a : b);
};

template <typename T>
T const& max(T const& a, T const& b) {
    return (a > b ? a : b);
};


#endif