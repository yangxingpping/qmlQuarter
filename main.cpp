
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "hello.world" << endl;
    
    auto console = spdlog::stderr_color_mt("console");
    console->info("hello:{}", 1);
    return 0;
}