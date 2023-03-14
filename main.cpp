#include <stdio.h>
#include <pthread.h>
#include <iostream>
using namespace std;


void *print_hello(void *arg);
auto add = [](int a, int b) { return a + b; };

void *print_hello(void *arg) {
    long sum    = 0;
    long *value = (long *) arg;
    for (long i = 0; i < 1000000; ++i) {
        sum += *value;
    }
    cout << "Thread: " << sum << endl;
}

int main() {
    pthread_t thread;
    pthread_t thread2;

    long val = 1;
    long val2 = 2;

    pthread_create(&thread, NULL, print_hello, (void*) &val);
    pthread_join(thread, NULL);

    pthread_create(&thread2, NULL, print_hello, (void*) &val2);
    pthread_join(thread2, NULL);



    return 0;
}




