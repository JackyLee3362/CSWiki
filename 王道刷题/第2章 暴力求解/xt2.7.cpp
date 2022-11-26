#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int ctime1[4] = {2022,1,1,6};
int time_input[4] = {0,0,0,0};
int str2[2] = {365, 366};
int str[2][13] = {
       	{0,31,28,31,30,31,30,31,31,30,31,30,31}, 
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};

string monthName[12] = {
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

string weekName[7] = {
	"Sunday", 
	"Monday", 
	"Tuesday", 
	"Wednesday",
       	"Thursday", 
	"Friday",
       	"Saturday"
};

int monthNum(string month){
	for(int i = 0; i < 12; i++)
		if(month == monthName[i]) return i+1;
	return 0;
}

int isLeapYear(int year){
	if((year % 4 == 0  && year % 100 != 0) || year % 400 == 0)return 1;
	return 0;
}

int calSum(int year, int month, int day){
	int sum = 0;
	int LeapYear = isLeapYear(year);
	for(int i = 0; i < month ; i++){
		sum += str[LeapYear][i];
	}
	sum += day;
	return sum;
}

int calDis(int time1[], int time2[]){
	int year1 = time1[0], month1 = time1[1], day1 = time1[2];
	int year2 = time2[0], month2 = time2[1], day2 = time2[2];
	int dis = 0;
	int sum1 = calSum(year1, month1, day1);
	int sum2 = calSum(year2, month2, day2);
	if(year1  == year2)
		dis = sum2 - sum1 + 1;
	else if(year2 - year1 == 1)
		dis = sum2 - sum1 + 1 + str2[isLeapYear(year1)];		      
	else{
		dis = sum2 - sum1 + 1 + str2[isLeapYear(year1)];
		while(year2 - year1 > 1){
			dis += str2[isLeapYear(++year1)];
		}
	}
	return dis;
}


int main(int argc, char* argv[]){
	int year,month,day,week;
	string monthName_input;
	int dis;
	while(cin >> day >> monthName_input >> year){
		month = monthNum(monthName_input);
		time_input[0] = year;
		time_input[1] = month;
		time_input[2] = day;
		if(year >= ctime1[0]) dis =  calDis(ctime1, time_input);
		else dis = - calDis(time_input, ctime1);
 				
		printf("%4d-%02d-%02d --> ", year, month, day);

		if(dis > 0) dis--;
		else if(dis < 0) dis++;
		cout << "2022-01-01 = " << dis <<endl;
	       	while(dis < 0) dis += 700;
		week = (ctime1[3] + dis) % 7;
		cout << weekName[week] <<endl;
	}
	return 0;	
}
