#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>

//BEFORE EXECUTING WRITE ANOTHER C / C++ PROGRAM THAT YOU WISH TO EXECUTE DURING CHILD PROCESS EXECUTION
// HERE ./testdemo2 IS BEING USED

using namespace std;
int main(){
        char* args[2];
        // Set program path =============
        //string str = "/Users/Mdasifurrahman/Desktop/./testdemo2";
        string str = "C:/Users/akash/testdemo.c";
        args[0]=(char*)str.c_str();
        args[1]=NULL;
         // Set program path ============

        int pid = fork();
        int code;
        if(pid==0){
            cout<<"Child pid:"<<getpid()<<endl;
            if(execvp(args[0],args)==-1){
                perror("execv");
            }
            _exit(1);

        }
        if(pid>0){
            code = wait(0);
            cout<<"\nParent pid:"<<getpid()<<endl;
        }
}
