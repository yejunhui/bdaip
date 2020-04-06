#include "baiduaip/imageclassify.h"

//APPID/AK/SK

std::string app_id = "19237731";
std::string api_key = "EbKtLMi1icxtlYbrO2fzKuQn";
std::string secret_key = "ZEwzbcVlIFQz5PAsFzKkI3ttYsGXneZp";

aip::Imageclassify client(app_id,api_key,secret_key);

Json::Value result;
std::string;

//车辆检测
class carDetection(){

	//aip::get_file_content()

	carDetection(std::string fileName){
		aip::get_file_content(fileName,&image);
		result = client.vehicle_detect(image,aip::null);
		return result;
	}

}
