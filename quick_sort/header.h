#include <iostream>
#include <vector>
using namespace std;

// gets input from user and returns an unsorted vector
vector<int> user_data();


vector<int> user_data(){

	cout << "\nEnter integers to be sorted\n" << "When finished enter -999\n\n";


	int user_num;
	vector<int> data;						// holds user inputs
	bool not_finished = true;		// flag to stop user input

	// get user input until -999 entered
	while(not_finished){
		cout << "integer: ";
		cin >> user_num;

		if(user_num == -999){ not_finished = false; }
		else{ data.push_back(user_num); }

	}// while

	cout << "\nYou entered: ";
	for(int i=0; i< data.size(); i++){
		cout << data.at(i) << " ";
	}
	cout << "\n\n";

	return data;
}
