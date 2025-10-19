#include "pstat.h"
#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"

extern int getpinfo(struct pstat *ps);

// Prints out state of process table to console
int
main()
{
    struct pstat ps;
    getpinfo(&ps);
    int i;
    printf(2, "%10s%10s%10s%10s\n", "PID", "Inuse", "Tickets", "Ticks");
    for(i = 0; i < NPROC; i++){
        if(ps.pid[i] != 0){
            printf(2, "%10d%10d%10d%10d\n", ps.pid[i], ps.inuse[i], ps.tickets[i], ps.ticks[i]);
        }
    }
}