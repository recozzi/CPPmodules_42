/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:22:26 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 12:08:27 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#define	ARGS 0
#define	INPUT 1
#define	OUTPUT 2
#define VALUE 3

static int	printErr(int err)
{
	std::cout << std::endl;
	if (err == ARGS)
		std::cout << "Invalid number of arguments, use: ./replace Baudelaire [s1] [s2]" << std::endl;
	else if (err == INPUT)
		std::cout << "File reading error" << std::endl;
	else if (err == OUTPUT)
		std::cout << "File writing error" << std::endl;
	else if (err == VALUE)
		std::cout << "Error: field empty" << std::endl;
	std::cout << std::endl;
	return 1;
}

static int	checkError(char **argv, std::ifstream& ifs, std::ofstream& ofs)
{	
	if (!*argv[2] || !*argv[3])
		return printErr(VALUE);
	if (ifs.good() == false)
	{
		ifs.close();
		return printErr(INPUT);
	}
	if (ofs.good() == false)
	{
		ofs.close();
		return printErr(OUTPUT);
	}
	return 0;
}

static std::string	replaceStr(std::string s1, std::string s2, std::string buffer)
{
	std::string	newStr;
	size_t		pos;

	pos = buffer.find(s1);
	newStr = buffer.substr(0, pos);
	newStr.append(s2);
	newStr.append(buffer.substr(pos + s1.length(), buffer.length()));
	return newStr;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return printErr(ARGS);

	std::ifstream	ifs(argv[1]);
	std::string		line = std::string(argv[1]) + ".replace";
	std::ofstream	ofs(line.c_str());
	std::string		buffer;
	
	if (checkError(argv, ifs, ofs))
		return 1;
	while (std::getline(ifs, buffer))
	{
		while (buffer.find(std::string(argv[2])) != std::string::npos)
			buffer = replaceStr(std::string(argv[2]), std::string(argv[3]), buffer);
		ofs << buffer << std::endl;
	}
	
	ifs.close();
	ofs.close();
	
	return 0;
}
