#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include "task.h"
#include <vector>

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description);
    void listTasks() const;
    void completeTask(int index);
};

#endif
