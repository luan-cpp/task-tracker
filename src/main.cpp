#include <iostream>
#include "Task.hpp"

using namespace std;

int main(){
    cout<< "============================\n";
    cout<< "      TASK TRACKER CLI      \n";
    cout<< "============================\n";
    cout<< "1. Xem dans sach task\n";
    cout<< "2. Them task moi\n";
    cout<< "3. Thoat\n";
    cout<< "Lua chon: ";

    int choice;
    if(cin>> choice){
        cout<< "Ban da chon: " << choice << "\n";
    }
    return 0;
}