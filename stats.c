#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int i;
    float total, min, max;
    
    s.average = 0;
    s.min = 0;
    s.max = 0;
    total = min = max = 0;
    
    if(setlength == 0)
    {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
    }
    else
    {
        for (i=0; i++; i<setlength)
        {
            s.average = s.average + numberset[i];
            if(numberset[i] < s.min) s.min = numberset[i];
            if(numberset[i] > s.max) s.max = numberset[i];
        }
    }
    s.average = s.average / setlength;
    return s;
    
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
