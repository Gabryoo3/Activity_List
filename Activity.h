//
// Created by gabry on 06/10/23.
//

#ifndef ACTIVITY_LIST_ACTIVITY_H
#define ACTIVITY_LIST_ACTIVITY_H

#include<iostream>
#include<string>
#include "Time.h"

class Activity {
public:
    explicit Activity(std::string& d, Time& s, Time& e): description(d), start(s), end(e){}

    std::string getDescription() const{
        return description;
    }

    void setDescription(std::string& d){
        description = d;
    }

    Time& getStart() const{
        return start;
    }

    void setStart(Time& s){
        start = s;
    }

    const Time getDuration() const{
        return end - start;
    }

    Time getEnd() const{
        return end;
    }

    void setEnd(Time& e){
        end = e;
    }

    void print() const{
        std::cout << description << " ";
        start.print();
        std::cout << " ";
        end.print();
        std::cout << std::endl;
    }
private:
    std::string& description;
    Time& start;
    Time& end;
};


#endif //ACTIVITY_LIST_ACTIVITY_H
