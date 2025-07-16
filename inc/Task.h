#pragma once
#include <string>

enum Status {
    Pending     = 1,
    Done        = 2,
    Deleted     = 3
};

class Task {
    public:
        Task(std::string taskTitle, std::string taskDescription, Status taskStatus)
        : title(taskTitle), description(taskDescription), status(taskStatus)
        {}

        // Getters
        std::string GetTaskTitle() const;
        std::string GetTaskDescription() const;
        Status GetTaskStatus() const;

        // Setters
        void SetTaskTitle(std::string &t);
        void SetTaskDescription(std::string &t);
        void SetTaskStatus(Status &s);

    private:
        std::string title;
        std::string description;
        Status status;
};