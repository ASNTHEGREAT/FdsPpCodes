#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    string n;
    cout<<"welcome Tu Kaun Banega crore Pati!!!"<<endl<<"please enter your name: ";
    cin>>n;
    cout<<"congratulations"<<n<<" on being selected for being here on the hot seat today. Best of luck!!\n";
    cout<<"Let's begin!";
    //1
    cout<<"Your first question is: "<<endl;
    char a1;
    int aa;
    cout<<"1:  The International Literacy Day is observed on"<<endl;
    cout<<"A: Sep 8"<<endl;
    cout<<"B: Nov 28"<<endl;
    cout<<"C: May 2"<<endl;
    cout<<"D: Sep 22"<<endl;
    cout<<"Choose: ";
    cin>>a1;
    aa = (a1=='a'||'A')? 1 : ((a1=='b'||'B')? 2 : ((a1=='c'||'C')? 3 : ((a1=='d'||'D')? 4 : -1)));
    switch (aa)
    {
    case 1:
        cout<<"Congratulations!!! Your answer is correct."<<endl;
        break;
    case 2:
        cout<<"Your answer is wrong, your journey in KBC ends here thank you for participating."<<endl;
        exit(0);
    case 3:
        cout<<"Your answer is wrong, your journey in KBC ends here thank you for participating."<<endl;
        exit(0);
    case 4:
        cout<<"Your answer is wrong, your journey in KBC ends here thank you for participating."<<endl;
        exit(0);
    default:
        cout<<"you did not enter the correct option, You're out of the game."<<endl;
        exit(0);
    }
    //2
    cout<<"Your Second question is: "<<endl;
    char a2;
    int ab;
    cout<<"2:  The language of Lakshadweep. a Union Territory of India, is"<<endl;
    cout<<"A: Sep 8"<<endl;
    cout<<"B: Nov 28"<<endl;
    cout<<"C: May 2"<<endl;
    cout<<"D: Sep 22"<<endl;
    cout<<"Choose: ";
    cin>>a2;
    ab = (a2=='a'||'A')? 1 : ((a2=='b'||'B')? 2 : ((a2=='c'||'C')? 3 : ((a2=='d'||'D')? 4 : -1)));
    switch (ab)
    {
    case 1:
        cout<<"Your answer is wrong, your journey in KBC ends here thank you for participating."<<endl;
        exit(0);
    case 2:
        cout<<"Your answer is wrong, your journey in KBC ends here thank you for participating."<<endl;
        exit(0);
    case 3:
        cout<<"congratulations "<<n<<" you have won one crore rupees, Thank you for participating"<<endl;
        break;
    case 4:
        cout<<"Your answer is wrong, your journey in KBC ends here thank you for participating."<<endl;
        exit(0);
    default:
        cout<<"you did not enter the correct option, You're out of the game."<<endl;
        exit(0);
    }
    return 0;
}