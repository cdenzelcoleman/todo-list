#include "task.h"

Task::Task(std::string desc) : description(desc), completed(false) {}

void Task::markComplete() {
    completed = true;
}

std::string Task::getDescription() const {
    return description;
}

bool Task::isCompleted() const {
    return completed;
}
