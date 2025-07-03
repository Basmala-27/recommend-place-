#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

///////////////////فانكشن مسح الكونسول بعد كل ادخال
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

/////////////////////استراكشر لتعريف المطاعم
/////////////////اعداد اسمي محمد
struct details {
string kind[8],pizza[5],koshari[5],grilled[5];
string seafood[5],syrian[5],falafel[5],fastfood[5],fried[5];
string pizza_add[5],koshari_add[5],grilled_add[5],seafood_add[5];
string syrian_add[5],falafel_add[5],fastfood_add[5],fried_add[5];
string pizza_phone[5],koshari_phone[5],grilled_phone[5],seafood_phone[5];
string syrian_phone[5],falafel_phone[5],fastfood_phone[5],fried_phone[5];
};

/////////////////////فانكشن المطاعم
/////////////////اعداد اسمي محمد
void resturant(){
    cout<<"What You Want To Eat Today!!!!"<<endl;
   details resturant;
   resturant.kind[0]="1-Pizza"; resturant.kind[1]="2-Koshari"; resturant.kind[2]="3-Grilled Food";
    resturant.kind[4]="5-Seafood";  resturant.kind[3]="4-falafel";
     for(int i=0;i<5;i++){
        cout<<resturant.kind[i];
        cout<<endl;
     }
     int y;
     cin>>y;
    if(y==1){
      resturant.pizza[1]="1)Crepiano Restaurant";resturant.pizza[2]="2)Al-Masry Restaurant, Assiut";
        resturant.pizza[3]="3)Pizza Royal Restaurant"; resturant.pizza[4]="4)Patissia Pizza and Pies Restaurant";
        resturant.pizza[5]="5)Italiano pizza";
        for(int i=1;i<=5;i++){
            cout<<resturant.pizza[i];
            cout<<endl;
        }
        int t;
        cin>>t;
        resturant.pizza_add[1]="Address: Al-Hamraa Al-Thani Building, 22 Al-Hilali, Sharq District, Second Section, Assiut";
        resturant.pizza_add[2]="Address: Beside Civil Defense, Al Hilali";
        resturant.pizza_add[3]="Address: Al-Hilali, Al-Hamra Al-Oula, Second Section, Assiut, Assiut Governorate";
        resturant.pizza_add[4]="Address: Governorate, Assiut Second District, Assiut Governorate";
        resturant.pizza_add[5]="Address: Sultan Bridge, Second Hamra, First District of Assiut, Assiut Governorate";
        resturant.pizza_phone[1]="Delivery service: 01013925757";resturant.pizza_phone[2]="Delivery service: 01111777818";resturant.pizza_phone[3]="Delivery service: 2328003";
        resturant.pizza_phone[4]="Delivery service: 2312666";resturant.pizza_phone[5]="Delivery service: 01027753572";
       cout<<resturant.pizza[t]<<endl<<resturant.pizza_add[t]<<endl<<resturant.pizza_phone[t];
        cout<<endl;
}
else if(y==2){
        resturant.koshari[1]="Koshary Al Midan"; resturant.koshari[2]="Koshari Al Hanaa";resturant.koshari[3]="Koshari Abu Hanafi";
        resturant.koshari[4]="Koshari Zaman";resturant.koshari[5]="Koshari and Halwani Najma Al Homsani";
        resturant.koshari_add[1]="Address: King City Street, Gharb District, Seventh Sheikha, Second Section, Assiut";
        resturant.koshari_add[2]="Address: Sheikh Fayek Abu Al-Maali, Al-Hamra Al-Thani, Second Section, Assiut";
        resturant.koshari_add[3]="Address: Asmaa Allah Al-Hasani Square, Oualidia Al-Wastania, Second Section, Assiut Governorate";
        resturant.koshari_add[4]="Address: Assiut Train Station ";
        resturant.koshari_add[5]="Address: Thabet Street, Al Mahatta";
        resturant.koshari_phone[1]="Delivery service: 01029009777";resturant.koshari_phone[2]="Delivery service: 01007008248";
        resturant.koshari_phone[3]="Delivery service: 01118026060";resturant.koshari_phone[4]="Delivery service:01503396683";
        resturant.koshari_phone[5]="Delivery service: 2340022";
        for(int i=1;i<=5;i++){
            cout<<i<<"-"<<resturant.koshari[i]<<endl;
        }
        int t;
        cin>>t;
        cout<<resturant.koshari[t]<<endl<<resturant.koshari_add[t]<<endl<<resturant.koshari_phone[t];
        cout<<endl;

}
else if(y==3){
    resturant.grilled[1]="Talaat Restaurant ";resturant.grilled[2]="Kababji Ali Hussein";
    resturant.grilled[3]="Kababji Ahmed Thabet";
    resturant.grilled[4]="Karam Grill Restaurant";resturant.grilled[5]="";
    resturant.grilled_add[1]="Address: Khaled Bin Al-Walid, Al-Hamra Al-Thani, Second Section, Assiut, Assiut Governorate ";
     resturant.grilled_add[2]="Address: Al-Hamraa Al-Thani, Al-Fath, Assiut Governorate";
     resturant.grilled_add[3]="Address: King City I, Seventh Sheikha, Second District, Assiut, Assiut Governorate ";
      resturant.grilled_add[4]="Address: Al-Hamra Al-Thani, Second Section, Assiut, Assiut Governorate";
       resturant.grilled_add[5]="";
        resturant.grilled_phone[1]="Delivery service:2063336"; resturant.grilled_phone[2]="Delivery service: 2332080";
        resturant.grilled_phone[3]="Delivery service: 01009595796";
          resturant.grilled_phone[4]="Delivery service: 01012132420"; resturant.grilled_phone[5]="";
        for(int i=1;i<=4;i++){
            cout<<resturant.grilled[i]<<endl;
        }
        int t;
        cin>>t;
          cout<<resturant.grilled[t]<<endl<<resturant.grilled_add[t]<<endl<<resturant.grilled_phone[t];
        cout<<endl;

}
  else if(y==4){
        resturant.falafel[1]="Kammouna Restaurant";resturant.falafel[2]="Damietta Restaurant, Assiut";
        resturant.falafel[3]="Arabiata Restaurant";
        resturant.falafel[4]="pepper";resturant.falafel[5]="Falafel popular food restaurant";
        resturant.falafel_add[1]="Address: Muhammad Ali Makarem, Second Section, Assiut, Assiut Governorate";
        resturant.falafel_add[2]="Address: Al-Gomhouria, Al-Hamra Al-Thani, Second Section, Assiut, Assiut Governorate";
         resturant.falafel_add[3]="Address: Al-Ibrahimiya, Al-Walidiya Al-Wastaniyya, Second Section, Assiut, Assiut Governorate";
          resturant.falafel_add[4]="Address: Al-Namis Street - Salah El-Din Al-Ayoubi, Al-Hamra Al-Thani, Al-Fath, Assiut Governorate";
          resturant.falafel_add[5]="Address: Muhammad Ali Makarem, Al-Hamra Al-Thani, Second Section, Assiut, Assiut Governorate";
           resturant.falafel_phone[1]="Delivery service: 01032363919";resturant.falafel_phone[2]="Delivery service:01001007808";
           resturant.falafel_phone[3]="Delivery service: none";resturant.falafel_phone[4]="Delivery service: 01001737363";
           resturant.falafel_phone[5]="Delivery service: 01026454441";
           for(int i=1;i<=5;i++){
            cout<<i<<"-"<<resturant.falafel[i]<<endl;
           }
            int t;
        cin>>t;
          cout<<resturant.falafel[t]<<endl<<resturant.falafel[t]<<endl<<resturant.falafel_phone[t];
        cout<<endl;


  }
  else if(y==5){
    resturant.seafood[1]="Al-Hamd Fish Restaurant";resturant.seafood[2]="Kasten Seafood Restaurant";
    resturant.seafood[3]="Samakmak Restaurant in Assiut";
    resturant.seafood[4]="Bahrain fish";resturant.seafood[5]="Suez fish";
    resturant.seafood_add[1]="Address: Nile Corniche - Al-Thawra, Second Section, Assiut, Assiut Governorate";
    resturant.seafood_add[2]="Address: Al-Hamraa Al-Thani, Al-Fath, Assiut Governorate";
    resturant.seafood_add[3]="Address: Petroleum Division, Sharq District, Assiut Governorate";
    resturant.seafood_add[4]="Address:Mohammed Fareed- Reyad Sabekn";
    resturant.seafood_add[5]="Address: Al-Jaish Street, Railway Tower in front of, Al-Zahraa Tunnel";
    resturant.seafood_phone[1]="Delivery service:01011066661";
    resturant.seafood_phone[2]="Delivery service: 2283833";
    resturant.seafood_phone[3]="Delivery service: 2063600";
    resturant.seafood_phone[4]="Delivery service: 2300315";
    resturant.seafood_phone[5]="Delivery service: 01226286300";
   for(int i=1;i<=5;i++){
    cout<<i<<"-"<<resturant.seafood[i]<<endl;
   }
    int t;
        cin>>t;
          cout<<resturant.seafood[t]<<endl<<resturant.seafood_add[t]<<endl<<resturant.seafood_phone[t];
        cout<<endl;
  }



}
/////////////////////////////////تم المطاعم ////////////////

