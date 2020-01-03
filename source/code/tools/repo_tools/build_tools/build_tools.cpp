#include <iostream>
#include "code/tools/repo_tools/build_tools/task_executer.hpp"
#include "code/tools/repo_tools/build_tools/program_options/program_options.hpp"


int main(int const argc, char** const argv){
    
    Program_Options program_options(argc, argv);
    Task_Executer::Execute_Needed_Tasks(program_options);
}
