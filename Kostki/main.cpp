#include <iostream>


using namespace std;

int generate_roll() {
    return (rand() % 6) + 1;
}


string number_1() {
cout << "---------" << endl;
cout << "|       |" << endl;
cout << "|   o   |" << endl;
cout << "|       |" << endl;
cout << "---------" << endl;
cout << endl;
}

string number_2() {
cout << "---------" << endl;
cout << "| o     |" << endl;
cout << "|       |" << endl;
cout << "|     o |" << endl;
cout << "---------" << endl;
cout << endl;
}

string number_3() {
cout << "---------" << endl;
cout << "| o     |" << endl;
cout << "|   o   |" << endl;
cout << "|     o |" << endl;
cout << "---------" << endl;
cout << endl;
}

string number_4() {
cout << "---------" << endl;
cout << "| o   o |" << endl;
cout << "|       |" << endl;
cout << "| o   o |" << endl;
cout << "---------" << endl;
cout << endl;
}

string number_5() {
cout << "---------" << endl;
cout << "| o   o |" << endl;
cout << "|   o   |" << endl;
cout << "| o   o |" << endl;
cout << "---------" << endl;
cout << endl;
}

string number_6() {
cout << "---------" << endl;
cout << "| o   o |" << endl;
cout << "| o   o |" << endl;
cout << "| o   o |" << endl;
cout << "---------" << endl;
cout << endl;
}

int main()
{

    srand( time( NULL ) );
int player_first_dice = generate_roll();
int player_second_dice = generate_roll();

cout << player_first_dice << " " << player_second_dice;


//int kostka1[10];
//int kostka2[10];
//int i;
//for (i=1; i<10; i++) {
//    kostka1[i] = (rand() % 6) + 1;
//};
//
//for (int i=1; i<10; i++) {
//    if(kostka1[i] == 1) {
//    number_1();
//    }
//    if(kostka1[i] == 2) {
//    number_2();
//    }
//    if(kostka1[i] == 3) {
//    number_3();
//    }
//    if(kostka1[i] == 4) {
//    number_4();
//    }
//    if(kostka1[i] == 5) {
//    number_5();
//    }
//    if(kostka1[i] == 6) {
//    number_6();
//    }
//}
//for (int i=1; i<10; i++) {
//    if(kostka2[i] == 1) {
//    number_1();
//    }
//    if(kostka2[i] == 2) {
//    number_2();
//    }
//    if(kostka2[i] == 3) {
//    number_3();
//    }
//    if(kostka2[i] == 4) {
//    number_4();
//    }
//    if(kostka2[i] == 5) {
//    number_5();
//    }
//    if(kostka2[i] == 6) {
//    number_6();
//    }
//}
};
