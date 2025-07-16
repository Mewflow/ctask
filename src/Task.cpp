#include "../inc/Task.h"

std::string Task::GetTaskTitle() const
{
    return title;
}

std::string Task::GetTaskDescription() const
{
    return description;
}

Status Task::GetTaskStatus() const
{
    return status;
}