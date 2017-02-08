#include <stdio.h>
#include "_hgr.h"
// #include "syntethicTask.h"
#include <errno.h>
#define PARAM_SIZE 7
#define TEST_SIZE 1
double FREQUENCY=0;

//sudo update-rc.d ondemand disable
int gen_main(int argc, char *argv[]){
	log("\n");
	int index=0;

	hgr_init(SCHED_FIFO, PARTITIONED, PRIO_CEILING);

 	//period,deadline,priority,proccessor,task_name 
//  	index=hgr_task_creator(0,tspec_from(7, SEC),tspec_from(7, SEC),99,1,NOW,G1); //1528.032252 miliseconds syntethicTask1
	//index=hgr_task_creator(1,tspec_from(7, SEC),tspec_from(7, SEC),99,1,NOW,G6); //1948.142624 miliseconds syntethicTask3
 	index=hgr_task_creator(0,tspec_from(7, SEC),tspec_from(7, SEC),99,1,NOW); //1528.032252 miliseconds syntethicTask1
// 	index=hgr_task_creator(1,tspec_from(7, SEC),tspec_from(7, SEC),99,1,NOW); //1948.142624 miliseconds syntethicTask3
// 
// 	hgr_pthread_join(ptask_get_threadid(index));
	hgr_task_joinall();
	
	hgr_destroy();
	return 0;
}	
