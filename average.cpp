#include<iostream>
using namespace std;
int main(int argc, char* argv[]){
    float sum = 0;
    if(argc == 1){
        cout << "Please input numbers to find average.";
    }else{
        for(int i = 1; i < argc ; i ++){
            
            sum += atof(argv[i]);
            
        }
        cout << "---------------------------------" << endl;
        cout<< "Average of " << argc-1<<" numbers = " << sum/(argc-1) << endl;
        cout << "---------------------------------";
    }
}