#include <iostream>
#include <LibraryHeader.h>

int main(void){
    
    Library library;
    library.openLibrary();
    std::cout<<"Created a Project with CMake and executed successfully"<<std::endl;
    return 0;
}