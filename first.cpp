#include <iostream>
using namespace std;
int product(int a,int b=6){
    int prod=a*b;
    cout<<prod;
    return 0;
}
int main(){
    product(5);
    return 0;

}