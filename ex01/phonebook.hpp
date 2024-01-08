/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:56:08 by jmerchan          #+#    #+#             */
/*   Updated: 2023/12/28 14:08:15 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include "contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		index;
		bool	full;
		void	displayAll();
		int		readOption(int size);
	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
};

#endif