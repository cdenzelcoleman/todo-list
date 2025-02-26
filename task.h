#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    std::string description;
    bool completed;

public:
    Task(std::string desc);
    void markComplete();
    std::string getDescription() const;
    bool isCompleted() const;
};

#endif
