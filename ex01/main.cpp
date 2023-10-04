/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:19:54 by caeduard          #+#    #+#             */
/*   Updated: 2023/10/04 01:35:18 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void print(T const& x) {
    std::cout << x << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, print<int>);
    std::cout << std::endl;
    double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter(arr2, 5, print<double>);
    std::cout << std::endl;
    std::string arr3[] = {"one", "two", "three", "four", "five\n"};
    iter(arr3, 5, print<std::string>);
    return 0;
}