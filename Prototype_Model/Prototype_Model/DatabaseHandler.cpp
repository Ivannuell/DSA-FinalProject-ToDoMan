#include "DatabaseHandler.h"
#include <iostream>
#include <vector>
#include <fstream>

bool DatabaseHandler::addToFile(const std::string& data)
{
	std::fstream output;
	output.open(filename, std::ios::app);
	if (output.fail())
		return false;
	output << data;
	//output << message << std::endl;
	output.close();
	return true;
}

std::string DatabaseHandler::getFromFile(const int lines)
{
	std::fstream input;
	std::string in;
	input.open(filename);
	int i = 1;

	while (1) {
		std::getline(input, in);
		if (in == "") continue;
		if (i == lines) {
			input.close();
			return in;
		}
		i++;
	}
	
}

std::string DatabaseHandler::getParsedFromFile(const char delim, int pos) {
	std::fstream input;
	std::string out;
	input.open(filename);
	for (int i = 0; i < pos; i++) {
		std::getline(input, out, delim);
	}
	std::getline(input, out, delim);
	input.close();
	return out;
}

int DatabaseHandler::getLineNum() {
	int count = 0;
	std::string en;
	std::fstream in;
	in.open(filename);
	while (!in.eof()) {
		std::getline(in, en);
		count++;
	}
	in.close();

	return count;
}

void DatabaseHandler::removeFromFile(int line_number)
{
	std::fstream read_file;
	read_file.open(filename);
	if (read_file.fail()) {
		System::Windows::Forms::MessageBox::Show("Error Loading file");
	}
	std::vector<std::string> lines;
	std::string line;

	while (getline(read_file, line))
		lines.push_back(line);
	read_file.close();

	std::ofstream write_file;
	write_file.open(filename);

	for (int i = 0; i < lines.size(); i++)
		if (i != line_number)
			write_file << lines[i] << std::endl;

	write_file.close();
}


