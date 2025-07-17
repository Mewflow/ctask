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

/*
    Gets the title of the Task from the user and iterates through the list to delete it.
*/
void TaskManager::DeleteTask()
{
    std::cout << "Enter the title of the Task you want to delete: ";
    std::string taskToDelete{""};
    std::cin >> taskToDelete;

    // Search the TaskList for this entry and remove it
    for(auto it = taskList.begin(); it < taskList.end(); it++ )
    {    
        if(it->GetTaskTitle() == taskToDelete)
        {
            taskList.erase(it);
            std::cout << "Deleted task: " << taskToDelete << " successfully." << std::endl;
            return;
        }

        else 
        {
            std::cout << "Couldn't find task: " << taskToDelete << ". Returning to main menu.\n" << std::endl;
        }
    }
}