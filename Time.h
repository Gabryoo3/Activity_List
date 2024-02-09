//
// Created by gabry on 06/10/23.
//

#ifndef ACTIVITY_LIST_TIME_H
#define ACTIVITY_LIST_TIME_H
#include <iostream>

class Time {
public:
    Time(int h, int m): hour(h), minute(m){}

    int getHour() const{
        return hour;
    }

    void setHour(int h){
        hour = h;
    }

    int getMinute() const{
        return minute;
    }

    void setMinute(int m){
        minute = m;
    }



    void print() const{
        std::cout << hour << ":" << minute<< std::endl;
    }

    Time operator-(const Time& t) const{
        return Time(hour - t.hour, minute - t.minute);
    } //overloading così evito di usare 300 getter e setter e semplifico il codice



private:
    int hour;
    int minute;
};


#endif //ACTIVITY_LIST_TIME_H
