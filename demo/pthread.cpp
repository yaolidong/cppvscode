#include <iostream>
#include <pthread.h>
#include <cstdlib>
using namespace std;

#define THREADNUM 5

struct thread_data{
    int thread_id;
    char *message;
};


void* sayHello(void* threadarg)
{
    struct thread_data *my_data ;
    my_data=(thread_data *)threadarg;
    cout<<"The thread ID is :"<<my_data->thread_id<<endl;
    cout<<"The message is :"<<my_data->message<<endl;
    pthread_exit(NULL);
}

int main (){
    pthread_t tids[THREADNUM];
    struct thread_data td[THREADNUM];
    int rc;
    for(int i = 0;i < THREADNUM; i++){
        td[i].thread_id = i;
        td[i].message = (char *)"This is a message!";
        cout<<"main():创建线程："<<td[i].thread_id<<endl;
        rc = pthread_create(&tids[i],NULL,sayHello,(void*) &(td[i]));
        if (rc )
        {
            cout<<"Thread create is error:error code is "<<rc<<endl;
            exit(-1);
        }
    }

    pthread_exit(NULL);




}