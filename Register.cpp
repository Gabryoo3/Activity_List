//
// Created by gabry on 06/10/23.
//

#include "Register.h"
#include <ctime>
#include <exception>

void Register::addActivity(Date &date, Activity &activity) {
    auto tm = localtime(reinterpret_cast<const time_t *>(time(nullptr)));
    if(date > Date(tm->tm_mday, tm->tm_mon, tm->tm_year)){
        throw std::invalid_argument("Date is in the future");
    }
    else
        activities.insert({date, activity}); //FIXME: risolvere problema di insert (fixato)
}

void Register::printDayActivities(const Date &day) const {
    auto it = activities.find(day);
    if (it != activities.end()) {
        std::cout << "Activities for " << day.printDate() << std::endl;
        it->second.print();
    } else {
        std::cout << "No activities for " << day.printDate() << std::endl;
    }
}
