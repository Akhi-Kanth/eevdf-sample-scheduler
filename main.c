#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Request {
    int request_length;
    int client_weight;
};

struct Process {
    float eligible_time;
    float eligible_deadline;
    struct Request currentRequest;
};

void calculate_ve(struct Process p, int real_time) {
    

}

struct Request genereate_request() {
    int random_request_time = (rand() % 5) + 1;
    int random_weight = (rand() % 5) + 1;

    struct Request random_request;
    random_request.request_length = random_request_time;
    random_request.client_weight = random_weight;

    return random_request;
}

int main () {
    srand(time(NULL));
    genereate_request();
}
