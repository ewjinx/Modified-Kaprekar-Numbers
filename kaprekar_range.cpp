#include <iostream>
using namespace std;


void kaprekarNumbers(int p, int q){
    int innum, input_digits, sqdig, temp,counter = 0, power = 1;
    long sqnum;
    int l=0, r;

    for (int i = p; i <= q; i++){
        sqnum = (long) i * i;
        input_digits = 0;
        power = 1;

        temp = i;
        while(temp > 0){
            temp = temp/10;
            input_digits++;
        }

        for (int j = 1; j <= input_digits; j++){
            power = power * 10;
        }

        r = sqnum%power;
        l = sqnum/power;


        if ((r+l) == i){
            cout << i << " ";
            counter++;
        }
        }
        if(counter == 0){
            cout << "INVALID RANGE";
        }
}

int main(){
int a,b;
cout << "Enter lower limit: "; cin >> a;
cout << "Enter upper limit: "; cin >> b;
kaprekarNumbers(a,b);


}
