#include <string>

bool solve_non_duplicate_string_0(std::string s){

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size(); j++){

            if( x[i] == x[j] && ( i != j ) ){

                return false;
            }
        }
    }

    return true;
}