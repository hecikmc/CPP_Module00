/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:25:45 by jmerchan          #+#    #+#             */
/*   Updated: 2023/12/28 15:30:11 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::setIndex(const int i){
	this->index = i;
}

std::string Contact::readField(std::string msg){
	bool checker = false;
	std::string field;
	
	while (!checker){
		std::cout << msg;
		std::getline(std::cin, field);
		if (!field.empty()){
			checker = true;
		}
		else{
			std::cin.clear();
			std::cout << "**ERROR** The field cannot be empty.\n";
		}
	}
	return field;
}

void Contact::create(void){
	std::cin.ignore();
	this->firstName = readField("[ADD CONTACT] Enter the contact's FIRST NAME: ");
	this->lastName = readField ("[ADD CONTACT] Enter the contact's LAST NAME: ");
	this->nickName = readField("[ADD CONTACT] Enter the contact's NICKNAME: ");
	this->phoneNumber = readField ("[ADD CONTACT] Enter the contact's PHONE NUMBER: ");
	this->darkSecret = readField ("[ADD CONTACT] Enter the contact's DARK SECRET: ");
	std::cout << "\n";
	std::cout << "Contact added successfully! " << "\n\n";
}

std::string Contact::shortField(std::string field){
	std::string result;
	int i = 0;

	while (field[i]){
		if (i == 9){
			result.push_back('.');
			break;
		}
		result.push_back(field[i]);
		i++;
	}
	return (result);
}

void Contact::print(void){
	if (this->firstName.empty())
		return ;
	std::cout << "|" << std::setw(10) << this->index << std::flush;
	std::cout << "|" << std::setw(10) << this->shortField(this->firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->shortField(this->lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->shortField(this->nickName) << std::flush;
	std::cout << "|" << "\n";
}

void Contact::displayContact(void){
	std::cout << "------------------------" << std::endl;
    std::cout << "|      CONTACT INFO     |" << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << "| INDEX       | " << this->index <<  std::endl;
    std::cout << "| FIRST NAME  | " << this->firstName <<  std::endl;
    std::cout << "| LAST NAME   | " << this->lastName <<  std::endl;
    std::cout << "| NICKNAME    | " << this->nickName <<  std::endl;
    std::cout << "| PHONE       | " << this->phoneNumber <<  std::endl;
    std::cout << "| SECRET      | " << this->darkSecret <<  std::endl;
    std::cout << "------------------------" << std::endl;
}