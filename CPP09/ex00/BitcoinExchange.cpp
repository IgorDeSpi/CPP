/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:04:18 by ide-spir          #+#    #+#             */
/*   Updated: 2023/08/15 16:58:54 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "BitcoinExchange.hpp"

// BitcoinExchange::BitcoinExchange() : _data(), _baseStatus(Database_File_Parser("./data.csv"))
// {
// 	if (DEBUG)
// 		std::cout << "BitcoinExchange Default Constructor called" << std::endl;
// }

// BitcoinExchange::BitcoinExchange(BitcoinExchange const &obj)
// {
// 	*this = obj;
// }

// BitcoinExchange::~BitcoinExchange()
// {
// 	if (DEBUG)
// 		std::cout << "BitcoinExchange Destructor called" << std::endl;
// }

// BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &obj)
// {
// 	if (this != &obj)
// 	{
// 		this->_data = obj.getDataMap();
// 		this->_baseStatus = obj.getBaseStatus();
// 	}
// 	if (DEBUG)
// 		std::cout << "BitcoinExchange Copy assignment operator called" << std::endl;
// 	return *this;
// }

// bool	isValidDate(int day, int month, int year)
// {
// 	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
// 		return false;
// 	if (month == 4 || month == 6 || month == 9 || month == 11)
// 	{
// 		if (day > 30)
// 			return false;
// 	}
// 	else if (month == 2)
// 	{
// 		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
// 		{
// 			if (day > 29)
// 			{
// 				return false;
// 			}
// 		}
// 		else
// 		{
// 			if (day > 28)
// 			{
// 				return false;
// 			}
// 		}
// 	}
// 	return true;
// }

// float	BitcoinExchange::Stream_Change_String_To_Float(const std::string& value)
// {
// 	double	tmp = 0.0;
// 	std::istringstream str(value);
// 	str >> tmp;
// 	if (str.fail() || !str.eof())
// 		throw UnavailableFloatValue(value.c_str());
// 	return (tmp);
// }

// float	Change_String_To_Float(const std::string& str)
// {
// 	int	i = 0;
// 	int	sign = 1;
// 	float	res = 0;
// 	float	res2 = 0;
// 	float	res3 = 0;
// 	float	decimal = 0.1;

// 	while (str[i] != '.' && str[i] != '\0')
// 	{
// 		if (str[i] == '+' || str[i] == '-')
// 		{
// 			if (str[i] == '-')
// 				sign *= -1;
// 		}
// 		else if (str[i] < '0' || str[i] > '9')
// 			throw (UnavailableFloatValue(str.c_str()));
// 		else
// 			res = res * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	if (str[i] == '\0')
// 		return (res * sign);
// 	i++;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] < '0' || str[i] > '9')
// 			return (1);
// 		res2 += (str[i] - '0') * decimal;
// 		decimal *= 0.1;
// 		i++;
// 	}
// 	if (str[i] == '\0')
// 		res3 = res + res2;
// 	res3 *= sign;
// 	return (res3);
// }

// int	BitcoinExchange::Check_Data_Value(const std::string& value)
// {
// 	float	rate = 0;
// 	try
// 	{
// 		rate = Stream_Change_String_To_Float(value);
// 	}
// 	catch(UnavailableFloatValue &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	if (static_cast<long int>(rate) < 0 || static_cast<long int>(rate) > INTMAX_MAX)
// 		return (1);
// 	return (0);
// }

// int	BitcoinExchange::Check_Final_Data_Value(const float& value)
// {
// 	// std::cout << "const float value : " << value << std::endl;
// 	if (value < 0)
// 	{
// 		std::cout << "Error: Not a positive number." << std::endl;
// 		return (1);
// 	}
// 	if (value > 1000)
// 	{
// 		std::cout << "Error: Too large number." << std::endl;
// 		return (1);
// 	}
// 	return (0);
// }

// int	BitcoinExchange::Check_Date(const std::string& date)
// {
// 	std::string	year;
// 	std::string	month;
// 	std::string	day;
// 	int			count = 0;
// 	long int	len = date.length();
// 	if (len != 10)
// 		return (1);
// 	for (int i = 0; i < (int)date.length(); i++)
// 	{
// 		if (i != 0 && date[i] == '-')
// 			count++;
// 		else if (date[i] < '0' || date[i] > '9')
// 			return (1);
// 		else if (count == 0)
// 			year += date[i];
// 		else if (count == 1)
// 			month += date[i];
// 		else if (count == 2)
// 			day += date[i];
// 	}
// 	if (year.length() != 4 || month.length() != 2 || day.length() != 2)
// 		return (1);
// 	int	iyear = atoi(year.c_str());
// 	if (iyear <= 0)
// 		return (1);
// 	int	imonth = atoi(month.c_str());
// 	if (imonth <= 0 || imonth > 12)
// 		return (1);
// 	int	iday = atoi(day.c_str());
// 	if (iday <= 0 || iday > 31)
// 		return (1);
// 	if (isValidDate(iday, imonth, iyear) == false)
// 		return (1);
// 	return (0);
// }

// void	BitcoinExchange::Print_Map(std::map<std::string, float> mymap)
// {
// 	for (std::map<std::string, float>::iterator it = mymap.begin(); it != mymap.end(); ++it)
// 	{
// 		std::cout << "Date: " << it->first << " | value = " << it->second << "." << std::endl;
// 	}
// }

// int	BitcoinExchange::Parse_Line_Value(const std::string& line)
// {
// 	std::istringstream str(line);
// 	int	count = 0;
// 	std::string	word;
// 	std::string	tmp;

// 	while(std::getline(str, word, ','))
// 	{
// 		if (count == 2)
// 			return (1);
// 		if (count == 0)
// 		{
// 			tmp = word;
// 			if (this->Check_Date(word) == 1)
// 				return (1);
// 		}
// 		else if (count == 1 && this->Check_Data_Value(word) == 1)
// 			return (1);
// 		else
// 		{
// 			try
// 			{
// 				this->_data[tmp] = Stream_Change_String_To_Float(word);
// 			}
// 			catch(UnavailableFloatValue &e)
// 			{
// 				break ;
// 			}
// 		}
// 		count++;
// 	}
// 	if (count != 2)
// 		return (1);
// 	return (0);
// }

// bool	BitcoinExchange::Database_File_Parser(const std::string& filename)
// {
// 	std::ifstream	file(filename.c_str());
// 	if (!file.is_open())
// 	{
// 		std::cout << "Error: Could not open file." << std::endl;
// 		std::cout << "The CSV file should be located in the same directory as the program." << std::endl;
// 		return (false);
// 	}
// 	std::string	line;
// 	std::getline(file, line);
// 	while (std::getline(file, line))
// 	{
// 		if (this->Parse_Line_Value(line))
// 			;
// 	}
// 	if (this->_data.empty())
// 	{
// 		std::cout << "Error: Database file is empty." << std::endl;
// 		return (false);
// 	}
// 	return (true);
// }

// int	BitcoinExchange::Pre_Search_File_Parser(const std::string& filename)
// {
// 	std::ifstream	file(filename.c_str());
// 	if (!file.is_open())
// 	{
// 		std::cout << "Error: Could not open file." << std::endl;
// 		return (1);
// 	}
// 	std::string	line;
// 	std::string	word;
// 	int			count = 0;

// 	while (std::getline(file, line))
// 	{
// 		std::istringstream	str(line);
// 		while (str >> word)
// 		{
// 			if (count == 3)
// 				return (1);
// 			if (str.fail() || !str.eof())
// 				return (1);
// 			if (count == 0 && Check_Date(word) == 1)
// 				return (1);
// 			if (count == 1 && word != "|")
// 				return (1);
// 			if (count == 2 && Check_Data_Value(word) == 1)
// 				return (1);
// 			count++;
// 		}
// 	}
// 	if (count != 3)
// 		return (1);
// 	return (0);
// }

// std::string	BitcoinExchange::Close_Date(const std::string& date)
// {
// 	std::string	tmp = "";

// 	if (this->_data.find(date) == this->_data.end())
// 	{
// 		std::map<std::string, float>::iterator it = this->_data.lower_bound(date);
// 		if ((tmp != date && it != this->_data.begin()) || (it == this->_data.end()))
// 			it--;
// 		if (it != this->_data.end())
// 			tmp = it->first;
// 	}
// 	return (tmp);
// }

// void	BitcoinExchange::Search_File_Parser(const std::string& filename)
// {
// 	std::ifstream	file(filename.c_str());
// 	if (!file.is_open())
// 	{
// 		std::cout << "Error: Could not open file." << std::endl;
// 		return ;
// 	}
// 	std::string	line;
// 	std::string	word;
// 	std::string	date;
// 	std::string	tmp;
// 	int			count = 0;
// 	double		value = 0;

// 	std::getline(file, line);
// 	while (std::getline(file, line))
// 	{
// 		std::istringstream	str(line);
// 		count = 0;
// 		while (str >> word)
// 		{
// 			if (count == 3)
// 				break ;
// 			if (count == 0)
// 			{
// 				tmp = word;
// 				if (Check_Date(word) == 1)
// 				{
// 					std::cout << "Error: Bad input => " << word << std::endl;
// 					break ;
// 				}
// 			}
// 			if (count == 2)
// 			{
// 				try
// 				{
// 					value = Change_String_To_Float(word);
// 				}
// 				catch(UnavailableFloatValue &e)
// 				{
// 					std::cerr << e.what() << std::endl;
// 					break ;
// 				}
// 				if (Check_Final_Data_Value(value) == 1)
// 				{
// 					break ;
// 				}
// 				else
// 				{
// 					date = Close_Date(tmp);
// 					if (date.size() == 0)
// 						date = tmp;
// 					std::cout << tmp << " => " << word << " = " << (this->_data[date] * value) << std::endl;
// 				}
// 			}
// 			count++;
// 		}
// 	}
// }

#include "BitcoinExchange.hpp"

static bool printError(const std::string &line)
{
	std::cerr << "Error: bad input: " << line << '\n';
	return false;
}

bool	isValidDate(int day, int month, int year)
{
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30)
			return false;
	}
	else if (month == 2)
	{
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		{
			if (day > 29)
			{
				return false;
			}
		}
		else
		{
			if (day > 28)
			{
				return false;
			}
		}
	}
	return true;
}

// int	BitcoinExchange::Check_Date(const std::string& date)
// {
// 	std::string	year;
// 	std::string	month;
// 	std::string	day;
// 	int			count = 0;
// 	long int	len = date.length();
// 	if (len != 10)
// 		return (1);
// 	for (int i = 0; i < (int)date.length(); i++)
// 	{
// 		if (i != 0 && date[i] == '-')
// 			count++;
// 		else if (date[i] < '0' || date[i] > '9')
// 			return (1);
// 		else if (count == 0)
// 			year += date[i];
// 		else if (count == 1)
// 			month += date[i];
// 		else if (count == 2)
// 			day += date[i];
// 	}
// 	if (year.length() != 4 || month.length() != 2 || day.length() != 2)
// 		return (1);
// 	int	iyear = atoi(year.c_str());
// 	if (iyear <= 0)
// 		return (1);
// 	int	imonth = atoi(month.c_str());
// 	if (imonth <= 0 || imonth > 12)
// 		return (1);
// 	int	iday = atoi(day.c_str());
// 	if (iday <= 0 || iday > 31)
// 		return (1);
// 	if (isValidDate(iday, imonth, iyear) == false)
// 		return (1);
// 	return (0);
// }

static bool checkDate(std::string &date)
{
	std::string	year;
	std::string	month;
	std::string	day;
	int	count = 0;
	long int	len = date.length();
	if (len != 10)
		return (printError(date));
	for (int i = 0; i < (int)date.length(); i++)
	{
		if (i != 0 && date[i] == '-')
			count++;
		else if (date[i] < '0' || date[i] > '9')
			return (printError(date));
		else if (count == 0)
			year += date[i];
		else if (count == 1)
			month += date[i];
		else if (count == 2)
			day += date[i];
	}
	if (year.length() != 4 || month.length() != 2 || day.length() != 2)
		return (printError(date));
	int	iyear = atoi(year.c_str());
	if (iyear <= 0)
		return (printError(date));
	int	imonth = atoi(month.c_str());
	if (imonth <= 0 || imonth > 12)
		return (printError(date));
	int	iday = atoi(day.c_str());
	if (iday <= 0 || iday > 31)
		return (printError(date));
	if (isValidDate(iday, imonth, iyear) == false)
		return (printError(date));
	return (true);
}

static bool printNegError()
{
	std::cerr << "Error: not a positive number." << '\n';
	return false;
}

static bool printTooLargeError()
{
	std::cerr << "Error: too large a number." << '\n';
	return false;
}

static bool parseLine(std::ifstream &in, const char *delims, bool checkVal, std::string &date, float &val) {
	std::string line;
	std::getline(in, line);

	if (in.fail())
		return false;
	// find end of date
	size_t i = line.find_first_of(delims);
	if (i == std::string::npos)
		return printError(line);
	// get date
	date = line.substr(0, i);
	if (!checkDate(date))
		return false;
	// skip spaces and delim
	i = line.find_first_not_of(delims, i);
	// get value
	const char *floatP = line.c_str() + i;
	char *endP;
	val = std::strtof(floatP, &endP);
	if (val < 0 || (checkVal && val > 1000))
	{
		if (val < 0)
			return (printNegError());
		else if(val > 1000)
			return (printTooLargeError());
		else
			return printError(std::string(floatP));
	}
	return true;
}

BitcoinExchange::BitcoinExchange(const char *db) {
	std::ifstream db_in;
	db_in.exceptions(std::ifstream::badbit);
	db_in.open(db);
	if (db_in.fail())
		throw std::ios_base::failure("Failed to open file");

	std::string header;
	std::getline(db_in, header);
	if (header != "date,exchange_rate")
		std::cerr << "Invalid file header...\n";

	while (!db_in.eof()) {
		std::string date; float val;

		if (!parseLine(db_in, ",", false, date, val))
			continue;
		_database.insert(std::make_pair(date, val));
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	_database = other._database;
}

// Destructor
BitcoinExchange::~BitcoinExchange() {}

// Operators
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other) {
		this->_database = other._database;
	}
	return *this;
}

void BitcoinExchange::applyExchangeRate(const char *file) {
	std::ifstream input;
	input.exceptions(std::ifstream::badbit);
	input.open(file);
	if (input.fail())
		throw std::ifstream::failure("Failed to open file");

	std::string header;
	std::getline(input, header);
	if (header != "date | value")
		printError(header);
	while (!input.eof()) {
		std::string date; float val;
		if (!parseLine(input, " |", true, date, val))
			continue;

		BtcDatabase::iterator rate = _database.upper_bound(date);
		if (rate == _database.end()) {
			std::cerr << "Error: The date is earlier than the first date in the database! " << "\n";
			continue;
		}
		const float newval = val * rate->second;
		std::cout << date << " => " << val
				  << " = " << newval << "\n";
	}
}
