#include "Rad.h"
#include <cassert>
#include <iostream>
#include <string>
using namespace radical;

#define NDEBUG 
void check_istring(){
	istring s1;
	istring s2("Captain Marvel");
	std::string s3t("Hulk");
	istring s3(s3t);

	assert(*s2.begin() ==  'C');
	assert(s3.length() == s3t.length());	
	s1 = s2;
	//std::cout<<s2<<std::endl;
	assert(s1.length() !=  s2.length());	
	s1 = "Captain America";
	assert(s1.length() >  5);
	s1 = 'X';
	assert(*s1.begin() == 'X');
	s2 = "Captain America";
	s3 = "captain america";
	assert( (s2 == s3) != true);
}

int main(){
	check_istring();
	return 0;
}
