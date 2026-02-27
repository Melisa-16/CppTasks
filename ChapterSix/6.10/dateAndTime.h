#ifndef DATEANDTIME_H
#define DATEANDTIME_H

class DateAndTime {
public:
	DateAndTime(int = 0, int = 0, int = 0,int = 0, int = 0, int = 0);

	void setTime(int, int, int);

	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	int getHour();
	int getMinute();
	int getSecond();

	void printMilitary();
	void printStandard();
	void tick();
	
	//date
	void print();
	void nextDay();
	void setDate(int, int, int);
private:
	int hour;
	int minute;
	int second;
	int month;
	int day;
	int year;
};
#endif