#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>

std::string GetComputerName()
{
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);

    if (GetComputerNameA(computerName, &size))
    {
        return std::string(computerName);
    }
    else
    {
        return "Failed to retrieve computer name.";
    }
}

std::string GetWindowsProductName()
{
    char productName[256] = {};
    const char* currentVersionKey = "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion";
    DWORD size = sizeof(productName);

    // Read the Windows edition name, such as "Windows 11 Pro", from the registry.
    if (RegGetValueA(HKEY_LOCAL_MACHINE, currentVersionKey, "ProductName", RRF_RT_REG_SZ,
                     nullptr, productName, &size) != ERROR_SUCCESS)
    {
        return "Failed to retrieve Windows product name.";
    }

    char buildNumberText[32] = {};
    size = sizeof(buildNumberText);

    // Some Windows 11 installations still report "Windows 10" as their product name.
    if (RegGetValueA(HKEY_LOCAL_MACHINE, currentVersionKey, "CurrentBuildNumber", RRF_RT_REG_SZ,
                     nullptr, buildNumberText, &size) != ERROR_SUCCESS)
    {
        return productName;
    }

    const unsigned long buildNumber = std::strtoul(buildNumberText, nullptr, 10);
    std::string name(productName);
    const std::string::size_type position = name.find("Windows 10");

    // Windows 11 starts at build 22000; correct the legacy name when needed.
    if (buildNumber >= 22000 && position != std::string::npos)
    {
        name.replace(position, 10, "Windows 11");
    }

    return name;
}

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
    std::string computerName = GetComputerName();
    std::cout << "Computer Name: " << computerName << '\n';
    // Retrieve the Windows product name
    std::string windowsProductName = GetWindowsProductName();
    std::cout << "Operating System: " << windowsProductName << '\n';
    return 0;
}