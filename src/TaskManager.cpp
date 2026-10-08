#include "TaskManager.hpp"
#include <iostream>
#include <vector>

using namespace std;

TaskManager::TaskManager() : nextId(1) {}

void TaskManager::addTask(const string& description){
    tasks.push_back(Task(nextId++, description));
    cout<< ">> Da them task thanh cong!\n";
}

void TaskManager::listTasks() const{
    if(tasks.empty()){
        cout<< ">> khong co task nao!\n";
        return;
    }
    cout<< "\n--- DANH SACH TASK ---\n";
    for(const auto& task : tasks){
        cout<< "[" << (task.completed ? "X" : " ") << "] "
            << task.id << ". " << task.description << "\n";
    }
    cout<< "-------------------------------\n";
}
