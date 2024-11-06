#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip> 

using namespace std;
using namespace chrono;

void showCurrentTime() {
    auto now = system_clock::now();
    auto time_now = system_clock::to_time_t(now);

    struct tm* time_info = localtime(&time_now);

    cout << put_time(time_info, "%H:%M:%S") << endl;
}

int main() {
    while (true) {
        system("cls");  
        showCurrentTime(); 
        this_thread::sleep_for(seconds(1));  
    }
    return 0;
}
