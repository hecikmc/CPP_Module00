/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:26:37 by jmerchan          #+#    #+#             */
/*   Updated: 2023/12/29 14:38:33 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
# include <iostream>
# include <iomanip>

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string darkSecret;
		int			index;

        std::string readField(std::string msg);
		std::string shortField(std::string field);
	public:
		Contact();
		~Contact();
        void setIndex(const int i);
        void create(void);
		void print(void);
		void displayContact(void);
};

#endif