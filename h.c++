

#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    // quantity
    int qrooms=0;
    int qpasta=0;
    int qburger=0;
    int qnoodels=0;
    //food items sold
    int srooms=0, spasta=0, sburger=0, snoodels=0;
    //total price of items
        int trooms=0, tpasta=0, tburger=0, tnoodels=0;
        cout<<"quantity of items we have";
        cout<<"\n rooms available :";
        cin>>qrooms;
        cout<<"\n quantity of pasta :";
        cin>>qpasta;
        cout<<"\n quantity of burger :";
        cin>>qburger;
        cout<<"\n quantity of noodels :";
        cin>>qnoodels;
        m:
        cout<<"\n \t please select from menue options";
        cout<<"\n1- rooms";
        cout<<"\n2- pasta";
        cout<<"\n3- burger";
        cout<<"\n4- noodels";
        cout<<"\n5- information regarding sales and collections";
        cout<<"\n6- exit";
                cout<<"\n \t  please enter your choice";
                cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\n enter number of rooms you want: ";
            cin>>quant;
            if (qrooms-srooms>=quant)
            {
                srooms=srooms=quant;
                trooms=quant*1000;
                cout<<quant<<" rooms is allocated to you";
            } else cout<<qrooms-srooms<<"\n only is remaining";
            break;
             case 2:
            cout<<"\n enter number of pasta plates you want : ";
            cin>>quant;
            if (qpasta-spasta>=quant)
            {
                spasta=spasta=quant;
                tpasta=quant*40;
                cout<<quant<<" pasta plates is your order: ";
            } else cout<<qpasta-spasta<<"\n only is remaining";
            break;
             case 3:
            cout<<"\n enter number of burgers you want: ";
            cin>>quant;
            if (qburger-sburger>=quant)
            {
                sburger=sburger=quant;
                tburger=quant*40;
                cout<<quant<<" burger is your order";
            } else cout<<qburger-sburger<<"\n only is remaining";
            break;
             case 4:
            cout<<"\n enter number of noodels plates you want: ";
            cin>>quant;
            if (qnoodels-snoodels>=quant)
            {
                snoodels=snoodels=quant;
                tnoodels=quant*40;
                cout<<quant<<" noodels plates is your order";
            } else cout<<qnoodels-snoodels<<"\n only is remaining";
            break;
            case 5:
             cout<<"\n details of sales and collections";
            cout<<"remaining rooms="<<qrooms-srooms;
            cout<<"collections from rooms today="<<trooms;

            cout<<"remaining pasta plates="<<qpasta-spasta;
            cout<<"collections from pasta plates today="<<tpasta;

            cout<<"remaining burgers="<<qburger-sburger;
            cout<<"collections from burgers today="<<tburger;

            cout<<"remaining noodels plates="<<qnoodels-snoodels;
            cout<<"collections from noodels today="<<tnoodels;

            case 6:
            exit(0);
            default :cout<<"please select number from mentioned above";
        }
        goto m;



return 0;
}
