#pragma once
#include "DatabaseHandler.h"
#include <string>
#include <msclr/marshal_cppstd.h>

class Sort_File
{
public:
	Sort_File(std::string filename);
	void sortByDateHour();

private: 
	std::string filename;
};

