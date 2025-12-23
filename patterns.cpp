#include <iostream>
#include <cmath>

using namespace std;

void pattern_1() {
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_2() {
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_3() {
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void pattern_4() {
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

void pattern_5() {
    for(int i=5; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void pattern_6() {
    int count_1 = 0;
    int n_1 = 5;


    for(int i=n_1; i>=1; i--) {
        int k = 1;
        count_1 += 1;
        for(int j=1; j<=i-1; j++) {
            cout << " ";
        }
        while(k <= (count_1*2)-1) {
            cout << "*";
            k += 1;

        }

        cout << endl;

    }
}

void pattern_7() {
    int n = 5;
    int count = n;


    for(int i=1; i<=n; i++) {
        int k = 1;
        
        for(int j=1; j<=i-1; j++) {
            cout << " ";
        }
        while(k <= (count*2)-1) {
            cout << "*";
            k += 1;

        }
        count -= 1;

        cout << endl;

    }
}

void pattern_8() {
    int count_1 = 0;
    int n_1 = 5;


    for(int i=n_1; i>=1; i--) {
        int k = 1;
        count_1 += 1;
        for(int j=1; j<=i-1; j++) {
            cout << " ";
        }
        while(k <= (count_1*2)-1) {
            cout << "*";
            k += 1;

        }

        cout << endl;

    }

    int n = 5;
    int count = n;


    for(int i=1; i<=n; i++) {
        int k = 1;
         count -= 1;
        
        for(int j=1; j<=i; j++) {
            cout << " ";
        }
        while(k <= (count*2)-1) {
            cout << "*";
            k += 1;

        }
       

        cout << endl;

    }


}

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