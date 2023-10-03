#pragma once
#include "DatabaseHandler.h"
#include <string>
#include <msclr/marshal_cppstd.h>

class Sort_File
{
public:
	Sort_File(std::string filename);
	void sortByDate();
	void sortByDate_pa();
	void sortByImportance();
	void sortByDifficulty();

private: 
	std::string filename;
};

