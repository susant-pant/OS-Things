#include "syscalls.h"
#include "pthread.h"

using namespace std;

int main(){
	int err = 5;
	cpu_set_t affinityMask = 1;
	err = sched_setaffinity( 0, sizeof(cpu_set_t), &affinityMask );
	for(;;){
	}
}