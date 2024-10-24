// hamesha hamlog iostream include krte he fpr cin and cout but iske liye we require fstream 
//ifstream dna ofstream for outfput and input file strem respectively, and fstream to inlcude both of them!

#include <iostream>
#include <fstream>
using namespace std;

int main(){


    // char poem[100];
    // cout<<"write a poem : " <<endl;
    // cin>>poem;
    // cout<<poem;

    /////This reads the input from the user. However, it only reads until the first space. If the poem contains spaces, cin won’t capture the whole sentence. To handle spaces, you should use cin.getline(poem, 100); instead.


/////////////////////////
    // char poem[100];
    //     cout << "Write a poem: " << endl;
    //     cin.getline(poem, 100);
        ///read a full line of text (including spaces) from the user input and store it in the poem character array
        // cout << "Your poem: " << endl;
        // cout << poem;


    string poem = "Roses are red, violets are blue, sugar is sweet, and so ";
    poem.append("are you.");

    ofstream file("poem.txt");
    file << poem;




}