#define _USE_MATH_DEFINES
#define _MY_MAGICAL_NUM 1000

#ifndef _IS_FLOAT
#define _TYPE double
#define flag false
#else
#define _TYPE float
#define flag true
#endif

#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    double h = 2 * M_PI / _MY_MAGICAL_NUM;

    vector<_TYPE> my_vec;
    for (int i = 0; i <= _MY_MAGICAL_NUM; i++){
        double mew_h = h * i;
        my_vec.emplace_back(sin(mew_h));
        // my_vec.emplace(my_vec.begin() + i, (float)sin(1));
    }

    

    // for (double i:my_vec){
    //     cout<<i<<endl;
    // }

    cout<<"sum: "<<accumulate(my_vec.begin(), my_vec.end(), (_TYPE)0) <<endl;
    cout<<"is float: "<<typeid(_TYPE).name()<<endl;


    return 0;    
}