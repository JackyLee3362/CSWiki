#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main(){
	string search_string = " Hello! Welcome to EDUCBA, Learn with the best " ;
	regex regular_exp( "l[a-z_]+" ) ;
	smatch sm ;
	regex_search( search_string , sm , regular_exp ) ;
	cout << " Given below string matches with the given pattern : " << endl ;
	for ( auto i : sm )
	cout << i << " " ;
	return 0 ;
}
