/*
 * file   :	hanoi_it.cc
 * date   :	3/4/2014
 * creator:	Allen Shultz
 * user   :	shultzam
 */

#include <iostream>
using namespace std;

int hanoi(int n, int from, int to, int temp)
{
	if (n > 0){
		
		/* Move n -1 disks from source to temporary tower */
		hanoi(n - 1, from, temp, to);
		/* Update the user */
		cout << "disk " <<n<< " is moved from " <<from<< " to " <<to<< "\n";

		/* Move n - 1 disks from temporary tower to destination */
		return hanoi(n - 1, temp, to, from);
	}

}
/*
 * Personally, I believe that the interative version of the function 
 * provides more clarity. However, I feel that if you were trying to 
 * demonstrate both functions to a person not experienced in computer
 * programming, they would understand the non-interative approach much 
 * better. In addition, I didn't notice any performance differences 
 * between the non-iterative approach and the iterative approach. Although,
 * I do feel it is easier to demonstrate correctness of the algorithm when
 * using the iterative approach.
 */
