#include "basics.h"

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// For the value of Pi, please use M_PI, which is defined in math.h.
double area_of_disk(double radius) {
  // your code here
  double area_of_disk=M_PI*radius*radius;

  return area_of_disk; 
} 

double area_of_ring(double outer_radius, double inner_radius) {
  // your code here
  double area_of_ring=M_PI*(outer_radius*outer_radius-inner_radius*inner_radius);
		  
  return area_of_ring;
}

int bigger_minus_smaller(int a, int b) {
  // your code here
 int bigger_minus_smaller=(a > b) ? (a - b) : (b-a);

 return bigger_minus_smaller; 
}

bool value_in_range(int lower_bound, int x, int upper_bound) {
  // your code here
 bool value_in_range= (x >= lower_bound && x <= upper_bound) ;


  return value_in_range;
}

int sum_of_greater_squares(int a, int b, int c) {
  // your code here
       a = a * a ;
       b = b * b ;
       c = c * c ;
       int min_val;
	if (a <= b && a <= c) {
	       min_val = a; 
}        else if ( b <= a && b <=c ) {
	      min_val = b;
}	 else  { min_val= c ; } 
 int sum_of_greater_squares = (a + b + c ) - ( min_val) ;


  return sum_of_greater_squares; 
}
