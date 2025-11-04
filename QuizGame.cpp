#include <iostream>
using namespace std;

int playQuiz(){  // func -> playQuiz
    char c;
    char option;
    int score;
    playInsideFunction:
    cout<<"--- Welcome to the Quiz Game! ---"<<endl;
    cout<<"--- Please follow the below instructions! ---"<<endl;
    cout<<"Step 1: Quiz contains total 5 questions."<<endl;
    cout<<"Step 2: You'll be given 1 mark for each right answer."<<endl;
    cout<<"Step 3: There will be no negative marking."<<endl;
    cout<<"Step 4: Please press o to start the quiz."<<endl;
    cout<<"Step 5: Please select option a, b, c, d"<<endl;
    cout<<"Step 6: If you score >=3, you will pass the quiz !"<<endl;
    cin>>c;
    if(c=='o' || c=='O'){
        cout<<"Q1)Which data structure works on the principle of First In, First Out (FIFO)?"<<endl;
        cout<<"A) Stack B) Tree C) Queue D) Graph"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else{
            score=score+0;
        }

        cout<<"Q2) In C++, which keyword is used to dynamically allocate memory? "<<endl;
        cout<<"A) malloc B) new C) allocate D) create"<<endl;
        cin>>option;
        if(option=='b' || option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        }

        cout<<"Q3) How do you access the first element of a list nums = [10, 20, 30]?"<<endl;
        cout<<"A) nums(0) B) nums[1] C) nums[0] D) nums.first()"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }  

        cout<<"Q4) Which of the following Python data types is mutable?"<<endl;
        cout<<"A) tuple B) list C) str D) int"<<endl;
        cin>>option;
        if(option=='b' || option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        }  

        cout<<"Q5) Which of the following is immutable in Python?"<<endl;
        cout<<"A) dict B) list C) set D) tuple"<<endl;
        cin>>option;
        if(option=='d' || option=='D'){
            score=score+1;
        }
        else{
            score=score+0;
        }  

    }
    else{
        cout<<"You've entered wrong value, please enter o !"<<endl;
        goto playInsideFunction;
    }

    return score;
}


int main() {
int finalResult=0;
char playAgain;
// if u r returning any ans or even not returning then also mk a
// prototye, tk datatype as here up taken as 'int',then mthd name ie. 'playQuiz'
// that, is it taking argument if not tking any argument then write void as written up!
play:
finalResult=playQuiz(); 
cout<<"Your total score is : "<<finalResult<<endl;
if(finalResult>=3){
    cout<<"You've passed the Quiz!"<<endl;
    cout<<"Do you want to replay Quiz, Y or N ?"<<endl;
    cin>>playAgain;
    if(playAgain=='y' || playAgain=='Y'){
    goto play;
    }
    else{
        cout<<"Thank You for playing the Quiz!"<<endl;
    }
}
else{
    cout<<"You're failed!"<<endl;
}

}