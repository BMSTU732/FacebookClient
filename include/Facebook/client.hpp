#ifndef FACEBOOKCLIENT_CLIENT_HPP
#define FACEBOOKCLIENT_CLIENT_HPP

#include <string>
#include <map>

namespace Facebook
{
    class Client
    {
    public:
        using dict_t = std::map<std::string, std::string>;
        Client(dict_t settings):_settings(settings) {}
        auto check_connection() -> bool;
        \\auto get_friends() -> void;

    private:
        dict_t _settings;
        \\static auto write_callback(char *data, size_t size, size_t nmemb, std::string &buff) -> size_t;
    };
}
#endif
