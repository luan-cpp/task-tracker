#ifndef TASK_MANAGER_HPP
#define TASK_MANAGER_HPP

#include <vector>
#include <string>
#include "Task.hpp"

using namespace std;
class TaskManager {
private:
    vector<Task> tasks;
    int nextId;
public:
    TaskManager();
    void addTask(const string& description);
    void listTasks() const;    
};


#endif