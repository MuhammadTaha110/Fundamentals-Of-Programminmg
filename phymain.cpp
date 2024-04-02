#include <iostream>
using namespace std;

int main() {
	int I,R,V,W;
   cout << "WHAT DO YOU WANT : ";
   cout << "1- CURRENT(I) , 2- VOLTAGE(V), 3- RESISTANCE(O)" ;
	cin >> W ; 
	switch (W){
		case 1 : 

	    cout << "ENTER VALUE OF VOLTAGE :" ;
	     cin >> V ;
	     cout << "ENTER VALUE OF RESISTANCE :" ;
	     cin >> R ;
	     I=V/R   ; 
	     cout << "CURRENT = " << I << " AMPERES " << endl ;
	     break ;
	      
	      case 2 :
	      	
	      	cout << "ENTER VALUE OF CURRENT :" ;
	     cin >> I ;
	     cout << "ENTER VALUE OF RESISTANCE :" ;
	     cin >> R ;
	      V=I*R   ; 
	      cout << "VOLTAGE = " << V << " VOLT "  << endl ;
	      break ;
	      
	      
	      case 3 :
	      	
	     cout << "ENTER VALUE OF VOLTAGE :" ;
	     cin >> V ;
	     cout << "ENTER VALUE OF CURRENT :" ;
	     cin >> I ;
	     R=V/I   ; 
	     cout << "RESISTANCE = " << R << " OHM " << endl ;
	      	break ;
	    
		    
} 

	
	
	
	
	
	
	return 0;
}
