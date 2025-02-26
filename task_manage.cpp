#include "task_manager.h"
#include <iostream>

void TaskManager::addTask(const std::string& description) {
    tasks.push_back(Task(description));
}

void TaskManager::listTasks() const {
    if (tasks.empty()) {
        std::cout << "No tasks available.\n";
        return;
    }

    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i].getDescription()
                  << (tasks[i].isCompleted() ? " [✓]" : " [ ]") << "\n";
    }
}

void TaskManager::completeTask(int index) {
    if (index >= 1 && index <= tasks.size()) {
        tasks[index - 1].markComplete();
        std::cout << "Task marked as completed.\n";
    } else {
        std::cout << "Invalid task index.\n";
    }
}
