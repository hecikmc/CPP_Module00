/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:36:28 by jmerchan          #+#    #+#             */
/*   Updated: 2023/12/28 15:05:11 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(){
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
    std::cout << "| Welcome to your Awesome Phonebook |" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "|            how to use             |" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To look for a contact." << std::endl;
	std::cout << "EXIT\t: To close the phonebook." << std::endl;
	std::cout << " -------------------------------------" << std::endl;
	std::cout << std::endl;
	this->index = 0;
	this->full = false;
}

PhoneBook::~PhoneBook(){}

void PhoneBook::add(void){
	Contact newContact = Contact();
	newContact.create();
	newContact.setIndex(this->index);
	this->contacts[this->index] = newContact;
	if (this->index < 7)
		this->index++;
 	else{
		this->index = 0;
		this->full = true;
	}
}

void PhoneBook::displayAll(void){
	int	size;
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "|\t\tPHONE CONTACTS\t\t    |" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << std::left << "Index" << std::flush;
	std::cout << " "<< std::setw(10) << std::left << "FirstName" << std::flush;
	std::cout << " "<< std::setw(10) << std::left << "LastName" << std::flush;
	std::cout << " "<< std::setw(10) << std::left << "NickName" << std::flush;
	std::cout << "|" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	if (this->full)
		size = 7;
	else
		size = this->index;
	for(int i = 0; i <= size; i++){
		this->contacts[i].print();
	}
	std::cout << " -------------------------------------------" << std::endl << std::endl;
}

int	PhoneBook::readOption(int size){
	bool	checker = false;
	int		index;
		
	while (!checker){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Select the index of the contact to display: ";
		std::cin >> index;
		if (index < 0 || index >= size || !std::cin.good())
			std::cout << "The selected index is not correct.\n";
		else
			checker = true;
	}
	return index;
}

void PhoneBook::search(void){
	int		size;
	int		i;

	if (this->full)
		size = 8;
	else if (this->index == 0)
		size = 0;
	else
		size = this->index;
	displayAll();
	if (size > 0){
		i = readOption(size);
		this->contacts[i].displayContact();
	}
	else
		std::cout << "There are no contacts to display, your Awesome Phonebook is empty.\n\n";
}