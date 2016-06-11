#include<windows.h>
#include<iostream>
#include<string.h>
using namespace std;
int main (){
    system("title Kompozitor na Anton");
    long long cik=0,daljina=0;
    long long ton[1000];
    bool loop = false;
    long long period[1000],x=0;
    string vhod, save;
    nachalo:
    cout << "Kompozitor na Anton!\nNapishi help za pove4e info.\n";
    cout << "*************************************************\n";

    cin >> vhod;
    if (vhod == "help"){
        system("cls");
        cout <<"primerna pesen:"<<endl;
        cout <<"c4.d4.c4.d4.e2.e2.c4.d4.c4.d4.e2.e2.f4.e4.f4.e4.d2.d2.e4.d4.e4.d4.c2.c2\n"<<endl;
        cout <<"Instukcii za polzvane:"<<endl;
        cout <<"kompozitora vazproizvejda muzika,"<<endl;
        cout <<"koqto e vavedena ot klaviaturata."<<endl;
        cout <<"Kak se vavejdat notite?"<<endl;
        cout <<"Lesno! Notata predstavqva kombinaciq ot"<<endl;
        cout <<"edna cifra i edna bukva."<<endl;
        cout <<"cifrata oznachava daljinata na notata,"<<endl;
        cout <<"saotvetno:\n"<<endl;
        cout <<"2 - polovika\n4 - chetvartinka\n8 - osminka\n16 - shestnaisetinka\n32 -are poznai de!\n"<<endl;
        cout <<"bukvite sa visochinata na tona."<<endl;
        cout <<"te sa saotvetno:\n"<<endl;
        cout <<"c - do\nd - re\ne - mi\nf - fa\ng - sol\na - la\nb - si\n"<<endl;
        cout <<"mejdu vsqka otdelna nota se slaga tochka."<<endl;
        cout <<"Primerna pesen (mila moq mamo):\n"<<endl;
        cout <<"4c.4d.4c.4d.2e.2e\n"<<endl;
        cout <<"Eto 4e si gotov/a da izpolzva6 kompozitora!"<<endl;
        cout <<"i sega cakni koito i da e buton za vra6tane v na4aloto"<<endl;
        system("pause");
        system("cls");
        goto nachalo;

    }

    daljina = vhod.size();
    for(cik=0;cik<daljina;cik++){
        if (vhod[cik]=='.'){x++;}
        if(vhod[cik] == '2'){period[x]=1000;}
        if(vhod[cik] == '4'){period[x]=500;}
        if(vhod[cik] == '8'){period[x]=250;}
        if(vhod[cik] == '1'&& vhod[cik+1]=='6'){period[x]=125;cik++;}
        if(vhod[cik] == '3'&& vhod[cik+1]=='2'){period[x]=62;cik++;}
        if (vhod[cik]=='-'){ton[x] =0;}
        if (vhod[cik]=='c'){ton[x] =523;}
        if (vhod[cik]=='d'){ton[x] =587;}
        if (vhod[cik]=='e'){ton[x] =659;}
        if (vhod[cik]=='f'){ton[x] =698;}
        if (vhod[cik]=='g'){ton[x] =784;}
        if (vhod[cik]=='a'){ton[x] =880;}
        if (vhod[cik]=='b'){ton[x] =988;}
        if (vhod[cik]=='l'){loop =true;}

    }
    forloop:
        for(cik=0;cik<=x;cik++){
            if(ton[cik]!= 0){
                Beep(ton[cik],period[cik]);
            }
            else{Sleep(period[cik]);}
        }
    if (loop == true) {goto forloop;}


    return 0;
}
