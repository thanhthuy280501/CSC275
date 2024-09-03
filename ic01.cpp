#include <iostream>
using namespace std;

//***************************************************************************
// In-class 01.
// (Partial) Author:	S. Turner
// Due date:		(in-class, 09/01/22)
//***************************************************************************

#define MAX 400

class CounterType {
  public:
    void InitializeCounter();	// complete this function!

    void increment() {		// As Keyshia Cole or Jerry Maguire
    				// might say, "You complete me."
    }

    void decrement() {		// did I happen to mention, you need to
				// complete this function?
    }

// You need to modify this:
  int currentCount() {		// I was the son of "complete this function"

  }

  private:
    int count;
};

int main() {
//******************************************
// You should declare localCounter here:
// Also - it must make a call to its 
// 'initialize counter' function.
//******************************************

  //************************************************************************
  // If the loop index is divisible by 3, then increment the localCounter.
  //************************************************************************
  for(int i = 1; i < MAX; i++) {

  }
  
  // Use cout statement to print out a message of the form
  //   "There are 342 numbers between 1 and 343123 that are divisible by 3."


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
  for(int i = 1; i < MAX; i++)
  {
    if (the loop variable is divisible by three) {	// more code
      cout << localCounter.currentCount(); 		// to finish
      cout << " -- " << i << endl;
      localCounter.decrement();
    }
  }

  cout << endl << endl;
  return 0;
}
