//
// Created by gabry on 06/10/23.
//

#ifndef ACTIVITY_LIST_DATE_H
#define ACTIVITY_LIST_DATE_H

#include <iostream>
#include <string>
class Date {
public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    inline bool operator>(const Date& other) const{
        if(year > other.year || (year == other.year && month > other.month) || (year == other.year && month == other.month && day > other.day)){
            return true;
        }
        return false;
    }
    std::string printDate() const{
        std::string s = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
        return s;
    }

private:
    short int day;
    short int month;
    short int year;
};


#endif //ACTIVITY_LIST_DATE_H
