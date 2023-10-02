#include "Sort_File.h"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

Sort_File::Sort_File(std::string filename) {
	this->filename = filename;
}

struct Task {
	std::string startDateTime;
	std::string endDateTime;
	std::string taskName;
	std::string taskDescription;
};

Task parseLine(const std::string& line) {
	Task task;
	std::istringstream iss(line);
	std::getline(iss, task.startDateTime, '|');
	std::getline(iss, task.endDateTime, '|');
	std::getline(iss, task.taskName, '|');
	std::getline(iss, task.taskDescription, '|');
	return task;
}

bool compareTasks(const Task& task1, const Task& task2) {
	return task1.startDateTime < task2.startDateTime;
}

void Sort_File::sortByDateHour()
{
	std::ifstream inputFile(this->filename);
	if (!inputFile) {
		return;
	}

	std::vector<Task> tasks; 
	std::string line; 

	while (std::getline(inputFile, line)) { 
		tasks.push_back(parseLine(line)); 
	}

	std::sort(tasks.begin(), tasks.end(), compareTasks);
	inputFile.close(); 

	std::ofstream outputFile(filename);
	if (!outputFile) {
		return;
	}

	for (const Task& task : tasks) {
		outputFile << task.startDateTime << "|" << task.endDateTime << "|"
			<< task.taskName << "|" << task.taskDescription << "|" << std::endl;
	}

	outputFile.close();
}