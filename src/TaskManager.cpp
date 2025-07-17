#include "../inc/TaskManager.h"
#include "Task.h"
#include <ios>
#include <iostream>
#include <string>
#include <limits>

void TaskManager::CreateNewTask()
{
    // Task title
    std::string taskTitle {""};
    std::cout << "Task: ";
    std::cin >> taskTitle;

    // Task description
    std::string taskDescription;
    std::cout << "Description: ";
    std::getline(std::cin, taskDescription);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Task status (Default at creation is always pending!)
    Status taskStatus {Pending};

    // Create a new instance of Task
    Task newTask{taskTitle, taskDescription, taskStatus};

    // Add Task to the TaskList.
    taskList.push_back(newTask);
    std::cout << "\nTask: " << newTask.GetTaskTitle() << " was created successfully!\n";
}