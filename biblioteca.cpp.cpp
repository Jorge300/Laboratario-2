#include "biblioteca.hpp"
int Factornum(int n) {
   if(n!= 0) 
   	return n*Factornum(n-1); 
   else
   	return 1; 
}
