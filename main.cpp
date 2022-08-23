#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void p5(){
    double sum_even = 0, sum_odd = 0 ; int N ,odd =0,even =0;
    cin >> N;

    int count =1;
    while(count <= N){
        double number;
        cin >> number ;

        if(count % 2 == 0){
            sum_even += number;
            even++;

        }
        else{
            sum_odd += number;
            odd++;
        }
        count++;

    }

    cout << sum_even/even << endl;
    cout << sum_odd/odd  << endl;
}

// Medium problems

void  Print_diamond()
{
    int N;
    cin >> N;


    int Rows = 1;
    while (Rows <= N){
        int count = 2*Rows -1;
        int spaces = N - Rows;
        while (spaces > 0){
            cout << " ",spaces--;
        }
        while (count > 0){
            cout << "&",count--;
        }
        cout << endl;
        Rows++;
    }

    Rows = N;
    while (Rows > 0){
        int count = 2*Rows -1;
        int spaces = N - Rows;
        while (spaces > 0){
            cout << " ",spaces--;
        }
        while (count > 0){
            cout << "&",count--;
        }
        cout << endl;
        Rows--;

    }

}


void Special_multiples_1 ()
{
    int Number ,N =0 ;
    cout << "Enter the number : ";
    cin >> Number;

    while (N <= Number){
        if (N%8==0 || (N%4==0 && N%3==0))
            cout << N << " ";
        N++;
    }

}
void Special_multiples_2(){
    int Number ;
    cin >> Number;
    if (Number > 30){
        cout << "you entered a big number .";
        return;
    }

    int N = 3;
    while (Number > 0){
        if (N%3==0 && N%4!=0){
            cout << N << " ";
            Number--;
        }
        N++;

    }
}

void Minimum_of_values(){
    int TestCases ;
    cout << "enter the number of testcases : ";
    cin >> TestCases;

    while(TestCases > 0){

        int N ,number , Min = 10000;
        cin >> N;
        while (N > 0){
            cin >> number;
            if(number < Min)
                Min = number;
            N--;
        }
        cout << "the min number of this testcase is = " << Min << "\n";
        TestCases--;
    }
}

// hard problems
void Find_NOs(){
    int  N ;
    cin >> N;

    string str;
    while (N > 0){
        cin >> str;
        if (str == "NO" || str == "No" || str == "nO" || str == "no" || str == "ON" || str == "On" || str == "oN" || str == "on")
            cout << str << " ";
        N--;
    }

}

void Reverse_number(){
    int number ,result =0;
    cin >> number;

    while (number){
        result = result*10 + number%10;
        number /= 10;
    }
    cout << result << "  "<< 3*result << endl;


}

void Multiplication_table(){
    int N ,M;
    cin >> N >> M;

    int counter =1;
    while (counter <= N){
        int cnt = 1;
        while (cnt <= M){
            cout << counter << "x" << cnt << " = " << counter*cnt << endl;
            cnt++;
        }
        counter++;
    }
}


void Special_Sum(){
    int Testcases , N , Number , result =0;
    cout << "enter the number of testcases : ";
    cin >> Testcases;


    while (Testcases >0){
        int count =1;
        cin >> N;
        while (count <= N){
            cin >> Number;
            result +=  pow(Number , count);
            count++;
        }
        cout << result << endl;
        result =0; // to clear the variable for the next testcases
        Testcases--;
    }
}

// practice
void Pair_of_numbers(){
    int N, M, Sum ,count =0;
    
    cin >> N >> M >> Sum;
    for (int i = 1; i <= N ; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (i + j == Sum){
                count++;
            }
        }
    }
    cout << count ;
}
void Pair_of_numbers_v2(){
    int N, M, Sum ,count =0;

    cin >> N >> M >> Sum;
    for (int i = 1; i <= N ; ++i) {
        int j = Sum - i;
        if (j >= 1 && j <= M)
            count++;
    }
    cout << count ;
}


int main()
{
//    p5();
//    Print_diamond();
//    Minimum_of_values();
//    Special_multiples_1();
//    Special_multiples_2();
//    Find_NOs();
//    Reverse_number();
//    Multiplication_table();
//    Special_Sum();
//    Pair_of_numbers();
//    Pair_of_numbers_v2();



    return 0;
}
