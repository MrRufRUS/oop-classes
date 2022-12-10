#include <iostream>
#include <string>


struct process {
    unsigned int id;
    std::string name;
};
class TaskManager {
public:
    unsigned int ram;
    unsigned int used_ram;
    unsigned int processor_load;
private:
    friend void task_killer(TaskManager& tm, unsigned int id);
    friend TaskManager callTaskManager();
    std::string user;
    std::string mac_adress;
    process processes_visible[100];
};
class systemTaskManager : TaskManager {
public:
    friend bool operator== (const systemTaskManager& stm1, const systemTaskManager& stm2);
    std::string platform;
};

bool operator== (const systemTaskManager& stm1, const systemTaskManager& stm2) {
    return stm1.platform == stm2.platform;
}
TaskManager callTaskManager() {
    TaskManager calledTaskManager;
    return calledTaskManager;
}
void task_killer(TaskManager& tm, unsigned int id) {

}

int main() {
    return 0;
}