//////////////////////قسم النوادى و الحدائق /////////////////
//اعداد بسمله محمد
bool clubs()
{
string emoji =""; // لو عاوزين نضيف ايموشا معين
emoji+=3;
cout << "Hello! I want to help you to find the club or park that you need "<<emoji << emoji << emoji<< endl<<endl;
cout <<"Enter the thing you want in the club or park like "
    << "games / nice price / nice view ...\n\n"
    <<"NOTE !! just enter the thing you want\n\n";
string user_search ,copy_user_search;
cin>>user_search   ;
cin.clear();
cin.ignore(200,'\n');
user_search+=' ';
copy_user_search="";
for(int counter = 0 ; counter < user_search.size(); counter++)
{
    if(isupper(user_search[counter]))
    copy_user_search+=user_search[counter]+32;
    else
    copy_user_search+=user_search[counter];
}
if(copy_user_search=="more ")
    copy_user_search="111";
clearScreen();

string line;
ifstream myfile ("clubs in assuit"); // الملف الى متخزن فيه الداتا
ifstream informationFile("information");// الملف الى متخزن فيه الداتا بشكل منظم للعرض
bool found = 0 ;
int counter_found = 0 , counter=0 ,index_word=0;
bool start = 0 ;
if (myfile.is_open()) {
int index=0;
while(copy_user_search[index]==' ')//لو دخل الداتا بمسافات في البدايه
{
    copy_user_search.erase(0,1);
    index++;
}

while ( getline (myfile,line) && user_search.size()>3) {
string copy_line ="" ;
for(int counter = 0 ; counter < line.size(); counter++)
{
    if(isupper(line[counter]))
    copy_line+=line[counter]+32;
    else
    copy_line+=line[counter];
}

if(line == "----"){
    start = 0 ; found = 0 ;}

else if (found && start ) {
    cout << line << std::endl;
    if (line.find("more information ") != std::string::npos)
    {
    char choice;
    cin >> choice;
    clearScreen();
while (choice != 'a' && choice != 'b') {
cout << "Please press a or b !!!\n";
cin >> choice;
clearScreen();}
if(choice == 'b')
    {
        string information_line;
        bool start_line = 0 ;
        bool found_line = 0 ;
while ( getline (informationFile,information_line))
    {  string code = "" ;
        code = to_string(counter*1000);
        if(information_line == "----"&&found_line){
        start_line = 0 ; found_line = 0 ;
            break;
        }
    else if (found_line && start_line ) {
    cout << information_line << std::endl;}
    else if(information_line == "--"){
    start_line = 1 ;}

    else if (information_line == code){
    found_line = true ;}
    }
cout << endl <<"\nif you want another one enter \"a\"\n"
<< "if you found what you want and don't want more enter \"b\" \n\n" ;
cin >> choice;

clearScreen();
while (choice != 'a' && choice != 'b') {
cout << "Please press a or b !!!\n";
cin >> choice;
clearScreen();}
        }
if(choice=='b'){
emoji="";emoji+=3;
cout << "\n\n We are happy to help you and made you find what you want "<<emoji<<emoji<<endl; ;

        return 0 ;}
    }
}

else if(line == "--"){
start = 1 ;}

else if (copy_line.find(copy_user_search) != std::string::npos) {
found = true ;counter_found++;}
if(line=="%%"){
  counter++;}
}

if(!counter_found){
emoji = "" ;emoji+=1;
cout << "Sorry , but i can't find "<<user_search<<" in any park or club in Assuit"<<emoji
<<emoji <<endl<<endl; cout <<"You can try more simple word again "<<emoji << endl<<endl;}
if(counter_found){
emoji+=1;
cout << "\n\nOpps !! That all we have about it"<<emoji << endl ;}
myfile.close();
informationFile.close();
}
else cout << "Unable to open file";

return 0 ;
}

         /////////////////////فانكشن معلومات عن اسعار الفنادق المنخفضه
         ////////////////اعداد رغده مدحت
