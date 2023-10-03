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

struct Parameter {
	std::string startDateTime;
	std::string endDateTime;
	std::string taskName;
	std::string taskDescription;
	std::string subject;
	std::string difficulty;
	std::string importance;
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

Parameter parseLine_param(const std::string& line) {
	Parameter para;
	std::istringstream iss(line);
	std::getline(iss, para.startDateTime, '|'); 
	std::getline(iss, para.endDateTime, '|'); 
	std::getline(iss, para.taskName, '|'); 
	std::getline(iss, para.taskDescription, '|');
	std::getline(iss, para.subject, '|');
	std::getline(iss, para.difficulty, '|');
	std::getline(iss, para.importance, '|');
	return para;
}

bool compareTasks(const Task& task1, const Task& task2) {
	return task1.startDateTime < task2.startDateTime;
}

bool compareTasks_pa(const Parameter& task1, const Parameter& task2) {
	return task1.endDateTime < task2.endDateTime;
}

bool compareTasks_param(const Parameter& task1, const Parameter& task2) {
	return task1.difficulty < task2.difficulty;
}

bool compareTasks_param_imp(const Parameter& task1, const Parameter& task2) {
	return task1.importance > task2.importance;
}

void Sort_File::sortByDifficulty()
{
	std::ifstream inputFile(".\\Database\\TaskParameters.txt");
	if (!inputFile) {
		return;
	}

	std::vector<Parameter> param;
	std::string line;

	while (std::getline(inputFile, line)) {
		param.push_back(parseLine_param(line));
	}

	std::sort(param.begin(), param.end(), compareTasks_param);

	std::ofstream outputFile(".\\Database\\TaskParameters.txt");
	if (!outputFile) {
		return;
	}

	for (const Parameter& para : param) {
		outputFile << para.startDateTime << "|" << para.endDateTime << "|" << para.taskName << "|" << para.taskDescription << "|" << para.subject << "|" << para.difficulty << "|" << para.importance << "|" << std::endl;
	}

	outputFile.close();
}

void Sort_File::sortByDate()
{
	std::ifstream inputFile(".\\Database\\Task.txt");
	if (!inputFile) {
		return;
	}

	std::vector<Task> param;
	std::string line;

	while (std::getline(inputFile, line)) {
		param.push_back(parseLine(line));
	}

	std::sort(param.begin(), param.end(), compareTasks);

	std::ofstream outputFile(".\\Database\\TaskParameters.txt");
	if (!outputFile) {
		return;
	}

	for (const Task& para : param) {
		outputFile << para.startDateTime << "|" << para.endDateTime << "|" << para.taskName << "|" << para.taskDescription << "|" << std::endl; 
	}

	outputFile.close();
}

void Sort_File::sortByDate_pa()
{
	std::ifstream inputFile(".\\Database\\TaskParameters.txt");
	if (!inputFile) {
		return;
	}

	std::vector<Parameter> param;
	std::string line;

	while (std::getline(inputFile, line)) {
		param.push_back(parseLine_param(line));
	}

	std::sort(param.begin(), param.end(), compareTasks_pa);

	std::ofstream outputFile(".\\Database\\TaskParameters.txt");
	if (!outputFile) {
		return;
	}

	for (const Parameter& para : param) {
		outputFile << para.startDateTime << "|" << para.endDateTime << "|" << para.taskName << "|" << para.taskDescription << "|" << para.subject << "|" << para.difficulty << "|" << para.importance << "|" << std::endl;
	}

	outputFile.close();
}

void Sort_File::sortByImportance()
{
	std::ifstream inputFile(".\\Database\\TaskParameters.txt");
	if (!inputFile) {
		return;
	}

	std::vector<Parameter> param;
	std::string line;

	while (std::getline(inputFile, line)) {
		param.push_back(parseLine_param(line));
	}

	std::sort(param.begin(), param.end(), compareTasks_param_imp);

	std::ofstream outputFile(".\\Database\\TaskParameters.txt");
	if (!outputFile) {
		return;
	}

	for (const Parameter& para : param) {
		outputFile << para.startDateTime << "|" << para.endDateTime << "|" << para.taskName << "|" << para.taskDescription << "|" << para.subject << "|" << para.difficulty << "|" << para.importance << "|" << std::endl;
	}

	outputFile.close();
}
