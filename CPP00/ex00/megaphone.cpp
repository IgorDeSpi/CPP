/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:26:54 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/06 13:22:40 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string	no_arguments = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string	current_arg;

	if (argc == 1)
	{
		std::cout << no_arguments << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		current_arg = argv[i];
		int	len = current_arg.length();
		for (int j = 0; j < len; j++)
		{
			std::cout << (char)(toupper(current_arg[j]));
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return(0);
}

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// string toUpperCase(string str) {
//     transform(str.begin(), str.end(), str.begin(), ::toupper);
//     return str;
// }

// int main(int argc, char* argv[]) {
//     if (argc < 2) {
//         cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
//         return 0;
//     }

//     // Concatenate all command-line arguments into a single string
//     string inputString = "";
//     for (int i = 1; i < argc; i++) {
//         inputString += string(argv[i]) + " ";
//     }

//     // Convert the string to all uppercase letters
//     string outputString = toUpperCase(inputString);

//     // Output the transformed string
//     cout << outputString << endl;

//     return 0;
// }
