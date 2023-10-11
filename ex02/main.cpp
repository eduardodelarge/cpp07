/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:26:50 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/07 17:31:51 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
    
    std::cout << "Test constructor with parameter" << std::endl;
    Array<int> b(21);
    std::cout << "b.size() = " << b._size() << std::endl;

    std::cout << "Test copy constructor" << std::endl;
    Array<int> c(b);
    std::cout << "c.size() = " << c._size() << std::endl;

    std::cout << "Test assignment operator" << std::endl;
    Array<int> a = c;
    std::cout << "a.size() = " << a._size() << std::endl;

    std::cout << "Test access with [] operator" << std::endl;
    Array<int> d(3);
    for (unsigned int i = 0; i < d._size(); ++i)
    {
        d[i] = i;
        std::cout << "d[" << i << "] = " << d[i] << std::endl;
    }
    
    std::cout << "Test access with [] operator out of bounds" << std::endl;
    try
    {
        d[3] = 3;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}