void two(int n)
{
   ifstream file("low price.txt");  // Open the file
    if (!file.is_open()) {
        cerr << "Unable to open the file!" << endl;

    }
  string line;
while(getline(file,line))
{
  cout<<line<<endl;
}
file.close();


}

/////////////////////////////////م معلومات عن اسعار الفنادق المتوسطه
         ////////////////اعداد رغده مدحت
void one(int n)
{
   ifstream file("mid rang.txt");  // Open the file
    if (!file.is_open()) {
        cerr << "Unable to open the file!" << endl;

    }
  string line;
while(getline(file,line))
{
  cout<<line<<endl;
}
file.close();


}

/////////////////////فانكشن معلومات عن اسعار الفنادق المرتفعه
         ////////////////اعداد رغده مدحت
void three(int n)
{
   ifstream file("high price.txt");  // Open the file
    if (!file.is_open()) {
        cerr << "Unable to open the file!" << endl;

    }
  string line;
while(getline(file,line))
{
  cout<<line<<endl;
}
file.close();


}
/////////////////////قسم الفنادق ///////////////////
///////////اعداد رغده مدحت
void functions(){
int range;
cout<<"\n\nThere are three different hotel price ranges: 1 for high, 2 for medium, and 3 for low. Please choose one of them.";
cin>>range;
if(range>3||range<0)
{
    cout<<"valid value";
}
else  if(range==1)
three(range);
else if(range==2)
one(range);
else if(range==3)
two(range);
    ;}
  ////////////////////////تم الفنادق//////////////////////////////////


//////////////////////////////فانكشن الصيدليات
////////اعداد تسنيم عبد الرحمن
const string pharmacies[5] = {
    "-----------------------------------------\n"
    "Abdeen Pharmacy\n"
    "phone :  01092801115   \n"
    "-----------------------------------------\n",
    "El-Ezaby Pharmacy\n"
    "phone : 01103903862\n"
    "-----------------------------------------\n",
    "Al-Nahhas Pharmacy\n"
    "phone : 01210593030\n"
    "-----------------------------------------\n",
    "Care Pharmacy\n"
    "phone : 01101433108\n"
    "-----------------------------------------\n",
    "Health Pharmacy\n"
    "phone : 0882336364\n"
    "-----------------------------------------\n"
};

    //////////////////////////////فانكشن اختيارات الصيدليات
////////اعداد تسنيم عبد الرحمن
void showPharmacies(const string pharmacies[], int size) {

    char choice;
    for (int i = 0; i < size; ++i) {
        cin >> choice;
        clearScreen();
        while (choice != 'a' && choice != 'b') {
            cout << "Please press a or b !!!\n";
            cin >> choice;
            clearScreen();

            }


        if (choice == 'b') {
            cout << "I wish you a speedy recovery, my friend\n";
            cout << "See you soon \n";
            return;
        }

        if (choice=='a'){
        cout << pharmacies[i];
        cout << "Do you want to see another pharmacy?\n";
        cout << "a-Yes" << "                       " << "b-NO\n";

        }


    }
}


