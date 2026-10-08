#ifndef TASK_HPP
#define TASK_HPP

#include <string>

using namespace std;
struct Task{
    int id;
    string description;
    bool completed;

    Task(int id, const string& desc, bool done = false)
        : id(id), description(desc), completed(done) {}
};

#endif