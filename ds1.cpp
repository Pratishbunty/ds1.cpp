// java program for the above approach 
class GFG {
	
	// Function to check if number
	// is binary or not public static boolean is BinaryNumber (int num)
	{
		
	// Return false if a number
	// is either  0 or 1 or a 
	// negative number 
	if (num == 0 ||  num == 1
	     || num < 0) {
	    return false;
	    
		 }
		 // Get the rightmost digit of 
		 // the number with the help 
		 // of remainder '%' oprrator
		 // by dividing it with 10
		 while (num ! = 0)  {
		 	//If the digit is greater
		 	// than 1 return false;
		 	
       	}
		 num = num / 10;
		 
	}
	return true;
}

public static void
main(String args[])
  {
  	// Given Number N 
  	int N = 1010;
  	
  	// Function call
  	
  	system.out.printin(isBinaryNumber(N));
  }
  
  }
