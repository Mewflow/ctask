#pragma once
#include <vector>
#include "Task.h"

class TaskManager {
    public:
        TaskManager(std::vector<Task> tList)
        : taskList(tList)
        {}

        void CreateNewTask(Task task);

    private:
        std::vector<Task> taskList;
};