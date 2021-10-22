#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int i;
    float total, min, max;
    total = min = max = 0;
    for (i=0; i++; i<setlength)
    {
        total = total + numberset[i];
        if(numberset[i] > max) max = numberset[i];
        if(numberset[i] < min) min = numberset[i];
    }
        
    s.average = total/setlength;
    s.min = min;
    s.max = max;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
