/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:04:27 by ide-spir          #+#    #+#             */
/*   Updated: 2023/08/14 12:35:09 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "BitcoinExchange.hpp"

// int	main(int argc, char **argv)
// {
// 	(void)argv;

// 	if (argc != 2)
// 	{
// 		std::cout << "Error: could not open file." << std::endl;
// 		return (1);
// 	}
// 	BitcoinExchange	exchange;
// 	if (exchange.getBaseStatus() == false)
// 		return (1);
// 	if (DEBUG)
// 		exchange.Print_Map(exchange.getDataMap());
// 	std::string	path = argv[1];
// 	exchange.Search_File_Parser(path);
// 	return (0);
// }

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Usage: ./btc <input>\n";
		return 1;
	}

	try {
		BitcoinExchange exchange("data.csv");
		exchange.applyExchangeRate(argv[1]);
	} catch (std::ios_base::failure const &e) {
		std::cerr << "Error: " << e.what() << '\n';
	}
}
