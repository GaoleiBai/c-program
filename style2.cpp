#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <iostream> // std::cout
#include <thread>   // std::thread

void thread_task() {
	while(1)
	{
		std::cout << " thread" << std::endl;
		 sleep(1);
	}
}

/*
 * ===  FUNCTION  =========================================================
 *         Name:  main
 *  Description:  program entry routine.
 * ========================================================================
 */
int main(int argc, const char *argv[])
{
    std::thread t(thread_task);
    while(1)
	{
		 std::cout << " main" << std::endl;
		 sleep(1);
	}
	  t.join();
    return EXIT_SUCCESS;
}  /* ----------  end of function main  ---------- */
