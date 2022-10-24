#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h>
using namespace std;
HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
void spcl();
void soup();
void sld();
void strt();
void maincr();
void brd();
void rice();
void chn();
void arbn();
void drnks();
void dsrt();
void shk();
void swch(int y);
void piece();
void size1();
void size2();
void size3();
void size4();
void siz1();
void siz2();
void siz3();
void siz4();
void siz5();
int main()
{
    system("CLS");
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    string a;
    int x,y;
    cout<<"\t\t\t                   WELCOME TO MOBBS DINE IN \n";
    cout<<"Enter Your Name : ";
    SetConsoleTextAttribute(h,13);//1-Blue 2.green 3.cyan 4.red 5.purple 6.yellow-dark 7.default 8.grey 9.bright blue 10.bringht green 11. bright cyan 12.bright red 13. pink/magenta 14.yellow 15. bright white 16-after 15 are bkgrd colors
    getline(cin,a);
    SetConsoleTextAttribute(h,3);
    cout<<"Hello, "<<a<<" Nice To Meet You !!!"<<endl<<"Please Enter Your Table Number : ";
    cin>>x;
    system("CLS");


    SetConsoleTextAttribute(h,10);
    cout<<endl<<"WHAT WOULD YOU LIKE TO HAVE TODAY ?"<<endl<<endl<<endl<<"1-Specials"<<endl<<"2-Soups"<<endl<<"3-Salads"<<endl<<"4-Starters"<<endl<<"5-Main Course"<<endl<<"6-Breads"<<endl<<"7-Rice and Biryani"<<endl<<"8-Chinese"<<endl<<"9-Arabian"<<endl<<"10-Drinks"<<endl<<"11-Shakes and Mocktails"<<endl<<"12-Deserts"<<endl;
    cout<<"Enter your choice(number) : ";
    cin>>y;
    SetConsoleTextAttribute(h,11);
    swch(y);


}

