#include <iostream>

using namespace std;

int main()
{
    
    string input, password;
    
    password = "s3cr3t!P@ssw0rd";
    
    cin >> input;
    
    if (input == password){
        
       cout<< "Welcome" << endl;
    } else {
        
         cout<< "Wrong password!" << endl;
    }


    return 0;
}