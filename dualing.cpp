// shows a pair of functions that call each other
//

#include <iostream>

// Provide prototypes for egg and chicken here

char *egg( int );
char *chicken( int );



int main(void) {
  int startnum;

  std::cout << "Enter starting generation of your chicken" << endl;
  std::cin >> startnum;
  std::cout << "Your chicken started as a " << chicken(startnum) << endl;

  return(0);
}

//
char *chicken( int generation ) {
  if (generation == 0) 
    return("Chicken!");
  else	
    return(egg(generation-1));
}



char *egg( int generation ) {
  if (generation == 0) 
    return("Egg!");
  else	
    return(chicken(generation-1));
}
