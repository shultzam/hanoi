
/* File:  hmain.cc
 * By:    
 * Date:  
 *
 */

#include <iostream>
#include "hanoi.h"

/*
 * Test driver for Towers of Hanoi
 * DO NOT TRY 64 DISKS!!!
 */

main()
{  
	int num;
	std::cout << "Enter number of disks: " << std::flush;

	while( std::cin >> num){
		hanoi(num, 1, 3, 2);
		std::cout << "Enter number of disks: " << std::flush;
	}
}



