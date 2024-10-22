#include <iostream>
#include <string>

#include "verifyUser.h"

int main()
{
	verifyUser user;

	std::string userID, passwordID;

	std::string remoteID = user.usernmeFunc(userID);
	std::string remotePassword = user.passwordFunc(passwordID);

	std::string localID = user.memoryUsername(userID);
	std::string localPassword = user.memoryPassword(passwordID);

	decltype(localID) localUser = "user123";
	decltype(localPassword) localSecret = "1234";

	if((std::getline(std::cin, remoteID)) && (std::getline(std::cin, remotePassword)))
	{
			if((remoteID == localID) || (remotePassword == localSecret))
			{
				std::cout << "username and password is correct\n";
				return 0;
			}else{
				std::cout << "username and password is incorrect\n";
				return -1;
			};
	}else{
		std::cout << "shecgef\n";
		return -1;
	};

};