//////////////////////////////فانكشن  تعرض قسم الطبي المطلوب والاختيارات
////////اعداد تسنيم عبد الرحمن
void showDepartment(const string department[], int size) {
    char choice;
    for (int i = 0; i < size; ++i) {
        cout << department[i];
        cout << "Do you want a doctor other than that?\n";
        cout << "a-Yes" << "                       " << "b-NO\n";
        cin >> choice;
        clearScreen();
        while (choice != 'a' && choice != 'b') {
            cout << "Please press a or b !!!\n";
            cout << "Do you want a doctor other than that?\n";
            cout << "a-Yes" << "                       " << "b-NO\n";
            cin >> choice;
            if((choice == 'a') || (choice == 'b'))
             clearScreen();
            else
                clearScreen();
        clearScreen();
        }
        if (choice == 'b') {
            cout << "Do you want the numbers of pharmacies that deliver medicine?\n";
            cout << "a-Yes" << "                       " << "b-NO\n";


                showPharmacies(pharmacies, 5);

            return;
        }






    }
}
 //////////////////////////////فانكشن الاقسام المتاحه والدكاتره والصيدليات
////////اعداد تسنيم عبد الرحمن
void doctors()
{
    string Department_of_Neurology[5] = {
        "------------------------------------------------------\n"
        "***** Dr. Mahmoud Hassan Al-Awaidi *****\n"
        "Doctor's examination price: 320 pounds\n"
        "Address: Assiut Center: Al Tawheed Tower 4, Yusri Ragheb Extension - 3rd floor\n"
        "Phone: 01019331629\n"
        "--------------------------------------------------------------------------------\n",
        "--------------------------------------------------------\n"
        " ********Dr.Ismail Mohamed Taha\n"
        "the address : Assiut Center : Al - Mahatta Square - Khaled Ibn Al - Walid Tower(A)\n"
        "Phone : 01201111344\n"
        " Doctor's examination price: 330 pounds \n"
        "----------------------------------------------------------------------------------\n",
        "------------------------------------------------------------\n"
        "Dr.Ali Ahmed Abdel Aleem\n"
        "the address : Yousry Ragheb Street. Cement Tower, first floor\n"
        "Doctor's examination price:  400 pounds\n"
        "Phone: 01553519503\n"
        "---------------------------------------------------------------------\n",
        "-------------------------------------------------------------------\n"
        "*Dr.Muhammad Fawzi Abdel - Al *************\n"
        "the address :Assiut Center: Al-Zera\’een Hospital, Al-Masahah Street, off Al-Gomhouria Street\n"
        "Phone: 01014363839\n"
        "Doctor's examination price: 350\n"
        "--------------------------------------------------------------------------------------------\n",
        "---------------------------------------------------------------------------------\n"
        "Dr. Mohamed Hamza\n"
        "the address :Assiut, Mahatta Square, behind the bus station, third floor, next to the Madina Hotel\n"
        "Phone : 01064040417\n"
        "Doctor's examination price:  350 pounds\n"
        "---------------------------------------------------------------------------------\n"
    };

    string pediatrics[4] = {
        "------------------------------------------------------\n"
        "********* Dr. Amani Ahmed Al-Sharif *********\n"
        "Address: Assiut - Al-Azhar University Street, Al-Nasr Towers, Tower A3 - second floor, in front of the Health Directorate - next to Arabiata Restaurant\n"
        "Phone: 01013997600\n"
        "Doctor's examination price: 220 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Ismail Lotfy Muhammad *********\n"
        "Address: Yousry Ragheb Street, above Turkish Juice and New Jeans stores, third floor, Apartment 316\n"
        "Phone: 01067353767\n"
        "Doctor's examination price: 250 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Lamia Hassan Mahrous *********\n"
        "Address: Assiut City, Assiut, Tawheed Tower, Yusra Ragheb Extension, Entrance 3, Floor 2\n"
        "Phone: 02 25983900\n"
        "Doctor's examination price: 300 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Salah El-Din Omari *********\n"
        "Address: Al Safa Tower, 23 July Street, next to Al Shamila Hospital, fourth floor\n"
        "Phone: 011 15337717\n"
        "Doctor's examination price: 200 pounds\n"
        "------------------------------------------------------\n"
    };

    const string orthopedics[5] = {
        "------------------------------------------------------\n"
        "********* Dr. Mohamed Al-Sharif *********\n"
        "Address: Extension of 23 July Street\n"
        "Phone: 01000463378\n"
        "Doctor's examination price: 200 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Hisham Al-Qadi *********\n"
        "Address: University Street, Ash Sheyakhah as Sabeah, Asyut 1, Assiut Governorate 2073110\n"
        "Phone: 088/2346133\n"
        "Doctor's examination price: 300 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Omar Al-Rifai *********\n"
        "Address: Al-Gomhouria St., Othman Bin Affan Towers, Tower C, ground floor\n"
        "Phone: 088/2282672\n"
        "Doctor's examination price: 250 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Ahmed Abdel Aal El Nashar *********\n"
        "Address: Yousry Ragheb Street, in front of Omar Effendi, in Al Salam Eye Hospital Building, second floor\n"
        "Phone: 01118000244\n"
        "Doctor's examination price: 200 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Amr Al-Sayed Ali *********\n"
        "Address: alawqaf Building No. 4, first floor, upper floor\n"
        "Phone: 01271942311\n"
        "Doctor's examination price: 250 pounds\n"
        "------------------------------------------------------\n"
    };

    const string dental[5] = {
        "------------------------------------------------------\n"
        "********* Dr. Mahmoud Esmat *********\n"
        "Address: Assiut Center: Al-Maydoub - July 23 Street _Ibn Sina Tower, above B.Tech\n"
        "Phone: 01030222654\n"
        "Doctor's examination price: 100 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Atef Abdel Karim *********\n"
        "Address: 26th of July Street - Endowments Building, entrance B in front of the old Al-Iman Hospital\n"
        "Phone: 01028655399\n"
        "Doctor's examination price: 150 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Rumane Jamil Taqawi *********\n"
        "Address: Assiut, 42 Khaled Bin Al-Walid Street, first floor\n"
        "Phone: 01099280483\n"
        "Doctor's examination price: 200 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Nashwa Ali *********\n"
        "Address: Assiut - in front of Al-Shamila Hospital - fourth floor - above Al-Nahar Eye Center\n"
        "Phone: 01013817520\n"
        "Doctor's examination price: 150 pounds\n"
        "------------------------------------------------------\n",
        "------------------------------------------------------\n"
        "********* Dr. Mustafa Mohammed Sayed *********\n"
        "Address: alawqaf Building, Entrance 4, first floor, next to AL lmukhtabar lab\n"
        "Phone: 01090508068\n"
        "Doctor's examination price: 200 pounds\n"
        "------------------------------------------------------\n"
    };

    cout << "We are excited to welcome you to our medical project\n";
     cout<<"and look forward to providing a unique healthcare experience\n";
     cout<<"that enhances your quality of life\n";
     cout<<"---------------------------------------------------------------\n";
    cout << "What medical department do you want?\n";
    cout << "a - Department of Neurology\n";
    cout << "b - Pediatrics and Newborns Department\n";
    cout << "c - Department of Orthopedics\n";
    cout << "d - Department of Oral and Dental\n";

    char choice;
    cin >> choice;
    clearScreen();
while((choice!='a')&&(choice!='b')&&(choice!='c')&&(choice!='a')){
    cout <<"Please clik a or b or c or d\n";
     cin >> choice;
     clearScreen();
}
    switch (choice) {

    case 'a':
        showDepartment(Department_of_Neurology, 5);
        break;
    case 'b':
        showDepartment(pediatrics, 4);
        break;
    case 'c':
        showDepartment(orthopedics, 5);
        break;
    case 'd':
        showDepartment(dental, 5);
        break;

    }
}
///////////////////////////////تم قسم الدكاتره والصيدليات/////////////////////////


