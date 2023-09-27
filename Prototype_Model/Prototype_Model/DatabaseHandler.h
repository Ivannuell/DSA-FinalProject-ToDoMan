#pragma once
#include <string>
class DatabaseHandler
{
public:
	DatabaseHandler(const std::string& databaseFilename) {
		filename = databaseFilename;
	}

	bool addToFile(const std::string& message);
	std::string getFromFile(const int);
	std::string getParsedFromFile(const char, int);
	int getLineNum();
	void removeFromFile(int);

private:
	std::string filename;

};

