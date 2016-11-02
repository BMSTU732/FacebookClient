#include <Facebook/client.hpp>
#include <iostream>

int main()
{
    std::string token;
    std::cout << "Для получения access_token пройдите по данному url:" << std::endl;
    std::cout << "https://graph.facebook.com/oauth/access_token?%20client_id=267698203632179&%20client_secret=f06dee6c1d63edad9f781f726fca19b0&%20grant_type=fb_exchange_token&%20fb_exchange_token=EAADzeFhVojMBAOVNEgeJR9U1hZCZB1b5jqAWrfVJGCjLZATHrnbKitLlxvZBkjnmEZAJpeX50QKTmlo4UZCEZAOOHgJREOD9lPj4NRQ77swoUyFxVldU8SAV4kkHvyllijkTALHbhQnpMH9m8fZCeDsvBIRZBZBaPqo9MX6Gin6w1ZBbQZDZD" << std::endl;
    std::cout << "Access_token = ";
    std::cin >> token;
    Fb::Client fb_cl({{"token", token}});

    if (fb_cl.check_connection())
        std::cout << "Connected." << std::endl;

    fb_cl.get_friends();

    return 0;
}

}
