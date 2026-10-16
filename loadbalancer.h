// loadbalancer.h
#ifndef CS210_PROGRAM2_LOADBALANCER_H
#define CS210_PROGRAM2_LOADBALANCER_H
#endif

#include "request.h"
#include <queue>
#include <stack>

class loadbalancer {
    public:
        loadbalancer() {
            systemTime = 0;
        }
        int getTime();
        void incTime();
        void addRequest(request r);
        request getRequest();
        bool isRequestQueueEmpty();
        int getSize();
    private:
        int systemTime;
        queue<request> requestQueue;
        // priority_queue<request, vector<request>, MaxProcessTime> requestQueue;
        // priority_queue<request, vector<request>, MinProcessTime> requestQueue;
        // priority_queue<request, vector<request>, MaxPID> requestQueue;
        // stack<request> requestQueue;

};