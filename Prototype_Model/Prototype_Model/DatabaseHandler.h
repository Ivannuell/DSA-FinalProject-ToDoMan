#pragma once
#include <string>
class DatabaseHandler
{
public:
	DatabaseHandler(const std::string& databaseFilename) {
		filename = databaseFilename;
	}

	bool addToFile(const std::string& data);
	std::string getFromFile(int);
	std::string getParsedFromFile(const char, int);
	int getLineNum();
	void removeFromFile(int);
	void insertToFile(const std::string& data, int);

private:
	std::string filename;

};

