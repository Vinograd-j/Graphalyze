#pragma once

#include <string>
#include <vector>

class FileManager
{

public:

	std::vector<char> ReadFromFile(const std::string& filePath) const;

	void FileFromBytes(const std::vector<char>& bytes, const std::string& filePath) const;


	FileManager() = default;
};

