#include<iostream>
#include<cstdio>

using namespace std;

int str[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int str2[2] = {365, 366};

int isLeapYear(int year){
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
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



int main(int argc, char* argv[]){
	int year,month,day,sum;
    	int year2,month2,day2,sum2;
	int dis; // calculate the distance between 2 days;
	while((scanf("%4d%2d%2d",&year,&month,&day))!= EOF){
		scanf("%4d%2d%2d",&year2,&month2,&day2);
		dis = 0;
		sum = calSum(year, month, day);
		sum2 = calSum(year2, month2, day2);
		if(year  == year2)
			dis = sum2 - sum + 1;
		else if(year2 - year == 1)
			dis = sum2 - sum + 1 + str2[isLeapYear(year)];		      
		else{
			dis = sum2 - sum + 1 + str2[isLeapYear(year)];
			while(year2 - year > 1)
				dis += str2[isLeapYear(++year)];
		}
	}
	cout << dis << endl;
	return 0;
}
