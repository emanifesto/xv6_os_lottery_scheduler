#include "pstat.h"
#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"

// Prints out state of process table to console
int
main()
{
    struct pstat ps;
    getpinfo(&ps);
    int i;
    printf(1, "%s %s %s %s\n", "PID", "Inuse", "Tickets", "Ticks");
    for(i = 0; i < NPROC; i++){
        if(ps.pid[i] != 0){
            printf(1, "%d %d %d %d\n", ps.pid[i], ps.inuse[i], ps.tickets[i], ps.ticks[i]);
        }
    }
}