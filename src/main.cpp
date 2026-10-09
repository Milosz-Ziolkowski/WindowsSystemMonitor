#include <iostream>
#include <windows.h>

int main(){
    std::cout << "\n----------------------------------------\n";
    std::cout << "Windows System Monitor Tool!\n";
    std::cout << "----------------------------------------\n";
    std::cout << "This tool is designed to monitor system performance and resource usage.\n\n";
    std::cout << "Made by Milosz\n";
    std::cout << "----------------------------------------\n";
    std::cout << "Starting monitoring...\n\n";
    

    std::cout << "SYSTEMINFORMATION\n";
    // Retrieve the computer name
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);

    if (GetComputerNameA(computerName, &size))
    {
        std::cout << " Computer Name: " << computerName << '\n';
    }
    else
    {
        std::cout << " Failed to retrieve computer name.\n";
    }
    
    return 0;
}