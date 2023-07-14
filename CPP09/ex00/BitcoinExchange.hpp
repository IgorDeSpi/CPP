/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:04:24 by ide-spir          #+#    #+#             */
/*   Updated: 2023/07/12 16:04:14 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <sstream>
# include <cstdlib>
# include <limits.h>
# include <string>
# include <stdexcept>

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <exception>
# include <memory>
# include <cstring>

# define DEBUG 0

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_data;
		bool							_baseStatus;

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &obj);
		~BitcoinExchange();
		BitcoinExchange &operator=(BitcoinExchange const &obj);

		void		Print_Map(std::map<std::string, float> mymap);

		bool		Database_File_Parser(const std::string& filename);
		int			Check_Data_Value(const std::string& value);
		int			Check_Final_Data_Value(const float& value);
		int			Check_Date(const std::string& date);
		int			Parse_Line_Value(const std::string& line);
		void		Search_File_Parser(const std::string& filename);
		int			Pre_Search_File_Parser(const std::string& filename);
		std::string	Close_Date(const std::string& date);

		std::map<std::string, float>	getDataMap() const { return _data; };
		bool		getBaseStatus() const { return _baseStatus; };

		float		Stream_Change_String_To_Float(const std::string& str);
};

float	Change_String_To_Float(const std::string& str);

class UnavailableFloatValue : public std::exception
{
	private:
		char* msg_;

	public:
		UnavailableFloatValue(const char* msg) : msg_(new char[36 + std::strlen(msg)])
		{
			std::strcpy(msg_, "Error: Wrong value find in file : ");
			std::strcat(msg_, msg);
		}

		const char* what() const throw()
		{
			return msg_;
		}

		~UnavailableFloatValue() throw()
		{
			delete [] msg_;
		}
};

#endif
