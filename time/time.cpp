#include <time.h>
#include <iostream>

using namespace std;

int main() {
	__time32_t rawtime;   //variável do tipo long
	struct tm timeinfo;	  //struct de time, onde tem sec, min, hour, mday, mon, year, wday, yday e isdst
	char buffer[32];
	_time32(&rawtime); // pega o timestamp atual
	_localtime32_s(&timeinfo, &rawtime);  //pega o timestamp da variável do tipo long e transforma em struct tm
	asctime_s(buffer, 32, &timeinfo);

	cout << "The current time is " << buffer  << endl;
	cout << "The hours, minutes and seconds: " << timeinfo.tm_hour << ":" << timeinfo.tm_min << ":" << timeinfo.tm_sec << "\n" <<  endl;
	cout << "The seconds since 01/01/1970: " << rawtime << "\n" << endl;


	return 0;

}