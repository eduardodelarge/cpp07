/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:26:50 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/05 15:44:18 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    // Test default constructor
    Array<int> a1;
    std::cout << "a1 size: " << a1.size() << std::endl;

    // Test constructor with size parameter
    Array<int> a2(5);
    std::cout << "a2 size: " << a2.size() << std::endl;
    for (unsigned int i = 0; i < a2.size(); ++i) {
        std::cout << "a2[" << i << "]: " << a2[i] << std::endl;
    }

    // Test copy constructor
    Array<int> a3(a2);
    std::cout << "a3 size: " << a3.size() << std::endl;
    for (unsigned int i = 0; i < a3.size(); ++i) {
        std::cout << "a3[" << i << "]: " << a3[i] << std::endl;
    }

    // Test assignment operator
    Array<int> a4 = a3;
    std::cout << "a4 size: " << a4.size() << std::endl;
    for (unsigned int i = 0; i < a4.size(); ++i) {
        std::cout << "a4[" << i << "]: " << a4[i] << std::endl;
    }

    // Test subscript operator
    a4[2] = 42;
    std::cout << "a4[2]: " << a4[2] << std::endl;

    // Test out of bounds exception
    try {
        a4[10] = 99;
    } catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}