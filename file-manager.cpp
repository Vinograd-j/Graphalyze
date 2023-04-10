#include "file-manager.h"

#include <fstream>


std::vector<char> FileManager::ReadFromFile(const std::string& filePath) const 
{

	std::ifstream fileInStream(filePath, std::ios::binary);

	if (!fileInStream.is_open())
		exit(-1);

	fileInStream.seekg(0, std::ios::end);
	size_t length = fileInStream.tellg();
	fileInStream.seekg(0, std::ios::beg);

	std::vector<char> buffer(length);

	fileInStream.read(buffer.data(), buffer.size());

	return buffer;
}

void FileManager::FileFromBytes(const std::vector<char>& bytes, const std::string& filePath) const
{

	std::ofstream fileOutStream(filePath);

	if (!fileOutStream.is_open())
		exit(-1);

	fileOutStream.write(bytes.data(), bytes.size());
	fileOutStream.close();
}