//////////////////فانكشن اعاده البحث في قسم الكافيهات
///////////////اعداد شهد اشرف
bool rebeatSearch(){

   cout<<"Do you want to Enter another Choise ??\na_yes \t b-No\n\n\t\tplease, Enter :\" a / b \"\n";
   int check_yesOrNo;
    while(true)
    {
        char yesOrNo; cin>>yesOrNo;
        cout<<endl;
        clearScreen();
        cout<<"---------------------------------------------------------------------------------\n";
        if(yesOrNo =='a'){  check_yesOrNo=1; break;}

        else if(yesOrNo =='b'){check_yesOrNo=0;  break;}

        else cout<<"invalid choise!!!!!/tPlease enter a character from:\" a / b \"\n";
    }
     if(check_yesOrNo==1)  return true;
     else return false;

     // to use function write : if(rebeatSearch())  continue;  else break;
}

//////////////////فانكشن انهاء او اعاده بدء قسم الكافيهات
///////////////اعداد شهد اشرف
bool EndProgramOrRestart(){
      cout<<"Do you want to End the Program Of \"cafe\" OR Back to main Menu Of \"Cafe\"?\na-Back to main Menu Of \"Cafe\" \t b-End the Program Of \"cafe\"\n\n\t\tplease, Enter :\" a / b \"\n";
   int checkEndOrBack;
    while(true)
    {
        char EndOrBack; cin>>EndOrBack;
        clearScreen();
        cout<<endl;
        cout<<"---------------------------------------------------------------------------------\n";
        if(EndOrBack =='a'){  checkEndOrBack=1; break;}

        else if(EndOrBack =='b'){checkEndOrBack=0;  break;}

        else cout<<"\tinvalid choise!!!!!\t\tPlease enter a character from:\" a / b \"\n";
    }
     if(checkEndOrBack==1)  return true;
     else return false;

     //to use function write : if(EndProgramOrRestart()){endProgect=0;  break;}  else{endProgect=1; break;}
}
/////////////////فانكشن الكافيهات
///////////////اعداد شهد اشرف
void cafe(){
    ////////////////initialize variables && arrays////////////////
   string name[20];
   string phone[20];
   string address[20];
   string extraInformation[20];
   string linkPage[20];
   int index_now=10;
   int endProgect=0;

   name[0]="Spago",name[1]="Elfanos",name[2]="Alturkey",name[3]="Estmorning",
   name[4]="Casablanca",name[5]="Arkan",name[6]="Porto",name[7]="Zola",
   name[8]="Ciao",name[9]="Rocket",name[10]="Gelaterinroma";

   phone[0]="01004327490 01115550846",phone[1]="0882160869   01023003126",phone[2]="01112229392  01090261261 01272054242",
   phone[3]="01008091747",phone[4]="01028199913",phone[5]="01030050920",phone[6]="01070852534",phone[7]="01277740073 01030507441",
   phone[8]="01070156554",phone[9]="01000308635",phone[10]="01004849180";

   address[0]="Ibrahimia Canal Corniche - Halls Street, in front of Al-Azhar University Girls' College",
   address[1]="Governorate Street, off El-Nemmes, next to El-Wahda School",
   address[2]="Yousry Ragheb Street - Al-Togarien Towers",
   address[3]="Al-Bahr Street, Al-Walidia, Al-Madinah Al-Munawarah Tower, next to Al-Wadi Hospital",
   address[4]="The outlet above Casablanca Hotel, 7th floor",
   address[5]="University Corniche, after Clock Square",
   address[6]="Yousry Ragheb Street, Al-Togarien Tower, next to El-Turki Juice",
   address[7]="El-Gomhouria Street, next to CIB Bank",
   address[8]="Asmaa Allah Al-Husna Square - Behind building 64 in Al-Azhar Housing - Next to Lafi Wedding Hall, formerly Vienna",
   address[9]="Mahmoud Rashwan Street, in front of the Al-Azhar Institute, next to Abu Al-Khair",
   address[10]="Judicial Towers Street, Asmaa Allah Al-Husna Square, Al-Walidia";


   extraInformation[0]="rating 4 and 4 stars,There is kids area, air-conditioned event hall with latest decor.\n open from 10:00 AM to 1:00 AM every day ,except Sunday opens from 4:00 PM to 2:00 AM.",
   extraInformation[1]="rating 4.4 and 4 stars. open every day from 10:00 AM to 1:00 AM, one of the most famous juice cafes in Assiut.",
   extraInformation[2]="rating 4.3 and 4 stars. open every day from 10:00 AM to 5:00 AM, one of the most famous juice cafés in Assiut.",
   extraInformation[3]="rating 5 stars, open 24 hours every day. offers low prices and high quality.",
   extraInformation[4]="rating 4.1 and 4 stars. cafe located inside the hotel.",
   extraInformation[5]="cafe open-air by the Nile, open 24 hours every day. offers session timings from 5:00 PM to 9:00 PM.",
   extraInformation[6]="No additional Information yet",
   extraInformation[7]="No additional Information yet",
   extraInformation[8]="rating 4.2 and 4 stars, open-air with greenery and natural views, open every day from 12:00 PM to 12:00 AM.",
   extraInformation[9]="No additional Information yet",
   extraInformation[10]="Its rating is 3.9,has 4 stars. open every day from 10:00 AM to 2:00 AM.";



   linkPage[0]="https://www.facebook.com/SpagoCafeAndRestaurant",
   linkPage[1]="https://www.facebook.com/fanos.assuit",
   linkPage[2]="https://www.facebook.com/AlturkeyJuices",
   linkPage[3]="https://www.facebook.com/estmorningcafe",
   linkPage[4]="https://www.facebook.com/Casablanca.Restaurant.EG",
   linkPage[5]="https://www.facebook.com/profile.php?id=61561772883672",
   linkPage[6]="https://www.facebook.com/portocaffeeasyut",
   linkPage[7]="https://www.facebook.com/ZolaCafeRestaurant",
   linkPage[8]="https://www.facebook.com/ciao.cafe1",
   linkPage[9]="https://www.facebook.com/profile.php?id=61555193515364",
   linkPage[10]="https://www.facebook.com/gelatriaroma";

        ///////////////////////////statr project/////////////////////

         cout<<"\t\t\tWelcome to \"Your Perfect Cafe for You!\" "<<endl<<endl;
         cout<<"\tWe are happy to help You find your Perfect Cafe...So let us Start!\n";
      while(1)
      {
          int endProgect=0;

         cout<<"\t\tThe Options You Have in our Program is....\n\n\n";
         cout<<"a-Get Help Finding a Cafe: Let us assist you in choosing the perfect cafe based on your preferences.\n\n";
         cout<<"b-Browse All Cafes: Explore all the cafes in our database and pick the one that suits you best.\n\n";
         cout<<"c-Add a Cafe: If you have a favorite cafe, and It is not on our list of cafes..\n\t\tyou would like to suggest to others, you can add it here!.\n\n\n";
         cout<<"\t\tPlease Enter character :\" a / b / c \"of option to get started!\n";
         char option; cin>>option;
         clearScreen();
         cout<<endl;
         cout<<"---------------------------------------------------------------------------------\n";


         ////////////////////////////first option////////////////////////////
         if(option=='a')
         {
    cout<<"\tWe understand that everyone has different priorities when choosing a cafe.So...."<<endl;
    cout<<"\tIn the next steps, you will select what is most important to you when visiting a cafe!"<<endl;
    cout<<"\t\tThis will help us guide you to fits your needs"<<endl<<endl;
    cout<<"a-Adress"<<"\t"<<"b-Range of Price"<<endl<<endl;
    cout<<"\t\tPlease, Enter a character from:\" a / b \"\n";

    while(true)
        {
    char choise;   cin>>choise;
    clearScreen();
    cout<<endl;
    cout<<"---------------------------------------------------------------------------------\n";
       //string rangePrice[20],site[20],technology[20];

     if(choise=='a')
     {
         cout<<"\t\t\tThis is some addresses of Cafes in Assiut \n\n";

                 string line;
         ifstream addressOfCafe ("addressOfCafe.txt");
         if (addressOfCafe.is_open()) {
         while ( getline (addressOfCafe,line) ) {
         cout << line << '\n'; }
         addressOfCafe.close(); }
         else cout << "Unable to open file";
        cout<<endl<<endl<<endl;


          while(true)
          {
              cout<<"\t\tEnter the index of address from 1 to "<<index_now+1<<" to show more details about this cafe \n"<<endl;
              int num_address; cin>>num_address;
             clearScreen();
             if(num_address>=1 && num_address<=index_now+1)
            {
                cout<<"Name of cafe : "<<name[num_address-1]<<endl<<"phone of cafe : "
                <<phone[num_address-1]<<endl<<"address of cafe : "<<address[num_address-1]<<endl<<"extraInformation of cafe : "
                <<extraInformation[num_address-1]<<endl<<"linkPage of cafe : "<<linkPage[num_address-1]<<endl<<endl;

                if(rebeatSearch()) {continue; cout<<endl;}
              else {break;cout<<endl;}
            }
        else cout<<"invalid index!!!!!/tPlease enter a index from 1 to "<<index_now+1<<endl;
          }
          if(EndProgramOrRestart()){endProgect=0;  break;cout<<endl;}  else{endProgect=1; break;cout<<endl;}
     }

     /////////////////////////////////////////////////////////////////
    else if(choise=='b')
    {
        while (true)
        {
          cout<<"a-Low Price"<<"\t\t"<<"b-Midium Price"<<"\t\t"<<"c-High Price\n\n";
          cout<<"\t\tEnter the Choise that fit your budget\n";

          while(true)
        {
            char choise_price;   cin>>choise_price;
            clearScreen();
            cout<<endl;
            cout<<"---------------------------------------------------------------------------------\n";

         if(choise_price=='a')
         {
             cout<<"\t\t\tHere are some low-cost cafes and juice shops.\n\n";
            cout<<"Name of cafe : "<<name[2]<<endl<<"phone of cafe : "
            <<phone[2]<<endl<<"address of cafe : "<<address[2]<<endl<<"extraInformation of cafe : "
            <<extraInformation[2]<<endl<<"linkPage of cafe : "<<linkPage[2]<<endl<<endl;

            cout<<"Name of cafe : "<<name[3]<<endl<<"phone of cafe : "
            <<phone[3]<<endl<<"address of cafe : "<<address[3]<<endl<<"extraInformation of cafe : "
            <<extraInformation[3]<<endl<<"linkPage of cafe : "<<linkPage[3]<<endl<<endl;

            cout<<"Name of cafe : "<<name[9]<<endl<<"phone of cafe : "
            <<phone[9]<<endl<<"address of cafe : "<<address[9]<<endl<<"extraInformation of cafe : "
            <<extraInformation[9]<<endl<<"linkPage of cafe : "<<linkPage[9]<<endl<<endl;
             break;

         }
         else if(choise_price=='b')
         {
             cout<<"\t\t\tHere are some Midium-cost cafes and juice shops.\n\n";
             cout<<"Name of cafe : "<<name[0]<<endl<<"phone of cafe : "
            <<phone[0]<<endl<<"address of cafe : "<<address[0]<<endl<<"extraInformation of cafe : "
            <<extraInformation[0]<<endl<<"linkPage of cafe : "<<linkPage[0]<<endl<<endl;

            cout<<"Name of cafe : "<<name[10]<<endl<<"phone of cafe : "
            <<phone[10]<<endl<<"address of cafe : "<<address[10]<<endl<<"extraInformation of cafe : "
            <<extraInformation[10]<<endl<<"linkPage of cafe : "<<linkPage[10]<<endl<<endl;

            cout<<"Name of cafe : "<<name[1]<<endl<<"phone of cafe : "
            <<phone[1]<<endl<<"address of cafe : "<<address[1]<<endl<<"extraInformation of cafe : "
            <<extraInformation[1]<<endl<<"linkPage of cafe : "<<linkPage[1]<<endl<<endl;
             break;
         }
         else if(choise_price=='c')
         {
             cout<<"\t\t\tHere are some High-cost cafes and juice shops.\n\n";
             for(int i=4;i<9;i++)
             {
            cout<<"Name of cafe : "<<name[i]<<endl<<"phone of cafe : "
            <<phone[i]<<endl<<"address of cafe : "<<address[i]<<endl<<"extraInformation of cafe : "
            <<extraInformation[i]<<endl<<"linkPage of cafe : "<<linkPage[i]<<endl<<endl;
             }

             break;
         }
         else cout<<"invalid choise!!!!!/tPlease enter a character from:\" a / b \"\n";
        }
        if(rebeatSearch())  {continue;cout<<endl;}
              else {break;cout<<endl;}
        }
    }
    else cout<<"invalid choise!!!!!/tPlease enter a character from:\" a / b \"\n";

        if(EndProgramOrRestart()){endProgect=0;  break;cout<<endl;}  else{endProgect=1; break;cout<<endl;}
    }
         }
 ////////////////  apper all cafes
         else if(option=='b')
         {
           for(int i=0;i<=index_now;i++)
           {
            cout<<"Cafe num "<<i+1<<" : \n\n"<<"Name of cafe : "<<name[i]<<endl<<"phone of cafe : "
            <<phone[i]<<endl<<"address of cafe : "<<address[i]<<endl<<"extraInformation of cafe : "
            <<extraInformation[i]<<endl<<"linkPage of cafe : "<<linkPage[i]<<endl<<endl;

           }
           cout<<"---------------------------------------------------------------------------------\n\n";
           if(EndProgramOrRestart()){endProgect=0; cout<<endl;}  else{endProgect=1;cout<<endl;}
         }

         else if(option=='c')
         {
             cout<<"Please Enter \"Name\" of the Cafe that You want ADD to check whether it is already existing in Main Menu OR NOT!\n\n";
             cout<<"To avoid Errors! :\n\n1- If the name is compound, enter the two names without a space between them.\n";
             cout<<"2- The first letter of the second name must be a small letter. \n3- Do not enter any spaces at the beginning or end.\n";
             cout<<"4- Make sure You Enter the \"Name\" Correctly.\n\n";

             string nameOfAdd;  cout<<"Name Of Add : ";  cin>>nameOfAdd;  cout<<endl;
             cout<<"---------------------------------------------------------------------------------\n";

             ///////change from uppercase to lowe case and vica versa
             if(islower(nameOfAdd[0])) nameOfAdd[0]=toupper(nameOfAdd[0]);

             for(int i=1;i<nameOfAdd.size();i++)
             {
                 if(isupper(nameOfAdd[i])) nameOfAdd[i]=tolower(nameOfAdd[i]);

             }
             ////search about name in array name
             bool found=false;
             for(int i=0;i<=index_now;i++)
             {
                 if(name[i] == nameOfAdd){
                  found=true;//  cout<<nameOfAdd<<"\tis already existing in Main Menu\n\n";
                    break; }
             }
                 if(found){cout<<"\t"<<nameOfAdd<<" : is already existing in Main Menu\n\n\n";}
                 else {
                index_now++;
                name[index_now]=nameOfAdd;
                cout<<"\t"<<nameOfAdd<<" : is NOT existing in Main Menu...So you can Enter it\n\n\n";
                cout<<"Please, Enter more Details about \""<<nameOfAdd<<" \n\n";
                cout<<"\t\tIf you do not know the answer to any of these details,\n\t\tplease write the following :";
                cout<<"\"No additional Information yet\"\n\n";
                cout<<"Name of cafe : ";cout<<name[index_now];cout<<endl;
                cout<<"phone of cafe : ";cin>>phone[index_now];cout<<endl;
                cout<<"address of cafe : ";cin>>address[index_now];cout<<endl;
                cout<<"extraInformation of cafe : ";cin>>extraInformation[index_now];cout<<endl;
                cout<<"linkPage of cafe : ";cin>>linkPage[index_now];cout<<endl<<endl;
                    }
                    if(EndProgramOrRestart()){endProgect=0; cout<<endl;}  else{endProgect=1;cout<<endl;}
             }

         else cout<<"invalid choise!!!!!/tPlease enter a character from:\" a / b / c \" \n";
         if(endProgect==1){cout<<"---------------------------------------------------------------------------------\n";
        cout<<"\n\n\n\n\t\tWe hope that you found the perfect cafe for you,\n\n";
        cout<<"\t\tThank you for using \"Your Perfect Cafe for You\"...\n\n\t\t\t\tHave a great day!\n\n"; break;}
      }//////// نهاية اكبر لوب

}///////////نهاية الفانكشن الكافيهات ///////////////////////////////////////////////

