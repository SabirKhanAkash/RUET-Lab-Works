#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>

//BEFORE EXECUTING WRITE ANOTHER C / C++ PROGRAM THAT YOU WISH TO EXECUTE DURING CHILD PROCESS EXECUTION AND SEND MESSAGE TO
// HERE ./testdemo2 IS BEING USED


using namespace std;
int main()
{
    char* args[2];
    int val;
    // USER YOUR PROGRAM'S PATH HERE
    //string str = "/Users/Mdasifurrahman/Desktop/./testdemo2";
    string str = "C:/Users/akash/testdemo.c";
    args[0]=(char*)str.c_str();
    args[1]=NULL;


    int pipefd[2];   //[0] read end   [1] write end
    pipe(pipefd);    //CREATE PIPE

    int pid = fork();
    int code;
    if(pid==0)
    {
        cout<<"Child pid:"<<getpid()<<endl;
        close(pipefd[1]);
        dup2(pipefd[0],STDIN_FILENO);     //REPLACE INPUT FILE DESCRIPTOR WITH READ END OF PIPE
        if(execvp(args[0],args)==-1)
        {
            perror("execv");
        }
        _exit(1);
    }
    else
    {
        close(pipefd[0]);
        cout<<"\nParent pid:"<<getpid()<<endl;
        cout<<"ENTER ANY VALUE"<<endl;
        cin>>val;
        dup2(pipefd[1],STDOUT_FILENO);   //REPLACE OUTPUT FILE DESCRIPTOR WITH WRITE END OF PIPE
        cout<<val;

    }
    close(pipefd[0]);
    close(pipefd[1]);
}
