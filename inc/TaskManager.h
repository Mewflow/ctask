#pragma once
#include <vector>
#include "Task.h"

class TaskManager {
    public:
        TaskManager(std::vector<Task> tList)
        : taskList(tList)
        {}

        void CreateNewTask();
        void DeleteTask();

    private:
        std::vector<Task> taskList;
};