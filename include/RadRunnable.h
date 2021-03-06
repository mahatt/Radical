#ifndef _RAD_RUNNABLE_H_
#define _RAD_RUNNABLE_H_

namespace radical{
#include<thread>


/*  RadThread 
 *  1. Runnable Thread as interface for classes
 *  2. Simplfiy heteregeous threads
 *  3. No sync or joins
 */

template<typename RunWorthy>
class RadRunnable{
	std::thread  *mThread;
	public:
		RadRunnable() {
			mThread = new std::thread(RunWorthy::run);
		}
		template<typename... Args>
		virtual run(Args&& ...) = 0;

};

}// end of nm radical

#endif