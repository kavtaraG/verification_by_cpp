#ifndef VERIFYUSER_H
#define VERIFYUSER_H

#include <iostream>
#include <string>

class verifyUser
{
private:
	std::string name;
	std::string user_password;

public:
	std::string memoryUsername(std::string);
	std::string usernmeFunc(std::string);
	std::string memoryPassword(std::string);
	std::string passwordFunc(std::string);

	verifyUser(const std::string &strName = "user123",
			const std::string &strPass = "1234") : 
			name(strName), user_password(strPass) {};
			
	~verifyUser();
};

verifyUser::~verifyUser()
{
};

inline std::string verifyUser::memoryUsername(std::string name)
{

	return std::string();
}

inline std::string verifyUser::usernmeFunc(std::string name)
{

	return std::string();
};

inline std::string verifyUser::memoryPassword(std::string user_password)
{

	return std::string();
};

inline std::string verifyUser::passwordFunc(std::string user_password)
{

	return std::string();
};

#endif //VERIFYUSER_H