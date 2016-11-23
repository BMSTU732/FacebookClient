#include <Facebook/client.hpp>
#include <iostream>
#include <curl/curl.h>

namespace Facebook {

	auto FacebookClient::check_connection()-> bool
	{

		CURL *curl = curl_easy_init();
		if (curl) {
			std::string data = "access_token=" + settings_["token"];
			CURLcode res;
			curl_easy_setopt(curl, CURLOPT_URL, "https://graph.facebook.com/v2.8/100006195558588/friends?");
			curl_easy_setopt(curl, CURLOPT_POST, 1);
			curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());
			curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, data.length());
			res = curl_easy_perform(curl);
			if (res == CURLE_OK) {
				long response_code;
				curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
				std::cout << std::endl;
				std::cout << response_code << std::endl;
				return true;
			}
			curl_easy_cleanup(curl);
		}
		return false;
	};
}
