/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:33:48 by jmerchan          #+#    #+#             */
/*   Updated: 2023/12/28 15:34:40 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

std::string ft_toupper(std::string str){
	std::string upper = str;

	for (int i = 0; str[i]; i++){
		upper[i] = (char) toupper(str[i]);
	}
	return (upper);
}

int	main(){
	std::string input;
	std::string up;
	PhoneBook phonebook = PhoneBook();
	
	while (up.compare("EXIT")){
		std::cout << "Please, type an option (ADD, SEARCH or EXIT): ";
		std::cin >> input;
		up = ft_toupper(input);
		if (!up.compare("ADD"))
			phonebook.add();
		else if (!up.compare("SEARCH"))
			phonebook.search();
	}
	return (0);
}
