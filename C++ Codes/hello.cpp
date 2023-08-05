#include<iostream>
#include<conio.h>
#include<fstream>
#include <sstream>
#include<string>
using namespace std;
int choice;

int main(){
    do{
system("cls"); //main menu content 
   cout << "File Handling Main Menu" << endl;
   cout  << " 1. Write a C++ program to create a new text file and write some text into it." <<endl;
   cout  << " 2. Write a C++ program to open an existing text file and display its contents on the console." <<endl;
   cout  << " 3. Write a C++ program to count the number of lines in a text file."<<endl;
   cout  << " 4. Write a C++ program to count the number of words in a text file."<<endl;
   cout  << " 5. Write a C++ program to copy the contents of one text file to another."<<endl;
   cout  << " 6 - Exit" << endl;
   cout << "Enter your choice: ";
   cin >> choice;

   switch(choice){
    case 1:
    {
     system("cls");
        cout  << "1. Write a C++ program to create a new text file and write some text into it." <<endl;
        
        fstream myfile; //fstream is use to be functional and can do both ifstream and ofstream 

        myfile.open("text.txt", ios::app); //mode flag use is append to add data in the file
        char text[200]; //
        
         cout << "\nWrite any text: ";
                  cin.ignore();
         cin.getline(text,200); //writing text 
        
         if(myfile.is_open()){ //condition if file is open
           myfile << text << endl;
           cout << "\nYour text has been saved in the text file";
           myfile.flush();
         myfile.close();

        } else { //condtion if file is not open
            cout << "Cannot open file";
        }

     getch();
    break;
    }
    case 2:
    {
     system("cls");
         cout  << " 2. Write a C++ program to open an existing text file and display its contents on the console." <<endl;
         fstream myfile;  //fstream is use to be functional and can do both ifstream and ofstream 
            string get;

        myfile.open("text.txt", ios::in); //opening a text file

        if(myfile.is_open()){
            while(getline(myfile, get)){ //getting data from the file
                cout << get << endl;
            }
        } 
        else {
            cout << "File is not open";
        }   
     myfile.close(); 
     getch();   
    break;
    }
    case 3:
    {
       system("cls");
           cout  << " 3. Write a C++ program to count the number of lines in a text file."<<endl;
           int count = 0;
           string line;
            fstream myfile;

            myfile.open("text.txt", ios::in);

            if(myfile.is_open()){
                while(getline(myfile, line)){
                    count++;
                }
                myfile.close();

                cout << "Count: " << count;
            } else{
                cout << "file is not open";
            }
            
       getch();
    break;
    }
    case 4:
    {
        system("cls");
        string wordLine;
        int wordCount = 0;
             cout  << " 4. Write a C++ program to count the number of words in a text file."<<endl;
                fstream myfile;
                myfile.open("text.txt", ios::in); 

                if(myfile.is_open()){
                    while(getline(myfile,wordLine)){
                                stringstream ss(wordLine);
                                string word;

                                while( ss >> word){
                                    wordCount++;
                                }
                    }
                    myfile.close();
                    cout <<"Word Count: " <<wordCount;
                }
        
        getch();
        break;
    }
    case 5:
   { 
     system("cls");
     fstream firstCopy;
     fstream secondCopy;
          cout  << " 5. Write a C++ program to copy the contents of one text file to another."<<endl;
    string lines, linesCopy;
     firstCopy.open("text.txt",ios::in);
     secondCopy.open("textCopy.txt", ios::out);

     if(firstCopy.is_open() && secondCopy.is_open()){
                    cout << "The text in file has been copied";

        while(getline(firstCopy, lines)){
            secondCopy << lines << endl;

        }
     } 
     else{
        cout << "File is not open";
     }
     getch;
    break;
   }
    case 6:
    {
        exit(0);
    }
   }
    }while(choice);
getch();
    return 0;
}