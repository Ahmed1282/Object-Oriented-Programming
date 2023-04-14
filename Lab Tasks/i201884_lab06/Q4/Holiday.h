#ifndef HOLIDAY_H
#define HOLIDAY_H
#include <string>
using namespace std;
class Holiday{
private:
    string name;
    int day;
    string month;
public:
    Holiday();
    Holiday(string, int, string);
    Holiday(Holiday &copy);
    bool setName(const string &s);
    string getName() const;
    bool setDay(int u);
    int getDay() const;
    bool setMonth(const string &p);
    string getMonth() const;
};

#endif