#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool createFile(string file_name);
bool writeToFile(string file_name, string data);
string readfromFile(string file_name);
bool appendToFile(string file_name, string data);
bool writeToBinaryFile(string file_name, int data);
bool readFromBinaryFile(string file_name, int* data);

int main()
{
	// create file

	//if (!createFile("my_file.txt")) {
	//	cout << "Plik nie zosta³ utworzony !!!";
	//}
	//else {
	//	cout << "Plik utworzony i zamkniêty.";
	//}

	// write to file

	//string dane = "Dane zapisane do pliku ..........";
	//if (!writeToFile("my_file.txt", dane)) {
	//	cout << "Nie uda³o siê zapisaæ do pliku !!!";
	//}
	//else {
	//	cout << "Dane zapisane do pliku.";
	//}

	// read from file
	//cout << readfromFile("my_file.txt");

	 //append to file
	
	//string dane = "\nNowe dane ++++++\n";
	//if (!appendToFile("my_file.txt", dane)) {
	//	cout << "Nie uda³o siê zapisaæ do pliku !!!";
	//}
	//else {
	//	cout << "Dane zapisane do pliku.";
	//}

	// write / read binary data
	int x = 12;
	int y;

	if (writeToBinaryFile("my_file.bin", x)) {
		cout << "Binary file: write OK" << endl;
		if (readFromBinaryFile("my_file.bin", &y)) {
			cout << "Binary file: read OK" << endl;
			cout << "y = " << y << endl;
		}
		else {
			cout << "Binary file: read error !!!";
		}
	}
	else {
		cout << "Binary file: write error !!!";
	}


	return 0;
}; 

bool createFile(string file_name) {
	bool result = false;
	fstream my_file;
	my_file.open(file_name, ios::out);
	
	if (my_file.is_open()) {
		result = true;
		my_file.close();
	}
	return result;
}

bool writeToFile(string file_name, string data) {
	bool result = false;
	fstream my_file;
	my_file.open(file_name, ios::out);

	if (my_file.is_open()) {
		my_file << data;
		result = true;
		my_file.close();
	}
	return result;
}

string readfromFile(string file_name) {
	string result = "";
	fstream my_file;
	my_file.open(file_name, ios::in);

	if (my_file.is_open()) {
		string line;
		while (getline(my_file, line))
			result.append(line).append("\n");
		my_file.close();
	}
	return result;
}

bool appendToFile(string file_name, string data) {
	bool result = false;
	ofstream my_file;
	my_file.open(file_name, ios::app);

	if (my_file.is_open()) {
		my_file << data;
		result = true;
		my_file.close();
	}
	return result;
}

bool writeToBinaryFile(string file_name, int data) {
	bool result = false;
	fstream my_file;
	my_file.open(file_name, ios::out | ios::binary);
	if (my_file.is_open()) {
		my_file.write((char*)&data, sizeof(data));
		result = true;
		my_file.close();
	}
	return result;
}

bool readFromBinaryFile(string file_name, int* data) {
	bool result = false;
	int read_result;
	fstream my_file;
	my_file.open(file_name, ios::in | ios::binary);
	if (my_file.is_open()) {
		my_file.read((char*)&read_result, sizeof(data));
		*data = (int)read_result;
		result = true;
		my_file.close();
	}
	return result;
}

