#include <iostream>
#include <cstdlib>
using namespace std;
void snake_ladder1(int &rand_n1, int &su1) {
    if (su1 == 10) {
        su1 += 15;
        cout << "sum1: " << su1 << endl;
        cout << "You are on stair : \n";
        cout << "\nPlayer 1 : " << su1;
    }
    else if (su1 == 30) {
        su1 -= 10;
        cout << "sum1: " << su1 << endl;
        cout << "You are on snake : \n";
        cout << "\nPlayer 1 : " << su1;
    }
    else if (su1 == 45) {
        su1 += 20;
        cout << "sum1: " << su1 << endl;
        cout << "You are on stair : \n";
        cout << "\nPlayer 1 : " << su1;
    }
    else if (su1 == 61) {
        su1 -= 11;
        cout << "sum1: " << su1 << endl;
        cout << "You are on snake : \n";
        cout << "\nPlayer 1 : " << su1;
    }
    else if (su1 == 74) {
        su1 += 11;
        cout << "sum1: " << su1 << endl;
        cout << "You are on stair : \n";
        cout << "\nPlayer 1 : " << su1;
    }
    else if (su1 == 81) {
        su1 -= 72;
        cout << "sum1: " << su1 << endl;
        cout << "You are on snake : \n";
        cout << "\nPlayer 1 : " << su1;
    }
}
void snake_ladder2(int &rand_num2, int &sum2) {
    if (sum2 == 10) {
        sum2 += 15;
        cout << "You are on stair : \n";
        cout << "Player 2 : " << sum2;
    }
    else if (sum2 == 30) {
        sum2 -= 10;
        cout << "You are on snake : \n";
        cout << "Player 2 : " << sum2;
    }
    else if (sum2 == 45) {
        sum2 += 20;
        cout << "You are on stair : \n";
        cout << "Player 2 : " << sum2;
    }
    else if (sum2 == 61) {
        sum2 -= 11;
        cout << "You are on snake : \n";
        cout << "Player 2 : " << sum2;
    }
    else if (sum2 == 74) {
        sum2 += 11;
        cout << "You are on stair : \n";
        cout << "Player 2 : " << sum2;
    }
    else if (sum2 == 81) {
        sum2 -= 72;
        cout << "You are on snake : \n";
        cout << "Player 2 : " << sum2;
    }
}
int main() {
    char p1, p2;
    int sum1 = 0, sum2 = 0,choice=0;
    int rand_num1, rand_num2;
    cout << "\t\t\t\t\t****Welcome to Snake and Ladder Game**** \n\n\n";
    l1:
    cout << "Press 1 start the game : \n\n";
    cout << "Press 2 to quit the game: \n\n";
    cin >> choice;
    if (choice == 1)
    {
        system("cls");
        goto label1;
    }
    else if (choice == 2) {
        exit(0);
    }
    else {
        goto l1;
    }
    do {
       label1:
        srand(time(0));
        rand_num1 = 1 + rand() % 6;
        rand_num2 = 1 + rand() % 6;
        cout << "Player 1  turn (press y)\n";
        cin >> p1;
        if (p1 == 'y' || p1 =='Y') {
            if (rand_num1 == 6) {
                goto alpha;
            }
            else if (rand_num1 != 6) {
                sum1 = 0;
                cout << "\nPlease get a 6 to start the game \n";
                goto beta;
            }
            alpha:
            cout << "Random Number 1 " << rand_num1 << endl<<endl;
            sum1 += rand_num1;
            cout << "\n Player1: " << sum1 << endl << endl;
            if (rand_num1 == 6) {
                cout << "Player 1  turn (press y)\n";
                cin >> p1;
                rand_num1 = 1 + rand() % 6;
                sum1 += rand_num1;
                cout << "rand number : " << rand_num1 << endl << endl;
                snake_ladder1(rand_num1, sum1);
                cout << "\nPlayer 1 : " << sum1 << endl << endl;
            }
            snake_ladder1(rand_num1, sum1);
        }
    beta:
        cout << "Player 2  turn (press y)\n";
        cin >> p2;
        if (rand_num2 == 6) {
            goto alpha1;
        }
        else if (rand_num2 != 6) {
            sum2 = 0;
            cout << "\nPlease get a 6 to start the game\n";
            goto label1;
        }
    alpha1:
        if (p2 == 'y' || p2 == 'Y') {
            cout << "Random Number 2 " << rand_num2 << endl << endl;
            sum2 += rand_num2;
            cout << "\n Player 2: " << sum2 << endl << endl;
            if (rand_num2 == 6) {
                cout << "Player 2  turn (press y)\n";
                cin >> p2;
                rand_num2 = 1 + rand() % 6;
                sum2 += rand_num2;
                snake_ladder2(rand_num2, sum2);
                cout << "rand number : " << rand_num2 << endl << endl;
                cout << "Player 2 :" << sum2 << endl << endl;
            }
            snake_ladder2(rand_num2, sum2);
        }
        else {
            cout << "Plz press y \n";
            goto label1;    
        }
    } while (sum1 <= 100 && sum2 <= 100);
    if ( sum1 >= 100) {
        cout << "Congratulation Player 1 win the game" << endl << endl;
    }
    else {
        cout << "Congratulation Player 2 win the game " << endl << endl;
    }
return 0;
}