////////////////اعداد رغده مدحت
int main()
{
    while(1)
{
  string choise;
    cout<<"\t\tWelcome to \"Dalilk fi Asyut\" \n\n\tWe are here to help you make the best choice and find the perfect option tailored just for you.!"<<endl<<endl;
    cout<<"1 : to choose club "<<endl<<"2 : to choose hotel "<<endl<<"3 : to choose a cafe "<<endl<<"4 : to choose a restaurant"<<endl<<"5 : to choose a hospital and pharmcy"<<endl<<endl;
cin>>choise;
cout<<endl;
clearScreen();

    if(choise=="1"){clubs();}
    else if(choise=="2"){functions();}
    else if(choise=="3"){cafe();}
    else if (choise=="4"){resturant();}
    else if(choise=="5"){doctors();}
    else cout<<"Invalid number!!! Please, Enter number from 1 to 5\n\n\n";
    cout<<"\t\t\tWould you like to return to the main categories list?\na_yes \t b-No\n\n\t\tplease, Enter :\" a / b \"\n";

int check_yesOrNo;
    while(true)
    {

        string yesOrNo; cin>>yesOrNo;
        cout<<endl;
        clearScreen();
        cout<<"---------------------------------------------------------------------------------\n";
        if(yesOrNo =="a"){  check_yesOrNo=1; break;}

        else if(yesOrNo =="b"){check_yesOrNo=0;  break;}

        else cout<<"invalid choise!!!!!/tPlease enter a character from:\" a / b \"\n";
    }
    if(check_yesOrNo==1) {continue;}
     else {
    cout<<"\n\n\n\n\t\tThank you for using our service!\n\n We hope we have helped you find the best choice tailored just for you.\n\n";
     return 0;}

    }
return 0;
}
