#include <iostream>     
#include <stdexcept>      
#include <vector> 

using namespace std;       

int main () {
  vector<int> myvector(10);
  try 
  {
    myvector.at(20)=100; // vector::at throws an out-of-range
  }
  catch (out_of_range& oor) 
  {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
  }  
}
