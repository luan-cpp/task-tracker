#include <iostream>
#include "Task.hpp"
#include "TaskManager.hpp"

using namespace std;

int main(){
    TaskManager manager;
    int choice;
    while(true){
        cout<< "============================\n";
        cout<< "      TASK TRACKER CLI      \n";
        cout<< "============================\n";
        cout<< "1. Xem dans sach task\n";
        cout<< "2. Them task moi\n";
        cout<< "3. Thoat\n";
        cout<< "Lua chon: ";

        if(!(cin>> choice)){
            break;
        }

        if(choice == 1){
            manager.listTasks();
        }
        else if(choice == 2){
            cout<< "Moi ban nhap mo ta task: ";
            string desc;
            cin.ignore();
            getline(cin, desc);
            manager.addTask(desc);
        }
        else if(choice == 3){
            cout<< "Tam biet!\n";
            break;
        }
        else{
            cout << "Lua chon khong hop le!\n";
        }
    }
    return 0;
    
}