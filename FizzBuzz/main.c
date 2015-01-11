//
//  main.c
//  FizzBuzz
//
//  Created by Johnny Hermann on 2015-01-11.
//  Copyright (c) 2015 Johnny Hermann. All rights reserved.
//

#include <stdio.h>

//
// proc: main
//
// description:
//		Prints the numbers from 1 to 100, except as follows:
//		- Multiples of 3, print "Fizz".
//		- Multiples of 5, print "Buzz".
//		- Multiples of both 3 and 5, print "FizzBuzz".
//
// args:
//		(none)
//
// returns:
//		0
//
int main() {
	
	// Loop thru integers 1 to 100. Print keywords at interesting divisible numbers.
	for (int i = 1; i <= 100; i++) {
		
		if (i % 3 == 0 && i % 5 == 0) {printf("FizzBuzz "); continue;}
		
		if (i % 3 == 0) {printf("Fizz "); continue;}
		
		if (i % 5 == 0) {printf("Buzz "); continue;}
		
		printf("%d ", i);
	}
	
	printf("\n");
	
	return 0;
}
