//============================================================================
// Name        : helloworld.cpp
// Author      : Soham Halarnkar
// Problem     : 1.1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double num = 0;
	cin >> num;
	int status_code=0;
	string status;
	string reading;
	string action;
	if(num < 0 ){
		status_code = -1;
	}else if(num>=0&&num<=29){
		status_code = 0;
	}else if(num>=30&&num<=44){
		status_code = 1;
	}else if(num>=45&&num<=59){
		status_code = 2;
	}else if(num>=60){
		status_code = 3;
	}
	switch(status_code){
	case -1:
		status = "SENSOR_ERROR";
		action = "Sensor fault";
		break;
	case 0:
			status = "NORMAL";
			action = "No action required";
			break;
	case 1:
			status = "WARNING";
			action = "Alert sent to supervisor";
			break;
	case 2:
			status = "CRITICAL";
			action = "Cooling system triggered";
			break;
	case 3:
			status = "SHUTDOWN";
			action = "Emergency shutdown triggered";
			break;
	}
	reading = (num>=25)?"ABOVE AVERAGE":"BELOW AVERAGE";
	double f = (num * 9/5) + 32;
	cout << num << " " << f << " " << status << " " << action << " " << reading << endl;
	return 0;
}
