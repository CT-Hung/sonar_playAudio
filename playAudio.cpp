#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int main(int argc, char **argv){
    string filename;
    int times = 1;
    for(int i=1; i<argc; i++){
        string argi = argv[i];
        if(argi.find("--filename=") == 0){
            filename = argi.substr(11);
        }else if(argi.find("--times=") == 0){
            times = atoi(argi.substr(8).c_str());
        }
    }
    
    if((filename=="") || (times<=0)) {
        cout << "Usage: rand_vertices --filename=FILE --times=次數" << endl;
        return(1);
    }

    for(int j=0; j<times; j++){    
        cout << j+1 << "th time" << endl;
        system(filename.c_str());
    }
}
