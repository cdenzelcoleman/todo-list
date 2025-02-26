#include <iostream>
#include "task_manager.h"

void showMenu() {
    std::cout << "\n--- To-Do List ---\n";
    std::cout << "1. Add Task\n";
    std::cout << "2. View Tasks\n";
    std::cout << "3. Complete Task\n";
    std::cout << "4. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    TaskManager taskManager;
    int choice;

    do {
        showMenu();
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::string task;
            std::cout << "Enter task: ";
            std::getline(std::cin, task);
            taskManager.addTask(task);
        } else if (choice == 2) {
            taskManager.listTasks();
        } else if (choice == 3) {
            int index;
            std::cout << "Enter task number to complete: ";
            std::cin >> index;
            taskManager.completeTask(index);
        }
    } while (choice != 4);

    std::cout << "Goodbye!\n";
    return 0;
}
