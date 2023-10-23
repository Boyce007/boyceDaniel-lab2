#include <sys/time.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.
    double startTimeMicro = secondsToMicroSeconds(start_time->tv_sec) + start_time->tv_usec; 
    double endTimeMicro = secondsToMicroSeconds(end_time->tv_sec) + end_time->tv_usec;
    return (endTimeMicro-startTimeMicro)/1000000;
}

double secondsToMicroSeconds(double time) {
    return time* 1000000;
}