void swch(int y){
    SetConsoleTextAttribute(h,2);
    switch(y){
        case 1:spcl();
        SetConsoleTextAttribute(h,5);
        break;
        case 2:soup();
        SetConsoleTextAttribute(h,7);
        break;
        case 3:sld();
        SetConsoleTextAttribute(h,9);
        break;
        case 4:strt();
        SetConsoleTextAttribute(h,10);
        break;
        case 5:maincr();
        SetConsoleTextAttribute(h,15);
        break;
        case 6:brd();
        SetConsoleTextAttribute(h,13);
        break;
        case 7:rice();
        SetConsoleTextAttribute(h,8);
        break;
        case 8:chn();
        SetConsoleTextAttribute(h,12);
        break;
        case 9:arbn();
        SetConsoleTextAttribute(h,5);
        break;
        case 10:drnks();
        SetConsoleTextAttribute(h,15);
        break;
        case 11:shk();
        SetConsoleTextAttribute(h,14);
        break;
        case 12:dsrt();
        SetConsoleTextAttribute(h,1);
        break;
        default:cout<<"Invalid choice";
        break;


    }
}
void spcl(){
    SetConsoleTextAttribute(h,5);
    system("CLS");
    int m;
    string t;
    cout<<"1.Zafrani Chai\n2.Afghani kebab\n3.Tangdi kebab\n4.Fish Tikka\n5.Chicken Malai Kebab\n6.Apollo Fish \n\n\n\n"<<"Enter your choice(number) : ";
    cin>>m;
    switch (m){
        case 1:cout<<"1.FULL-30rs\n2.HALF-20RS\n\n\n\n\n\nDo You Want Full Or Half ? ";
        cin>>t;
        break;
        case 2:piece();
        break;
        case 3:piece();
        break;
        case 4:piece();
        break;
        case 5:piece();
        break;
        case 6:piece();
        break;
        default:cout<<"Invalid number";
        break;
    }

}
void piece(){
    SetConsoleTextAttribute(h,7);
    int u;
    system("CLS");
    cout<<"8-pieces\t240rs\n10-pieces\t300rs\n12-pieces\t350rs\n15-pieces\t420rs\n\n\n\n\n\n"<<"Enter Number of Pieces : ";;
    cin>>u;
}
void soup(){
    SetConsoleTextAttribute(h,8);
    system("CLS");
    int u;
    cout<<"1.Tomato Soup\t\t \t99rs\n2.Veg Corn Soup      \t\t99rs\n3.Hot and Sour Soups        \t119rs\n4.Chicken Corn Soup         \t129rs\nChicken Hakka Soup        \t149rs\nChicken Hot and Sour Soup      \t149rs\n\n\n\n"<<"Enter your choice(number) : ";
    cin>>u;
}
void sld(){
    SetConsoleTextAttribute(h,9);
    system("CLS");
    int u;
    cout<<"1.Green Salad\t\t79rs\n2.Fattoush Salad\t179rs\n\n\n\n\n"<<"Enter your choice(number) : ";
    cin>>u;
}
void strt(){
    SetConsoleTextAttribute(h,11);
    system("CLS");
    int u;
    cout<<"1.Panner Tikka(8-piece)\t\t175rs\n2.Aloo Tikka(8-piece)\t\t175rs\n3.Tandori Chicken(8-piece)\t199rs\n4.Garlic Fish(8-piece)\t\t129rs\n5.Grilled Prawns(8-piece)\t255rs\n6.Tandori Prawns(8-piece)\t275rs\n7.Chicken Choppan(10-piece)\t275rs\n8.Pathani Seekh Kebab(10-piece)\t275rs\n\n\n\n\n\n\n"<<"Enter your choice(number) : ";
    cin>>u;
}
void maincr(){

    system("CLS");
    SetConsoleTextAttribute(h,11);
    int u;
    cout<<"1.Dal Fry\n2.Dal Tadka\n3.Paneer Butter Masala\n4.Kadai Paneer\n5.Paneer Tikka\n6.Mix Veg Curry \n7.Veg Kadai\n8.Murgh Curry\n9.Butter Curry\n10.Mutton Kali Mirchi\n11.Nahari\n12.Afghani Curry\n13.Kadai Chicken\n14.Chicken DO Pyaz\n15.Chicken Tikka\n16.Chicken Korma\n17.Dum ka Chicken\n18.Dum ka Mutton\n19.Fish Curry \n20.Fish Chatpata\n\n\n\n\n"<<"Enter your choice(number) : ";
    cin>>u;
    switch(u){
        case 1:size1();
        break;
        case 2:size1();
        break;
        case 3:size1();
        break;
        case 4:size1();
        break;
        case 5:size2();
        break;
        case 6:size2();
        break;
        case 7:size2();
        break;
        case 8:size2();
        break;
        case 9:size2();
        break;
        case 10:size2();
        break;
        case 11:size2();
        break;
        case 12:size3();
        break;
        case 13:size3();
        break;
        case 14:size3();
        break;
        case 15:size3();
        break;
        case 16:size3();
        break;
        case 17:size4();
        break;
        case 18:size4();
        break;
        case 19:size4();
        break;
        case 20:size4();
        break;
        default:cout<<"Invalid number";
        break;
    }
}
void size1(){
    SetConsoleTextAttribute(h,13);
    string f;
    cout<<"HALF[serves 1]\t\t100rs\nFULL[serves 2]\t\t170rs\n\n\n\n\n"<<"Do You Want Full or Half ? ";
    cin>>f;
}
void size2(){
    SetConsoleTextAttribute(h,1);
    string f;
    cout<<"HALF[serves 1]\t\t150rs\nFULL[serves 2]\t\t220rs\n\n\n\n\n"<<"Do You Want Full or Half ? ";
    cin>>f;
}
void size3(){
    SetConsoleTextAttribute(h,15);
    string f;
    cout<<"HALF[serves 1]\t\t175rs\nFULL[serves 2]\t\t249rs\n\n\n\n\n"<<"Do You Want Full or Half ? ";
    cin>>f;
}
void size4(){
    SetConsoleTextAttribute(h,6);
    string f;
    cout<<"HALF[serves 1]\t\t199rs\nFULL[serves 2]\t\t275rs\n\n\n\n\n"<<"Do You Want Full or Half ? ";
    cin>>f;
}
void brd(){
    system("CLS");
    int u;
    SetConsoleTextAttribute(h,10);
    cout<<"1.Rumali Roti\t18rs\n2.Tandori Roti\t25rs\n3.Butter Naan\t30rs\n4.Aloo Paratha\t99rs\n5.Keema Naan\t79rs\n\n\n\n"<<"Enter your choice(number) : ";
    cin>>u;

}
void rice(){
    system("CLS");
    int u;
    SetConsoleTextAttribute(h,12);
    cout<<"1.Tomato Rice\n2.Lemon Rice\n3.Jeera Rice\n4.Veg Fried Rice\n5.Dal Rice\n6.Chicken Korma Rice \n7.Mixed Fried Rice\n8.Pulao\n9.Chicken Biryani\n10.Mutton Biryani\n11.SPL.Chicken Biryani\n12.SPL.Mutton Biryani\n13.Fish Biryani\n\n\n\n"<<"Enter your choice(number) : ";
    cin>>u;
    switch(u){
        case 1:siz1();
        break;
        case 2:siz1();
        break;
        case 3:siz1();
        break;
        case 4:siz2();
        break;
        case 5:siz2();
        break;
        case 6:siz3();
        break;
        case 7:siz3();
        break;
        case 8:siz2();
        break;
        case 9:siz4();
        break;
        case 10:siz4();
        break;
        case 11:siz5();
        break;
        case 12:siz5();
        break;
        case 13:siz5();
        break;
        default:cout<<"Invalid Choice !!!";
        break;
    }
}
void siz1(){
    string t;
    SetConsoleTextAttribute(h,3);
    cout<<"HALF[serves-1]\t\t70rs\nFULL[serves-2]\t\t125rs\n\n\n\n"<<"Do You Want Full or Half ? ";
    cin>>t;
}
void siz2(){
    string f;
    SetConsoleTextAttribute(h,10);
    cout<<"HALF[serves 1]\t\t80rs\nFULL[serves 2]\t\t150rs\n\n\n\n\n"<<"Do You Want Full or Half ? ";
    cin>>f;
}
void siz3(){
    string f;
    SetConsoleTextAttribute(h,13);
    cout<<"HALF[serves 1]\t\t90rs\nFULL[serves 2]\t\t175rs\n\n\n\n\n"<<"Do You Want Full or Half ? ";
    cin>>f;
}
void siz4(){
    SetConsoleTextAttribute(h,13);
    string f;
    cout<<"1.MINI\t\t\t120rs\n2.REGULAR\t\t230rs\n3.HANDI\t\t\t275rs\n4.FAMILY PACK5\t\t490rs\n5.JUMBO PACK\t\t650rs\n\n\n\n\n"<<"Enter Your Choice : ";
    cin>>f;
}
void siz5(){
    SetConsoleTextAttribute(h,5);
    string f;
    cout<<"1.MINI\t\t\t135rs\n2.REGULAR\t\t250rs\n3.HANDI\t\t\t310rs\n4.FAMILY PACK5\t\t525rs\n5.JUMBO PACK\t\t720rs\n\n\n\n\n"<<"Enter Your Choice : ";
    cin>>f;
}
void chn(){
    system("CLS");
    SetConsoleTextAttribute(h,12);
    int t;
    cout<<"1.Veg Fried Rice\n2.Egg Fried Rice\n3.Chicken Fried Rice\n4.Veg Noodles\n5.Egg Noodles\n6.Chicken Noodles\n7.Schezwan Fried Rice\n8.Schezwan Noodles\n9.Singapore Noodles\n10.American Noodles\n11.Veg Chopsuey \n12.Chicken Chopsuey\n\n\n\n"<<"Enter Your Choice(Number) : ";
    cin>>t;
    switch(t){
        case 1:siz1();
        break;
        case 2:siz2();
        break;
        case 3:siz1();
        break;
        case 4:siz1();
        break;
        case 5:siz1();
        break;
        case 6:siz2();
        break;
        case 7:siz3();
        break;
        case 8:siz3();
        break;
        case 9:siz3();
        break;
        case 10:siz3();
        break;
        case 11:siz1();
        break;
        case 12:siz2();
        break;
    }
}
void arbn(){
    system("CLS");
    SetConsoleTextAttribute(h,4);
    int t;
    string s;
    cout<<"1.Chicken Mandi \t\tSMALL-175rs\t\tMEDIUM-300rs\t\tLARGE-410RS\n2.Mutton Mandi \t\t\tSMALL-220RS\t\tMEDIUM-380rs\t\tLARGE-530rs\n3.Chicken Khabsa\t\tHALF-175rs\t\tFULL-300rs\n4.Mutton Khabsa \t\tHALF-220rs\t\tFULL-380rs\n5.Shawarma\t\t\tMINI-50rs\t\tREGULAR-110rs\t\tSPECIAL-130rs\n6.Fish Mandi\t\t\tSMALL-270RS\t\tMEDIUM-395rs\t\tLARGE-550rs\n\n\n\n"<<"Enter Your Choice(number) :";
    cin>>t;
    cout<<"\nEnter the Size : ";
    cin>>s;
}
void drnks(){
    system("CLS");
    SetConsoleTextAttribute(h,5);
    int r;
    cout<<"1.WATER\t\t\t\t20rs(1L)\n2.PEPSI\t\t\t\t40rs(600ml)\n3.COKE \t\t\t\t40rs(600ml)\n4.SPRITE\t\t\t40rs(600ml)\n5.MIRINDA\t\t\t40rs(600ml)\n6.THUMBS-UP\t\t\t40rs(600ml)\n7.TEA\t\t\t\t20rs\n8.ZAFRANI TEA\t\t\t30rs\n\n\n\n\n\n"<<"Enter Your Choice (Number): ";
    cin>>r;
}
void dsrt(){
    system("CLS");
    int r;
    SetConsoleTextAttribute(h,7);
    cout<<"1.Chocolate MOusse\t\t99rs\n2.Chocolate Brownie\t\t50rs\n3.Chocalte Truffle Cupcake \t60rs\n4.Chocolate Cookie\t\t50rs\n5.Dark Chocolate Pastry\t\t70rs\n6.BlackBerry Pastry\t\t75rs\n7.BlueBerry Pastry\t\t75rs\n8.Red Velvet Pastry\t\t80rs\n9.Chocolate Jar\t\t\t90rs\n10.Red Velvet Jar\t\t90rs\n11.Double ka Meetha\t\t75rs\n12.Badam ki Kheer\t\t80rs\n13.Gulab Jamun(2-pieces)\t60rs\n14.Apple Cinamon Custard\t75rs\n15.Baklava\t\t\t50rs\n\n\n\n\n\n";
    cout<<"Enter your choice(number) : ";
    cin>>r;
}
void shk(){
    system("CLS");
    int m;
    SetConsoleTextAttribute(h,8);
    cout<<"1.Lassi\t\t\t\t45rs\n2.Mango Lassi \t\t\t55rs\n3.Chikoo Mocktail\t\t55rs\n4.Belgian Chocolate Mocktail\t60rs\n5.Strawberry Mocktail\t\t60rs\n6.Oreo Mocktail\t\t\t60rs\n7.Dry Fruit Shake\t\t75rs\n8.nutella Shake \t\t75rs\n9.Crazy Nuts Shake\t\t75rs\n10.Ferrero Rocher Milkshake\t115rs\n11.Berry Mojito\t\t\t69rs\n12.Green Apple Mojito\t\t69rs\n13.Kiwi Mojito\t\t\t69rs\n14.Blue Ocean Mojito\t\t69rs\n15.Lime Soda\t\t\t50rs\n\n\n\n\n\n";
    cout<<"Enter your choice(number) : ";
    cin>>m;

}