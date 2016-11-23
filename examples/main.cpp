#include <Facebook/client.hpp>
#include <iostream>
#include <map>
#include <string>
int main()
{
    setlocale(LC_ALL, "rus");
    std::string access_token;
    std::cout << "Для получения access_token перейдите по ссылке" << std::endl;
	std::cout << "https://www.facebook.com/dialog/oauth?client_id=267698203632179&redirect_uri=http://vk.ru/&response_type=token" << std::endl;
	std::cout << "Access_token: ";
	std::cin >> access_token;
	Facebook::FacebookClient data({ { "token", access_token } });
	data.check_connection();
}
