#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
int main(){
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