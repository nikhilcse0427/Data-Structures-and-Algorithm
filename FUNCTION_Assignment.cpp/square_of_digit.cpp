/*Write a function to count the number of digits in a
 number and then print the square of this number.*/
#include<iostream>
using namespace std;
int square(int n){
    int count = 0;
    int digit = n;
    while(digit > 0){
        digit /= 10;
        count += 1;
    }
    return count;

}
int main(){
    int n;
    cout<<"enter any num: ";
    cin>>n;
    int a = square(n);
    cout<<a<<endl;
    cout<<"square of digit: "<<a*a;
    return 0;
}