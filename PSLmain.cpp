#include <iostream>
using namespace std;
int main() {
int K,L,Q,M,I,P,X,MP,MW ;

cout << "KARACHI KINGS MATCH LOSE : ";
cin >> MP	; 
cout << "KARACHI KINGS MATCH WON : " ; 
cin >> MW ;
	X = MP + MW ;
	
cout << " ISLAMABAD UNITED MATCH LOSE : ";
cin >> I	; 
cout << " ISLAMABAD UNITED MATCH WON : " ; 
cin >> Q ;
	  L = I + Q ;
	  if (MW < Q )  
	cout << "NO.1 is ISLAMABAD UNITED" << "  MATCHPLAYED:  " << L << "  MATCHLOSE:  " << I << "  MATCHWON:  " << Q << "\n" 
    "NO.1 KARACHI KINGS" << " MATCHPLAYED:  " << X << "  MATCHLOSE:  " << MP << "  MATCHWON:  " << MW;
	
	 
	
	return 0;
}
