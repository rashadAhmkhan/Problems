#include <iostream>
#include <cmath>

using namespace std;




void countDigits() {

    int count = 0;
    int n;
    cin >> n;
    
    while(n > 0) {
        n = n / 10;
        count += 1;
    }

    cout << count;

}

void reverse() {

    int num,temp;
    int count = 0;
    cin >> num;
    temp = num;

    while(temp > 0) {
        temp = temp / 10;
        count += 1;
    }


    int quot,rem,temp_count;
    int newNum = 0;
    temp_count = count;

    for(int i=1; i<=count; i++) {
        rem = num % 10;//3,2,1
        num = num / 10; //12
        newNum = newNum + rem*pow(10,temp_count-1);
        temp_count -= 1;
        
    }

    cout << newNum;


}




int main() {
    reverse();
}