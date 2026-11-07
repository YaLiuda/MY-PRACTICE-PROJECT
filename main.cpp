/* THE REVERSE PROJECT PROGRAM
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;


int main(){
toreverse();

vector <string> store;

    string line;
//variable to store fetched data from file 

ifstream readfile("reverselist.txt");
if (!readfile.is_open()){
cerr<<"[REVERSE LIST FILE FAILED TO OPEN]";
return 1;
}
    else {
while(getline(readfile, line)){
    store.push_back(line); } 
readfile.close();}

ofstream writefile("Reversedlist.txt");


if(!writefile.is_open()) { 
 cerr<<"[The file to which we write the reversed text failed to open]";
return 1;} 

else { 
    ofstream writefile("Reversedlist.txt",ios::app);
    writefile<< "~~[Reversed lines readed from the file]~~"<<endl;

    for(int i = store.size()-1; i>=0; i--){
//WE WILL BE ABLE TO READ ALL THE 20 LINE: LIKE 19,18,18 ...0, since they are
//the INDEXES, elements itselves


//writing to a file all the stored lines in the vector named "store",
//where indexes directly map to certain readed line from the file,
//but in this case we write to the file thanks to the for loop the lines
//BUT IN REVERSED ORDER
writefile<<store[i]<<endl; }
 
writefile.close(); }

return 0;}
*/







//MY INFOCALCULATOR PROJECT
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <cmath>
using namespace std;
int main(){
int n; cout<<"Insert the number of possible outputs "; 
cin>>n; 
int N; cout<<"Insert the amount of sended messages ";
cin>>N;

while(n<=0 || cin.fail()){
try{
throw runtime_error("Invalid input. Please enter a positive integer for n."); }
catch (const exception & error){
cout<<error.what()<<endl; }
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cin>>n; }

while(N<=0 || cin.fail()){
try{
throw runtime_error("Invalid input. Please enter a positive integer for N.");}
catch (const exception & error){
cout<<error.what()<<endl;}
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cin>>N; }

//i did this validation system so we avoid working with invalid data 


double I = log2(n);
double V= N*I;

cout<< fixed<<setprecision (3) <<"I="<<I<<" бит"<<endl;
cout<<"V="<<V<<" бит"<<endl;

return 0; }

// 
