//
// Created by gabry on 06/10/23.
//

#ifndef ACTIVITY_LIST_TIME_H
#define ACTIVITY_LIST_TIME_H
#include <iostream>

class Time {
public:
    Time(int h, int m, int s): hour(h), minute(m), second(s){}

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

    int getSecond() const{
        return second;
    }

    void setSecond(int s){
        second = s;
    }

    void print() const{
        std::cout << hour << ":" << minute << ":" << second << std::endl;
    }

    Time operator-(const Time& t) const{
        return Time(hour - t.hour, minute - t.minute, second - t.second);
    } //overloading così evito di usare 300 getter e setter e semplifico il codice



private:
    int hour;
    int minute;
    int second;
};


#endif //ACTIVITY_LIST_TIME_H
