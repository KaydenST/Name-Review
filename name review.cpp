#include <iostream>
using namespace std;

int main () {
    
    string input = "";
    string choice = "";
    
	cout << "Name input/review program" << endl;
	
	cout << endl << "Press any key to continue: ";
	getline (cin, input);
	if (input != "0.0000001")
	{
		goto Name;
    }

Name:

        int rand_num = 0;
		string name = "";
		
		string words[44];
		words[0] = "nice";
		words[1] = "good";
		words[2] = "cool";
		words[3] = "super";
		words[4] = "fantastic";
		words[5] = "awesome";
		words[6] = "exceptional";
		words[7] = "creative";
		words[8] = "funny";
		words[9] = "boring";
		words[10] = "lucky";
		words[11] = "entertaining";
		words[12] = "hax0r";
		words[13] = "suspicious";
		words[14] = "audacious";
		words[15] = "stocial";
		words[16] = "hilarious";
		words[17] = "intelligent";
		words[18] = "thoughtful";
		words[19] = "fairy";
		words[20] = "transitive property-like";
		words[21] = "ingenius";
		words[22] = "caring";
		words[23] = "super genius";
		words[24] = "amazing";
		words[25] = "made-up";
		words[26] = "math genius";
		words[27] = "tedious and boring";
		words[28] = "unlucky";
		words[29] = "gamer-like";
		words[30] = "troll-like";
		words[31] = "this won't make sense";
		words[32] = "you just got trolled";
		words[33] = "if you got this one it won't make sense but you win $1,000,000";
		words[34] = "stern";
		words[35] = "stubborn";
		words[36] = "churlish";
		words[37] = "cowardly";
		words[38] = "fair";
		words[39] = "unfair";
		words[40] = "trustworthy";
		words[41] = "dumb";
		words[42] = "not good";
		words[43] = "uncreative";

		int num = 0;

		cout << endl << "Please enter a name: ";
		getline (cin, name);
		rand_num = rand()%44;
		
		if (rand_num == 1) {
		cout << endl << endl << "You have a(n) " << words[0] << " name!" << endl;
		}
			else if (rand_num == 2) {
			cout << endl << "You have a(n) " << words[1] << " name!" << endl;
			}
			else if (rand_num == 3) {
			cout << endl << "You have a(n) " << words[2] << " name!" << endl;
			}
			else if (rand_num == 4) {
			cout << endl << "You have a(n) " << words[3] << " name!" << endl;
			}
			else if (rand_num == 5) {
			cout << endl << "You have a(n) " << words[4] << " name!" << endl;
			}
			else if (rand_num == 6) {
			cout << endl << "You have a(n) " << words[5] << " name!" << endl;
			}
			else if (rand_num == 7) {
			cout << endl << "You have a(n) " << words[6] << " name!" << endl;
			}
			else if (rand_num == 8) {
			cout << endl << "You have a(n) " << words[7] << " name!" << endl;
			}
			else if (rand_num == 9) {
			cout << endl << "You have a(n) " << words[8] << " name!" << endl;
			}
			else if (rand_num == 10) {
			cout << endl << "You have a(n) " << words[9] << " name!" << endl;
			}
			else if (rand_num == 11) {
			cout << endl << "You have a(n) " << words[10] << " name!" << endl;
			}
			else if (rand_num == 12) {
			cout << endl << "You have a(n) " << words[11] << " name!" << endl;
			}
			else if (rand_num == 13) {
			cout << endl << "You have a(n) " << words[12] << " name!" << endl;
			}
			else if (rand_num == 14) {
			cout << endl << "You have a(n) " << words[13] << " name!" << endl;
			}
			else if (rand_num == 15) {
			cout << endl << "You have a(n) " << words[14] << " name!" << endl;
			}
			else if (rand_num == 16) {
			cout << endl << "You have a(n) " << words[15] << " name!" << endl;
			}
			else if (rand_num == 17) {
			cout << endl << "You have a(n) " << words[16] << " name!" << endl;
			}
			else if (rand_num == 18) {
			cout << endl << "You have a(n) " << words[17] << " name!" << endl;
			}
			else if (rand_num == 19) {
			cout << endl << "You have a(n) " << words[18] << " name!" << endl;
			}
			else if (rand_num == 20) {
			cout << endl << "You have a(n) " << words[19] << " name!" << endl;
			}
			else if (rand_num == 21) {
			cout << endl << "You have a(n) " << words[20] << " name!" << endl;
			}
			else if (rand_num == 22) {
			cout << endl << "You have a(n) " << words[21] << " name!" << endl;
			}
			else if (rand_num == 23) {
			cout << endl << "You have a(n) " << words[22] << " name!" << endl;
			}
			else if (rand_num == 24) {
			cout << endl << "You have a(n) " << words[23] << " name!" << endl;
			}
			else if (rand_num == 25) {
			cout << endl << "You have a(n) " << words[24] << " name!" << endl;
			}
			else if (rand_num == 26) {
			cout << endl << "You have a(n) " << words[25] << " name!" << endl;
			}
			else if (rand_num == 27) {
			cout << endl << "You have a(n) " << words[26] << " name!" << endl;
			}
			else if (rand_num == 28) {
			cout << endl << "You have a(n) " << words[27] << " name!" << endl;
			}
			else if (rand_num == 29) {
			cout << endl << "You have a(n) " << words[28] << " name!" << endl;
			}
			else if (rand_num == 30) {
			cout << endl << "You have a(n) " << words[29] << " name!" << endl;
			}
			else if (rand_num == 31) {
			cout << endl << "You have a(n) " << words[30] << " name!" << endl;
			}
			else if (rand_num == 32) {
			cout << endl << "You have a(n) " << words[31] << " name!" << endl;
			}
			else if (rand_num == 33) {
			cout << endl << "You have a(n) " << words[32] << " name!" << endl;
			}
			else if (rand_num == 34) {
			cout << endl << "You have a(n) " << words[33] << " name!" << endl;
			}
			else if (rand_num == 35) {
			cout << endl << "You have a(n) " << words[34] << " name!" << endl;
			}
			else if (rand_num == 36) {
			cout << endl << "You have a(n) " << words[35] << " name!" << endl;
			}
			else if (rand_num == 37) {
			cout << endl << "You have a(n) " << words[36] << " name!" << endl;
			}
			else if (rand_num == 38) {
			cout << endl << "You have a(n) " << words[37] << " name!" << endl;
			}
			else if (rand_num == 39) {
			cout << endl << "You have a(n) " << words[38] << " name!" << endl;
			}
			else if (rand_num == 40) {
			cout << endl << "You have a(n) " << words[39] << " name!" << endl;
			}
			else if (rand_num == 41) {
			cout << endl << "You have a(n) " << words[40] << " name!" << endl;
			}
			else if (rand_num == 42) {
			cout << endl << "You have a(n) " << words[41] << " name!" << endl;
			}
			else if (rand_num == 43) {
			cout << endl << "You have a(n) " << words[42] << " name!" << endl;
			}
			else if (rand_num == 44) {
			cout << endl << "You have a(n) " << words[43] << " name!" << endl;
			}
			
			Choice:
			
			cout << endl << "Would you like to analyze another name? (Y or N): ";
			getline(cin, choice);
			if (choice == "Y")
			{
                       goto Name;
                       }
            else if (choice == "y")
            {
                       goto Name;
                       }
            else if (choice == "N")
            {
                       goto End;
                       }
            else if (choice == "n")
            {
                       goto End;
                       }
            else
            {
                goto Error;
                }
                   
            Error:
                  cout << endl << "You've entered an invalid character. Try again.";
                  goto Choice;
                  
            End:
                
                return 0;                                 
}
