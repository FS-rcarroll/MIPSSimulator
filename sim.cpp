/******************************************************
*
*
*        Name: Renbecca Carroll
*        Class: CDA 3101
*        Assignment: Asg 3 (a simulator of a subset of the
*        MIPS instruction set *
*        Compile: "gcc -g sim.c"
*
*
*
******************************************************/
#include <iostream>
#include <fstream>

#define MAXLINE 80
#define MAXREG  5


class Instruction {
public:
    std::string name;
    int opCode;
    char type;
    int funcCode;

    Instruction(std::string n, char t, int o, int f) : name(n), type(t), opCode(o), funcCode(f) {
    }
};

class Resource {
public:
    Resource() {
    }
};
// Validates for exception handling
void validate(int n){

}
int log(){
    std::ofstream myfile;
    myfile.open ("log.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();
    return 0;
}
int main() {

    char line[MAXLINE] = {0}, newLine[MAXLINE] = {0};
    char str1[MAXLINE], str2[MAXLINE];
    int int1, int2;
    int totalTextLines = 0;
    int totalDataLines = 0;
    int lineCount = 1;

    while (fgets(line, MAXLINE, stdin)) {
        //line number and data number
        if(lineCount == 1)
        {
            if (sscanf(line, "%d %d", int1, int2) == 2){
                totalTextLines = int1;
                totalDataLines = int2;
            }
        }else{
            if (sscanf(line, "%x", int1)) {
                validate(int1);
            }
        }
        lineCount++;
    }
    return 0;
}
