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
	int n;
	cin >> n;
	double arr[n];
	for(int i=0;i<n;i++){
			cin >> arr[i];
		}
	int index = 0;
	double val = 0;
	for(int i=0;i<n;i++){
			if(arr[i]>=45){
				index = i;
				val = arr[i];
				break;
			}

		}
	double minval = INT_MAX;
	double maxval = INT_MIN;
	double average = 0;
	for(int i=0;i<n;i++){
				if(arr[i]<minval){
					minval = arr[i];
				}
				if(arr[i]>maxval){
					maxval = arr[i];
				}
				average += arr[i];
			}
	average = average/n;
	int normal = 0;
	int warning = 0;
	int critical = 0;
	int shutdown = 0;
	for(int i=0;i<n;i++){
	if(arr[i]>=0&&arr[i]<=29){
			normal++;
		}else if(arr[i]>=30&&arr[i]<=44){
			warning++;
		}else if(arr[i]>=45&&arr[i]<=59){
			critical++;
		}else if(arr[i]>=60){
			shutdown++;
		}
	}
	cout << n << " " << "Values entered: ";
	for(int i=0;i<n;i++){
			if(arr[i]<0){
				continue;
			}
			cout << arr[i] << " ";
		}
	cout << "FIRST CRITICAL: " << "INDEX: " << index << " -> " << val << " ";
	cout << "MIN: " << minval << " MAXVAL: " << maxval << " AVERAGE: " << average << " ";
	cout << "NORMAL: " << normal << " WARNING: " << warning << " CRITICAL: " << critical << " SHUTDOWN: " << shutdown << " ";
	return 0;
}
