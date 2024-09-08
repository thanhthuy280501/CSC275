#include <iostream>
using namespace std;

//***************************************************************************
// In-class 01.
// (Partial) Author:	S. Turner
// Due date:		(in-class, 09/01/22)
// Name: Thuy Nguyen
// Class: CSC 275
//***************************************************************************

#define MAX 400

class CounterType {
public:
void InitializeCounter();    			// Function to initialize the counter to 0.
void increment(); 				// Function to increment the counter by 1.
void decrement(); 				// Function to decrement the counter by 1 if it's greater than 0.
int curretnCount(); 				// Function to return the current value of the counter. 
   
private:
    int count;
};

void CounterType::InitializeCounter() {
	count = 0;				// Initialize the counter to 0.
 } 

void CounterType::increment() {
	    count++;				// Increment the counter by 1.
    }

void CounterType::decrement() {
	    if (count > 0){
		count--;			// Decrement the counter by 1 if it's greater than 0.
	    }
    }

  int CounterType:: currentCount() {
	  return count;				// Return the current value of the counter.

  }

int main() {
//******************************************
// You should declare localCounter here:
// Also - it must make a call to its 
// 'initialize counter' function.
//******************************************
	CounterType localCounter; 		// Declare an instance of CounterType.

	localCounter.InitializeCounter(); 	// Initialize the counter to 0.

	int divisibleByThreeCount = 0;
	

  //************************************************************************
  // If the loop index is divisible by 3, then increment the localCounter.
  //************************************************************************
  for(int i = 1; i < MAX; i++) {
	  if (i % 3 ==0){
		  localCounter.increment();
		  divisibleByThreeCount++;
	  }

  }
  
  // Use cout statement to print out a message of the form
  //   "There are 342 numbers between 1 and 343123 that are divisible by 3."
	
cout >> "There are" << divisibleByThreeCount << "numbers between 1 and " << MAX 
		<< " that are divisible by 3. " << endl;


//***************************************************************************
// Use this loop to display the local counter value, and the current number
// that is divisible by 3, in this form:
// 133 -- 3
// 132 -- 6
// ...
// 1 -- 399
//
// (The first one is the counter, being decremented. The second one is the
// value that's divisible by 3.)
//***************************************************************************
  for(int i = 1; i < MAX; i++){
    if (i % 3 ==0) {	
      cout << localCounter.currentCount() << " -- " << i << endl;
      localCounter.decrement();
    }
  }

  cout << endl << endl;
  return 0;
}
